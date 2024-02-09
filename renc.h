#ifndef Rotary_encoder_H
#define Rotary_encoder_H

#include "mbed.h"

class renc{
    private:
    void a_slit();
    void b_slit();
    float _ang;
    int _rev;

    public:
        renc(PinName A,PinName B);
        float getangle();
        int getrev();
        void renc_read();
};
#endif
