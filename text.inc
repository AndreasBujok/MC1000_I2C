
.org $0300
; text on Page3
             ; 01234567890123456709
LOGO	.text "MC1000 i2c_lcd.src  "
	.byte $00

VERSION	.text "Version "
	.byte $00

ROM	.text "ROM "
	.byte $00

TIMERTICK
	.text "Timertick: "
	.byte $00
	

.org $0330 + Ttick_1ms
	.text "1 ms"
	.byte $00

.org $0330 + Ttick_5ms
	.text "5 ms"
	.byte $00

.org $0330 + Ttick_10ms
	.text "10 ms"
	.byte $00