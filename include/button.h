//
// Created by pepe on 25/12/21.
//

#ifndef PICO_CONSOLE_BUTTON_H
#define PICO_CONSOLE_BUTTON_H

#include "pico/stdlib.h"
#include "digital_input.h"
#include "utils.h"

class Button {
public:
    Button(uint pin, uint32_t debounce_delay_ms);
    void update();
    int get_state();
    operator int();
private:
    DigitalInput input_;
    uint32_t debounce_delay_ms_;
    uint32_t last_debounce_time_ms_;
    int state_;
    int last_state;

};


#endif //PICO_CONSOLE_BUTTON_H
