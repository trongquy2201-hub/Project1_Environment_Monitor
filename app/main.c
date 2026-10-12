#include <stdio.h>
#include <stdint.h>
#include "../common/bit_math.h"
#include "../common/sensor_types.h"
#include "../common/sensor_driver.h"

extern sensor_driver_t fake_temp;
void uart_simulate_send_log (const sensor_data_t *data){
	printf("Temperature: %.2f *C | Humidity: %.2f %% | Error: %hu\n",data->temperature,data->humidity,data->error_code);
}
int main(void) {
	uint8_t test_register = 0x00;
	SET_BIT(test_register, 3);
	printf("Project 1: Enviroment Monitor Initialized\n");
	printf("Test Register Value: 0x%02X\n", test_register);
	sensor_data_t data;
	fake_temp.init();

	for (int i=0; i<5; i++){
		fake_temp.read(&data);
		uart_simulate_send_log(&data);
	}
	return 0;
}
