//code
main(){
    //code
    while(DataRecieved){
        //code
        uint8_t GPSparse[15][200] = {}; //NMEA rozdelena podle radku
        uint8_t nsat = 0; //pocet GSV zprav

        uint8_t GLLposition[8] = {}; //delka daneho pole v RMC
        uint8_t GLL[8][11] = {}; //GLL buffer

        mainParse(GPSbuffer, GPSparse, 200, &nsat);
        parseFrame(GPSparse, GLL, GLLposition, 13, 11, 0);
        //code
    }
    //code
}