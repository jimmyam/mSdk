/**
  ******************************************************************************
  * @file    LibJPEG/LibJPEG_Encoding/Inc/decode.h 
  * @author  MCD Application Team
  * @version V1.0.1
  * @date    09-October-2015
  * @brief   header of decode.c file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DECODE_H
#define __DECODE_H

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "lib/fat_fs/inc/ff.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

void jpeg_decode(FIL *file, unsigned long width, unsigned char * buff, unsigned char (*callback)(unsigned char*, unsigned long));

#endif /* __DECODE_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
