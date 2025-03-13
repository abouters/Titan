#ifndef TITAN_H
#define TITAN_H

#include <CAN.h>

class Titan{
    public:
        Titan(CanControl* can);

        int16_t read(uint8_t id);
    private:
        CanControl* can;
};

#endif