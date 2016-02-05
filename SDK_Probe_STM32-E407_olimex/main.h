/*
 * bioloid_test.h
 *
 * Created: 5/1/2015 12:22:37 AM
 *  Author: Iulian Gheorghiu (morgoth.creator@gmail.com)
 */
/*#####################################################*/
#ifndef MAIN_H_
#define MAIN_H_
/*#####################################################*/
#define _USE_MPU60x0_9150	0
#define _USE_AK8975			0
#define _USE_BMP180			0
#define _USE_MPL3115A2		0
#define _USE_MS5611			0
#define _USE_MHC5883		0
#define _USE_SRF02			0
#define _USE_ADXL345		0
#define _USE_HIH613x		0
#define _USE_LEPTON_FLIR	1
#define _USE_SHT11 			0
#define _USE_MPR121			0
#define _USE_INT_ADC		0


#define LED1_PORT			IOC
#define LED1_PIN			13
#define LED1_INVERSE		true

#define LEDS_NR				1

#define HARDBTN1_PORT		IOA
#define HARDBTN1_PIN		0

#define HARDBTNS_NR			1


#define USBH_MSC_DEBUG_EN
#define MMCSD_DEBUG_EN
/*#####################################################*/
#endif /* MAIN_H_ */
/*#####################################################*/
