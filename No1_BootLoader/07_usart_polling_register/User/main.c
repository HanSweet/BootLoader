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

// 定义接收缓冲区和接收数据长度
uint8_t buff[100];
uint8_t size;

int main(void)
{
	// 初始化
	USART_Init();

printf("22222222222222\n");
	
		void (*app)(void);
	
	/* start app */
	app = (void (*)(void))0x08001001;  //4kb,这里必须是app的地址+1才可以
	
	app();
	
	while(1);
	return 0;
}

