#include <iostream>
#include <string>
#include <cstdint>
#include "ate401_uart.h"

int main(void)
{
  std::cout << std::endl;

  std::vector<uint8_t> res = packed({ static_cast<uint8_t>(Pi401Cmd::LED_RED),  static_cast<uint8_t>(ATE401Indicate::ON) });

  std::cout << "Packed elements:" << std::endl;
  for (const auto& element : res) {
    std::cout << "0x" << std::hex << static_cast<int>(element) << " ";
  }
  std::cout << std::endl;
  return 0;
}