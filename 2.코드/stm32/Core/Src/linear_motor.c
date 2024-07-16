/*
 * linear_motor.c
 *
 *  Created on: Jul 9, 2024
 *      Author: USER
 */


#include "linear_motor.h"

void Linear_Motor_Start(void)
{
  /*
   * MOTOR INIT
   */
  GPIO_InitTypeDef GPIO_InitStructPrivate = {0};
  GPIO_InitStructPrivate.Pin = MOTOR_PIN_1 | MOTOR_PIN_2;
  GPIO_InitStructPrivate.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStructPrivate.Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_InitStructPrivate.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(MOTOR_PORT, &GPIO_InitStructPrivate); // set the pin as output
  HAL_GPIO_WritePin (MOTOR_PORT, MOTOR_PIN_1 | MOTOR_PIN_2, GPIO_PIN_RESET);   // pull the pin low

  /*
   * ENABLE INIT
   */
  GPIO_InitStructPrivate.Pin = MOTOR_ENABLE_PIN;
  HAL_GPIO_Init(MOTOR_ENABLE_PORT, &GPIO_InitStructPrivate); // set the pin as output
  HAL_GPIO_WritePin (MOTOR_ENABLE_PORT, MOTOR_ENABLE_PIN, GPIO_PIN_RESET);   // pull the pin low
}

void moveForward() {
  HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN_1, GPIO_PIN_SET);
  HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN_2, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(MOTOR_ENABLE_PORT, MOTOR_ENABLE_PIN, GPIO_PIN_SET); // 최대 속도
}

void moveBackward() {
  HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN_1, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN_2, GPIO_PIN_SET);
  HAL_GPIO_WritePin(MOTOR_ENABLE_PORT, MOTOR_ENABLE_PIN, GPIO_PIN_SET); // 최대 속도
}

void stopActuator() {
  HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN_1, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(MOTOR_PORT, MOTOR_PIN_2, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(MOTOR_ENABLE_PORT, MOTOR_ENABLE_PIN, GPIO_PIN_RESET); // 최대 속도
}
