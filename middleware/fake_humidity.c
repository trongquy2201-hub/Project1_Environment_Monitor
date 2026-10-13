#include <stdio.h>
#include <stdlib.h>
#include "sensor_driver.h"

static int fake_humidity_init (void){
	printf("fake humidity init\n");
	return 0;
}
static int fake_humidity_read (sensor_data_t *out){
	out->temperature = 0;
	out->humidity=rand()%41+40;
	out->light = 0;
	out->error_code=0;
	return 0;	
}
sensor_driver_t fake_humidity = {"fake_humidity",fake_humidity_init,fake_humidity_read};
