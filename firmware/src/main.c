#include "whistle.h"

int main(void) {
    // Initialize peripherals and audio input

    while (1) {
        // Read samples from microphone and process
        short samples[256] = {0};
        whistle_process_audio(samples, 256);
    }

    return 0;
}
