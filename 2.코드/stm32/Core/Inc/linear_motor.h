/*
 * linear_motor.h
 *
 *  Created on: Jul 9, 2024
 *      Author: USER
 */

#ifndef INC_LINEAR_MOTOR_H_
#define INC_LINEAR_MOTOR_H_

#include "stm32f4xx_hal.h"

#define MOTOR_PORT 	GPIOB
#define MOTOR_PIN_1 GPIO_PIN_8
#define MOTOR_PIN_2 GPIO_PIN_9

#define MOTOR_ENABLE_PORT 	GPIOE
#define MOTOR_ENABLE_PIN		GPIO_PIN_9


void moveForward();
void moveBackward();
void stopActuator();


#endif /* INC_LINEAR_MOTOR_H_ */
