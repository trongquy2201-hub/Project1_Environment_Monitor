#include <stdio.h>
#include <stdlib.h>
#include "sensor_driver.h"

static int fake_light_init (void){
	printf("fake light init\n");
	return 0;
}
static int fake_light_read (sensor_data_t *out){
	out->light = rand() % 701 + 100;
	out->humidity=0;
	out->temperature = 0;
	out->error_code=0;
	return 0;	
}
sensor_driver_t fake_light = {"fake_light",fake_light_init,fake_light_read};
