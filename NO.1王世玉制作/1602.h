/*-----------------------------------------------
  名称：LCD1602.h
  编写：wangshiyu
  日期：2013.11.25
  修改：移植
  内容：
  引脚定义如下：1-VSS 2-VDD 3-V0 4-RS 5-R/W 6-E 7-14 DB0-DB7 15-BLA 16-BLK
------------------------------------------------*/
#include<reg52.h> //包含头文件


#ifndef __1602_H__
#define __1602_H__

#define CHECK_BUSY

sbit RS = P2^4;   //定义端口 
sbit RW = P2^5;
sbit EN = P2^6;

#define RS_CLR RS=0 
#define RS_SET RS=1

#define RW_CLR RW=0 
#define RW_SET RW=1 

#define EN_CLR EN=0
#define EN_SET EN=1

#define DataPort P0

/////////////////////////////函数声明///////////

 bit LCD_Check_Busy(void) ;

 void LCD_Write_Com(unsigned char com) ;

 void LCD_Write_Data(unsigned char Data) ;

 void LCD_Clear(void) ;

 void LCD_Write_String(unsigned char x,unsigned char y,unsigned char *s) ;

 void LCD_Write_Char(unsigned char x,unsigned char y,unsigned char Data) ;

 void LCD_Init(void) ;

 void DelayMs(unsigned char i);
 
 void Show(unsigned char k,unsigned char a,unsigned char dat);
   
#endif
