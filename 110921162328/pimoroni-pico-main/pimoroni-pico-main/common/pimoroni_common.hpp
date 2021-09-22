#pragma once
#include <stdint.h>
#include <climits>
#include "pico/stdlib.h"

#define PIMORONI_I2C_DEFAULT_INSTANCE i2c0
#define PIMORONI_SPI_DEFAULT_INSTANCE spi0

namespace pimoroni {
    static const unsigned int PIN_UNUSED = INT_MAX; // Intentionally INT_MAX to avoid overflowing MicroPython's int type

    // I2C
    static const unsigned int I2C_DEFAULT_BAUDRATE = 400000;
    static const unsigned int I2C_DEFAULT_SDA = 20;
    static const unsigned int I2C_DEFAULT_SCL = 21;
    static const unsigned int I2C_DEFAULT_INT = 22;

    static const unsigned int I2C_BG_SDA = 4;
    static const unsigned int I2C_BG_SCL = 5;
    static const unsigned int I2C_BG_INT = 3;

    // SPI
    static const unsigned int SPI_DEFAULT_MOSI = 19;
    static const unsigned int SPI_DEFAULT_MISO = 16;
    static const unsigned int SPI_DEFAULT_SCK = 18;

    static const unsigned int SPI_BG_FRONT_PWM = 20;
    static const unsigned int SPI_BG_FRONT_CS = 17;

    static const unsigned int SPI_BG_BACK_PWM = 21;
    static const unsigned int SPI_BG_BACK_CS = 22;

    enum BG_SPI_SLOT {
      BG_SPI_FRONT,
      BG_SPI_BACK,
      PICO_EXPLORER_ONBOARD
    };

    enum BOARD {
      BREAKOUT_GARDEN,
      PICO_EXPLORER
    };

    enum Polarity {
      ACTIVE_LOW = 0,
      ACTIVE_HIGH = 1
    };

    inline uint32_t millis() {
      return to_ms_since_boot(get_absolute_time());
    }
}