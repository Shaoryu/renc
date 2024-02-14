#ifndef Rotary_encoder_H
#define Rotary_encoder_H

#include "mbed.h"

class renc{
    private:

    InterruptIn &_A,&_B;
    float _ang;
    int _rev;
    int passed_slit;

    public:
        renc(InterruptIn &A,InterruptIn &B);
        void a_slit();
        void b_slit();
        void getangle();
        int getrev();
        void renc_read();
};
#endif

