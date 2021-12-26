//
// Created by pepe on 25/12/21.
//

#ifndef PICO_CONSOLE_DIGITAL_INPUT_H
#define PICO_CONSOLE_DIGITAL_INPUT_H

#include "pico/stdlib.h"

class DigitalInput {
public:
    DigitalInput(uint pin);
    int read();
    operator int();
private:
    uint pin_;
};


#endif //PICO_CONSOLE_DIGITAL_INPUT_H
