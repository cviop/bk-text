	MPU9250_GetData(AccData, GyroData, MagData);
	filter(AccFilt, AccData, &beta);
	if(AccFilt[2] < AccMin){
		AccMin = AccFilt[2];
	}