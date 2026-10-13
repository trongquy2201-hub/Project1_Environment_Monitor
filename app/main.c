#include <stdio.h>
#include <stdint.h>
#include "../common/bit_math.h"
#include "../common/sensor_types.h"
#include "../common/sensor_driver.h"
extern sensor_driver_t fake_temp;
extern sensor_driver_t fake_light;
extern sensor_driver_t fake_humidity;
static sensor_driver_t *sensors[] = { &fake_temp, &fake_light, &fake_humidity};
#define count_sensor (sizeof(sensors) / sizeof(sensors[0]))

void uart_simulate_send_log (const sensor_data_t *data){
	printf("Temperature: %.2f *C | Light: %.2f lux | Humidity: %.2f %% | Error: %hu\n",data->temperature,data->light,data->humidity,data->error_code);
}
int main(void) {
	uint8_t test_register = 0x00;
	SET_BIT(test_register, 3);
	printf("Project 1: Enviroment Monitor Initialized\n");
	printf("Test Register Value: 0x%02X\n", test_register);
	for (int j = 0; j < count_sensor; j++) {
		sensors[j]->init();
	}

	for (int i=0; i<5; i++){
		for (int j = 0; j < count_sensor; j++) {
			sensor_data_t data = { 0 };
			sensors[j]->read(&data);
			printf("[%s ]", sensors[j]->name);
			uart_simulate_send_log(&data);
		}
	}
	return 0;
}
