#include "pico/stdlib.h"
#include "button.h"
#include "config.h"

Button but_a(A_PIN, 30);

int last_button_state = 0;
bool led_state = true;

void setup(){
    stdio_init_all();
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
}

void loop(){
    but_a.update();
    int but_val = but_a;
    if (but_val != last_button_state)
    {
        if (but_val == 1)
        {
            led_state = !led_state;
        }
    }
    gpio_put(LED_PIN, led_state);
    last_button_state = but_val;
}

int main() {
    setup();

    while (true) {
        loop();
    }

    return 0;
}
