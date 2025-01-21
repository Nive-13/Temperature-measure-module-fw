#include "spi.h"
extern SPI_HandleTypeDef hpsil;

#define GPIO_CS_PIN GPIO_PIN_4
#define GPIO_CS_PORT GPIO_4

void ADT_Read(uint8_t Reg,uint8_t *Buffer,size_t len){
	Reg|=0x80;
	HAL_SPI_Transmit(&hspi1,&Reg,1,500);
	HAL_SPI_Receive(&hspi1,Buffer,len,100);
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET);
}
//void ADT_Write (uint8_t Reg, uint8_t data){
//	uint8_t WriteBuf[2];
//	WriteBuf[0] = Reg|0x00;
//	WriteBuf[1] = data;
//	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
//	HAL_SPI_Transmit (&hspi1, WriteBuf, 2, 500);
//	HAL_GPIO_WritePin (GPIOA, GPIO_PIN_4, GPIO_PIN_SET);
//}
