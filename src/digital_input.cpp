//
// Created by pepe on 25/12/21.
//

#include "digital_input.h"

DigitalInput::DigitalInput(uint pin) : pin_(pin) {
    gpio_init(pin_);
    gpio_set_dir(pin_, GPIO_IN);
    gpio_pull_up(pin_);
}

int DigitalInput::read() {
    return gpio_get(pin_);
}

DigitalInput::operator int() {
    return read();
}
