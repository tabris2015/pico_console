//
// Created by pepe on 25/12/21.
//

#include "button.h"

Button::Button(uint pin, uint32_t debounce_delay_ms)
: input_(pin), debounce_delay_ms_(debounce_delay_ms)
{

}

void Button::update() {
    int reading = input_;
    if (reading != last_state) {
        last_debounce_time_ms_ = millis();
    }

    if ((millis() - last_debounce_time_ms_) > debounce_delay_ms_) {
        if (reading != state_) {
            state_ = reading;
        }

    }

    last_state = reading;
}

int Button::get_state() {
    return state_;
}

Button::operator int() {
    return get_state();
}




