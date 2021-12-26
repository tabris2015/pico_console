//
// Created by pepe on 25/12/21.
//

#ifndef PICO_CONSOLE_DIGITAL_OUTPUT_H
#define PICO_CONSOLE_DIGITAL_OUTPUT_H

#include "pico/stdlib.h"

class DigitalOutput {
public:
    DigitalOutput(uint pin);
    void write(int value);
    int read();

    DigitalOutput &operator= (int value);
    DigitalOutput &operator= (DigitalOutput &rhs);
    operator int();

private:
    uint pin_;
};


#endif //PICO_CONSOLE_DIGITAL_OUTPUT_H
