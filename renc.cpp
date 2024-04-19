#include "renc.h"
#include "mbed.h"
renc::renc(InterruptIn &A,InterruptIn &B):_A(A),_B(B){;}

void renc::a_slit(){
    if(_A != _B)passed_slit++;
    else passed_slit--;
}

void renc::b_slit(){
    if(_A == _B)passed_slit++;
    else passed_slit--;
}

void renc::getangle(){

    _A.rise(callback(this,renc::a_slit()));
    _A.fall(callback(this,renc::a_slit()));
    _B.rise(callback(this,renc::b_slit()));
    _B.fall(callback(this,renc::b_slit()));
    _ang = 0.45f * passed_slit;

}

int renc::getrev(){
    _rev = (int)_ang / 360;
    return _rev;
}

void renc::renc_read(){
    while(true){//処理はここに
        renc::getangle();
        //_angが返ってきてるはず
    }
}

