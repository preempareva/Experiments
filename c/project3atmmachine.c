#include <stdio.h>
 
int deposit, withdraw;
int choice, pin, amount=10000 ;
 
int main()
{
		printf("\n\nENTER YOUR 4 DIGIT PIN NUMBER : ");
		scanf("%d", &pin);
	    
            if (pin==1205){
		        printf("\n********Welcome to ATM Service**************\n");
                printf("Hello Preem Pareva!! \n");
		        printf("1. Check Balance\n");
		        printf("2. Withdraw Cash\n");
		        printf("3. Deposit Cash\n");
		        printf("4. Quit\n");
		        printf("******************?**************************?*\n\n");
		        printf("Enter your choice: ");
		        scanf("%d", &choice);
		        switch (choice)
		        {
		            case 1:
			            printf("\nYOUR BALANCE IN Rs : %d ", amount);
			                break;
		            case 2:
			            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			                scanf("%d", &withdraw);
			                if (withdraw % 100 != 0)
			                        {
				                        printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			                        }
			                else if (withdraw >(amount - 500))
			                        {
			                        	printf("\n INSUFFICENT BALANCE");
                                    }
			                else
			                        {
			                        	amount = amount - withdraw;
				                        printf("\n\n PLEASE COLLECT CASH");
				                        printf("\n YOUR CURRENT BALANCE IS %d", amount);
			                        }
			                break;
		            case 3:
			                printf("\nENTER THE AMOUNT TO DEPOSIT : ");
			                scanf("%d", &deposit);
                            amount = amount + deposit;
			                printf("YOUR BALANCE IS %d", amount);
			                break;
		            case 4:
			                printf("\nQuiting logging you out");
			                break;
		            default:
			                printf("\nINVALID CHOICE");
		        }
            }
		    
            else{
                printf("Enter Valid Password!!!");
            }
		
	printf("\n\nTHANKYOU FOR USING OUR ATM SERVICE");
}
