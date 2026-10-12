#ifndef SENSOR_DRIVER_H_
#define SENSOR_DRIVER_H_

#include "sensor_types.h"

typedef struct {
	const char *name;
	int (*init) (void);
	int (*read) (sensor_data_t *out);
}sensor_driver_t;

#endif
