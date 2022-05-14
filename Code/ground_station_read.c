uint8_t buff = 0;       //buffer pro aktualne prijaty znak
uint8_t rx[1000] = {};  //buffer pro aktualne prijimanou zpravu

while(buff != '\n'){ //dokud neprijde konec zpravy
    HAL_UART_Receive(&huart1, &buff, 1, 4000);
    rx[len] = buff; //ulozeni znaku do aktualne prijimaneho bufferu
    len ++;
}