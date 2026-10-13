#include <stdint.h>
#ifndef SENSOR_TYPES_H_
#define SENSOR_TYPES_H_

typedef struct{
	float temperature;
	float humidity;
	float light;
	uint8_t error_code;
}sensor_data_t;
#endif
