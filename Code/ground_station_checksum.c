
uint16_t xor = 0;
for ( uint8_t i = 1 ; i < cpypos ; i ++ ) {
    xor = xor ^ tx[i]; //XOR mezi aktualnim znakem a predeslym vysledkem
}

uint8_t checksum[2] = {};
itoa(xor, checksum, 16); //prevod kontrolniho spouctu do hexadecimalniho textoveho formatu
if((checksum[0]>96) && (checksum[0]<123)) checksum[0] ^=0x20; //zmena z malych pismen na velka
if((checksum[1]>96) && (checksum[1]<123)) checksum[1] ^=0x20;