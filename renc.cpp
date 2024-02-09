#include "renc.h"
#include "mbed.h"
renc::renc(InterruptIn &A,InterruptIn &B):_A(A),_B(B){}

void renc::a_slit(){
    if(_A != _B)passed_slit++;
    else passed_slit--;
    return 0;
}

void renc::b_slit(){
    if(_A == _B)passed_slit++;
    else passed_slit--;
    return 0;
}

void renc::getangle(){
        _A.rise(a_slit);
        _A.fall(a_slit);
        _B.rise(b_slit);
        _B.fall(b_slit);
        _ang = 0.45f * passed_slit;
        return 0;
}

int renc::getrev(){
    _rev = (int)_ang / 360;
    return _rev;
}

void renc::renc_read(){
    while(true){//処理はここに
        renc.getangle();
        //_angが返ってきてるはず
    }
}
