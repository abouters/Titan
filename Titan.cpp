#include <Titan.h>

Titan::Titan(CanControl* can){
    this->can = can;
}

int16_t Titan::read(uint8_t id){
    uint8_t data[8];
    can->CANDataPull(0x120 + id, data);
    return (data[0] << 8) + data[1];
}