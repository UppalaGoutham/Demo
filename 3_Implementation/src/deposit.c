/**
 * @file ATM.h
 * @author goutham
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"ATM.h"

float Deposit(float balance)
{
	    float deposit;
	    printf("\nYou choose to Deposit money\n");
            printf("Your Currently Available Balance is: %.2f\n", balance);
            printf("Enter your amount to Deposit:\n");
	    scanf("%f", &deposit);
            balance += deposit;
	    printf("\nYOUR BALANCE IS: %.2f\n", balance);
	    return balance;
}
