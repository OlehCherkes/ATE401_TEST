#include "pch.h"
#include <iostream>
#include <cstdint>
#include "ate401_i2c.h"

TEST(ATE401, WRITE) {

  bool result = writeToEEPROM(static_cast<uint16_t>(EEPROM_WRITE_ADDR::RTE), 1);

  ASSERT_EQ(result, true);
}

TEST(ATE401, READ) {

  uint8_t result = readFromEEPROM(static_cast<uint16_t>(EEPROM_READ_ADDR::BUZZER));

  ASSERT_EQ(result, 0xFF);
}