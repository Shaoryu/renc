#ifndef Rotary_encoder_H
#define Rotary_encoder_H

#include "mbed.h"

class renc
{
    private:

    float _ang;
    int _rev;
    int passed_slit;
    
    InterruptIn _A;
    InterruptIn _B;

    public:
        renc(PinName A,PinName B);
        void a_slit();
        void b_slit();
        void getangle();
        int getrev();
        void renc_read();
};
#endif

