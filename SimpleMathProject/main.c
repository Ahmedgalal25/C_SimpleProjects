/*
 * main.c
 *
 *  Created on: Jan 31, 2022
 *      Author: agalalah
 */
#include "stdio.h"
#include"Math.h"
void main(void)
{
	int a,b;
	double result = 0;
	scanf("%d",&a);
	scanf("%d",&b);
	result = multiply(a, b);


	printf("Hello your answer below \n %f",result);
	}
