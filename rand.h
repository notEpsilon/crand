#ifndef RAND_H
#define RAND_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#if defined(_WIN32)
#include <windows.h>
#include <ntsecapi.h>
#endif

#if defined(__APPLE__)
#include <sys/random.h>
#endif

#if defined(__linux__)
#include <sys/random.h>
#endif

typedef unsigned char byte_t;

#if defined(__cplusplus)
extern "C" {
#endif

/**
 * @brief Generates cryptographically-secure random bytes
 * 
 * @param numberOfBytes how many bytes to generate
 * @return byte_t* (alias for unsigned char*) or NULL on failure
 */
byte_t* randomBytes(uint8_t numberOfBytes);

#if defined(__cplusplus)
}
#endif

#endif  // RAND_H
