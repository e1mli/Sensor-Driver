/*
 * MPU9250_Config.h
 *
 *  Created on: Feb 28, 2019
 *      Author: Desert
 */

#ifndef UTIL_MPU9250_CONFIG_H_
#define UTIL_MPU9250_CONFIG_H_
//#ifndef MPU9250_SPI			hspi1
//#define MPU9250_SPI			hspi1
//SPI_HandleTypeDef hspi1;
extern SPI_HandleTypeDef hspi1;
#define MPU9250_SPI			hspi1
#define	MPU9250_CS_GPIO		GPIOA
#define	MPU9250_CS_PIN		GPIO_PIN_4

#endif /* UTIL_MPU9250_CONFIG_H_ */
