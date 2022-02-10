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

 float Withdraw(float balance)
 {
	float withdraw;
 	printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
        scanf("%f", &withdraw);
	if (withdraw < balance) 
	{
        
            balance -= withdraw;
            printf("\nYour withdrawing money is:  %.2f\n", withdraw);
            printf("Your New Balance is:   %.2f\n\n", balance);

        }

        else  
	{

           printf("You don't have enough money in Account\n");
           printf("Please contact to your Bank Customer Services\n");
           printf("Your Currently Available Balance is:   %.2f\n\n", balance);

        }
        return balance;
 	
 }
