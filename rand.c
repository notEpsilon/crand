#include "rand.h"

byte_t* randomBytes(uint8_t numberOfBytes) {
  byte_t* buff = (byte_t*)malloc(sizeof(byte_t) * numberOfBytes);

  if (buff == NULL) {
    return NULL;
  }

  #if defined(_WIN32)
    RtlGenRandom(buff, numberOfBytes);
  #endif

  #if defined(__APPLE__)
    if (getentropy(buff, numberOfBytes) != 0) {
      return NULL;
    }
  #endif

  #if defined(__linux__)
    if (getrandom(buff, numberOfBytes, 0) == -1) {
      return NULL;
    }
  #endif

  return buff;
}
