// Example usage for tm1638-library library by rjbatista.

#include "tm1638-library.h"

// Initialize objects from the lib
Tm1638library tm1638library;

void setup() {
    // Call functions on initialized library objects that require hardware
    tm1638library.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    tm1638library.process();
}
