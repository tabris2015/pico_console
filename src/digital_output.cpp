//
// Created by pepe on 25/12/21.
//

#include "digital_output.h"

DigitalOutput::DigitalOutput(uint pin) : pin_(pin) {
    gpio_init(pin_);
    gpio_set_dir(pin_, GPIO_OUT);
    gpio_put(pin_, false);
}

void DigitalOutput::write(int value) {
    gpio_put(pin_, value);
}

int DigitalOutput::read() {
    return gpio_get(pin_);
}

DigitalOutput &DigitalOutput::operator=(int value) {
    write(value);
    return *this;
}

DigitalOutput &DigitalOutput::operator=(DigitalOutput &rhs) {
    write(rhs.read());
    return *this;
}

DigitalOutput::operator int() {
    return read();
}
