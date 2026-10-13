#include <stdio.h>
#include <stdlib.h>
#include "sensor_driver.h"

static int fake_temp_init (void){
	printf("fake temp init\n");
	return 0;
}
static int fake_temp_read (sensor_data_t *out){
	out->temperature = rand() % 11 + 25;
	out->humidity=0;
	out->light = 0;
	out->error_code=0;
	return 0;	
}
sensor_driver_t fake_temp = {"fake_temp",fake_temp_init,fake_temp_read};
