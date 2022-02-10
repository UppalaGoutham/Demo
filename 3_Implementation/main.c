#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "ATM.h"

int choice;
int pin;
 
float amount=10000;
//float deposit;
//float withdraw;

int transaction ;

int main()
{
	printf("                                Hello!                                     \n");
	printf("                   It is pre-define programe So your PIN Number            \n");
	printf("                          Pin Number is: 1998                          \n\n\n");
	
	bool again = true;


	while (pin != 1998)
	{
		printf("ENTER YOUR PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 1998)
		printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
                Menu();
        
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
		switch (choice)
		{
		case 1:
			Balance(amount);
			break;
			
		case 2:
                        amount = Withdraw(amount);
	                break;
	    
		case 3:
		
			amount = Deposit(amount);
			break;
			
		case 4:
			Exit();
			
		default:
			printf("\n INVALID CHOICE");
		}
		
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf(" 1 > Yes\n");
        printf(" 2 > No\n");
        scanf("%d", &transaction);
        }while(transaction == 1);
	 Exit();
}
