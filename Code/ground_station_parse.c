uint8_t framelen[10] = {};      //pozice v aktualnim poli
uint8_t frame[10][13] = {};     //buffer pro data rozdelena do jednotlivych poli

for(int i = 0; i< len; i++){
    if(rx[i] != ';'){ //pokud znak neni oddelovaci
        frame[n][framelen[n]] = rx[i]; //do bufferu se ulozi aktualni znak
        framelen[n]++;       //presun na dalsi pozici v poli
    }
    else{
        n++;                //presun na dalsi pole
        framelen[n] = 0;    //vynulovani pozice v tomto poli
    }
}