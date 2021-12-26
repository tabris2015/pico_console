//
// Created by pepe on 25/12/21.
//

#include "utils.h"

uint32_t millis(){
    return to_ms_since_boot(get_absolute_time());
}

uint64_t micros(){
    return to_us_since_boot(get_absolute_time());
}