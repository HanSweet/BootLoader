/*
 * @Author: wushengran
 * @Date: 2024-09-13 16:29:39
 * @Description:
 *
 * Copyright (c) 2024 by atguigu, All Rights Reserved.
 */

#include "usart.h"
#include "delay.h"
#include <string.h>

// ������ջ������ͽ������ݳ���
uint8_t buff[100];
uint8_t size;

int main(void)
{
	// ��ʼ��
	USART_Init();

printf("22222222222222\n");
	
		void (*app)(void);
	
	/* start app */
	app = (void (*)(void))0x08001001;  //4kb,���������app�ĵ�ַ+1�ſ���
	
	app();
	
	while(1);
	return 0;
}

