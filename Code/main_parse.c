void mainParse(uint8_t* buffer, uint8_t* parse, uint8_t linelen, uint8_t* nsat){
	uint8_t k[15] = {};		//k-ty znak v n-tem radku
	uint16_t iter = 0;		//iteracni promenna
	uint8_t n = 0;			//n-ty radek

	while(iter < DataRecieved){
		if(!(buffer[iter] == '\n') || (buffer[iter] == '\r')){ //dokud nenastane konec radku
			parse[n*linelen +  k[n]] = buffer[iter];
			if((k[n] == 7) && (parse[n*linelen + 5] == 'V')){ //hledani GSV zpravy, 7. znak je pocet satelitu
				*nsat = parse[n*linelen + k[n]] - '0';
			}
			k[n]++; //posun o znak dopredu
		}
		else{
			parse[n*linelen + k[n]] = '\n'; //enter na konec radku
			n++; //novy radek
		}
		iter++; //posun v RAW zprave - GPSbuffer
	}
}