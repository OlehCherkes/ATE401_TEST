#pragma once
#include <vector>
#include <cstdint>

std::vector<uint8_t> time_le(const uint32_t tm);
void getTime(const void* data);

void setTXD();
void getTXD();

void setRXD(const uint8_t data);
void getRXD();

void setOUT(const uint8_t state);
void getOUT();