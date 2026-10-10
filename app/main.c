#include <stdio.h>
#include <stdint.h>
#include "bit_math.h"

int main(void) {
	uint8_t test_register = 0x00;
	SET_BIT(test_register, 3);
	printf("Project 1: Enviroment Monitor Initialized\n");
	printf("Test Register Value: 0x%02X\n", test_register);

	while (1) {
		/*vong lap chinh cua ung dung*/
	}
	return 0;
}