#include "pico/stdlib.h"
#include "button.h"
#include "digital_output.h"
#include "config.h"

Button but_a(A_PIN, 30);
DigitalOutput led(LED_PIN);

int last_button_state = 0;

void setup(){
    stdio_init_all();
}

void loop(){
    but_a.update();
    int but_val = but_a;
    if (but_val != last_button_state)
    {
        if (but_val == 1)
        {
            led = !led;
        }
    }
    last_button_state = but_val;
}

int main() {
    setup();

    while (true) {
        loop();
    }

    return 0;
}
