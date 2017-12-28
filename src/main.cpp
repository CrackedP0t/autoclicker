#include <Mouse.h>

const int switch_high_pin = 5;
const int switch_low_pin = 6;
const int switch_in_pin = 9;

// const int ds_data = 7;
// const int ds_clock = 8;

// CRGB dotstar;

// void soft_send(int data, int clock, uint8_t byte) {
//     for (int i = 8; i != 0; i--) {
//         uint8_t bit = byte & (1 << i);

//         if (bit) {
//             digitalWrite(data, HIGH);
//         } else {
//             digitalWrite(data, LOW);
//         }

//         digitalWrite(clock, HIGH);
//         digitalWrite(clock, LOW);
//     }
// }

// void ds_color(uint8_t r, uint8_t g, uint8_t b) {
//     for (int i = 0; i < 4; i++) {
//         soft_send(ds_data, ds_clock, 0);
//     }

//     soft_send(ds_data, ds_clock, 0xff);
//     soft_send(ds_data, ds_clock, b);
//     soft_send(ds_data, ds_clock, g);
//     soft_send(ds_data, ds_clock, r);

//     for (int i = 0; i < 4; i++) {
//         soft_send(ds_data, ds_clock, 0xff);
//     }
// }

// void ds_begin() {
//     pinMode(ds_data, OUTPUT);

//     pinMode(ds_clock, OUTPUT);
// }

void setup() {
    pinMode(switch_high_pin, OUTPUT);
    digitalWrite(switch_high_pin, HIGH);

    pinMode(switch_low_pin, OUTPUT);
    digitalWrite(switch_low_pin, LOW);

    pinMode(switch_in_pin, INPUT);


    // ds_begin();

    Mouse.begin();
}

void loop() {
    if (digitalRead(switch_in_pin) == HIGH) {
        Mouse.click(MOUSE_LEFT);

        delay(5);
    }
}
