# crand
cross-platform cryptographically-secure random bytes generator using random kernel drivers entropy accessed by different syscalls on different operating systems.

## Usage
Copy the `rand.h` and `rand.c` files into your project, include the `rand.h` and you are good to go.
> the lib is tested on Windows and Linux but not on macOS

Call this function to generate random bytes
```c
byte_t* randomBytes(uint8_t numberOfBytes);
```
don't forget to free the returned buffer.

## OS
supports Windows, Linux, and macOS
