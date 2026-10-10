#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT) ((REG) |= (1U << (BIT)))
#define CLEAR_BIT(REG,BIT) ((REG) &= ~(1U << (BIT))) 
#define TOGGLE_BIT(REG,BIT) ((REG) ^= (1U << (BIT))) 
#define READ_BIT(REG,BIT) (((REG) >> (BIT)) & 1U) //Check bit

#endif /*BIT_MATH_H_*/

