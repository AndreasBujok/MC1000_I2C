
I2CLCDWR = %01001110
I2CLCDRD = %01001111

EXPWRCMD = %00001100 ; P0-P3 expander, K=1, E=1, RW=0, RS=0
EXPWRDAT = %00001101 ; P0-P3 expander, K=1, E=1, RW=0, RS=1
RS	= 0 ; P0 PCF8574, Register Select
RW	= 1 ; P1 PCF8574, Read/Write
E	= 2 ; P2 PCF8574, Enable, commit by falling edge
K	= 3 ; P3 PCF8574, LCD Backlight, K=1 On, K=0 Off



