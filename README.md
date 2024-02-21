# U8G2 for the ESP32 example

The U8G2 is a C graphics library for monochrome screen such as the SSD1306. located at https://github.com/olikraus/u8g2/

this codebase demos how to use the U8g2 library for the ESP32 chip family.

This code was tested on the ESP32S3 but should work on any ESP32 family.

It compiles with the IDF version 5.1.x

# For I2C devices

NB. There is one quirk with U8G2 that when you set it up you need to multiply the address by 2. I don’t know why this is. https://github.com/olikraus/u8g2/wiki/u8x8reference#seti2caddress

So You’ll see in my code
u8x8_SetI2CAddress(&u8g2.u8x8, 0x3c \* 2);

# Infrastructure

in the components folder you will will notice a custom CMakeLists.txt that references the u8g2 C files.
the components/u8g2_components/u8g2 folder is a cloned version of the official U8G2 library at https://github.com/olikraus/u8g2.

# credit

Thank you Neil Kolban for getting the ball rolling https://github.com/nkolban/esp32-snippets
