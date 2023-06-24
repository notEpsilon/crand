#include <stdio.h>
#include <stdlib.h>
#include "rand.h"

// Example Usage
int main(void) {
  byte_t* bytes = randomBytes(10);

  if (bytes == NULL) {
    perror("[rand] error: couldn't generate random bytes");
    return EXIT_FAILURE;
  }

  for (int i = 0; i < 10; i++) {
    printf("%02x", bytes[i]);
  }

  free(bytes);
  bytes = NULL;

  return EXIT_SUCCESS;
}
