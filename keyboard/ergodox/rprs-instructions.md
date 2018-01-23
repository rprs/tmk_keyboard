# How to make this work on a new computer.

1. Download your copy of the source code from https://github.com/rprs/tmk_keyboard
2. Install the required dependencies:
  1. sudo apt install gcc-avr
  2. sudo apt install avr-libc
3. Build the tool.
  1. cd tmk_keyboard/keyboard/ergodox/
  2. make -f Makefile.lufa clean
  3. make -f Makefile.lufa rprs
4. Use the teesny instructions to install the .hex file on your keyboard.


# References
- git hub instructions on how to buil.
  https://github.com/ErgoDox-EZ/reactor/blob/master/lib/firmware/tmk_core/doc/build.md
- Where to get the teensy loader
  https://www.pjrc.com/teensy/loader.html
