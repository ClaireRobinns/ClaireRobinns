/*SIM team
* 1.7.2022/ Kabi
* 'cafe.c'
* Bank system simulation program
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
float balance = 0.0;
Again:
/******************************* Intro cafe menu ***************************/
    printf("\n\n");
    printf("*****************  Welcome Freedom Bank  *****************\n");
    printf("........... Please choose one of the options ........... \n");
    printf("[1]          Check Balance  \n");
    printf("[2]          Deposit  \n");
    printf("[3]          Withdraw\n");
    printf("[4]          Exit \n");

/******************************* Start Programming ***************************/

    int id;
    float prices, total_prices, deposit, wd; //
    const float max_deposit = 2000.0;
    const float max_withdraw = 100.0;
    printf("Enter Code#: ");
    scanf("%d", &id);
    switch (id){
check_balance:  case 1: 
            if (balance == 0.0){
                printf("You have no balance currently. Please Deposit!\n");
            }
            else{
                printf("You balance is %f\n", balance);
            }
            break;
        case 2:
add:        printf("Enter the amount of deposit: ");
            scanf("%f", &deposit);
            if (deposit >= max_deposit){
                printf("Your deposited amount is over. MAX_DEPOSIT is 2000");
                goto add;
            }
            else{
                balance += deposit;
                goto check_balance;
            }
            break;
        case 3: 

            if (balance < 2.5){
                printf("You balance is very low. Please recharge.\n");
            }
            else{
                printf("Enter withdraw amount: ");
                scanf("%f", &wd);
                if(balance - wd < 0){
                    printf("You withdraw is invalid form. Please check again!");
                }
                else if (balance - wd == 0){
                    printf("You balance must be remain about 3 kyats.");
                }
                else if (wd > max_withdraw){
                    printf("Your withdraw amount is over MAX WITHDRAW. MAX -> 100.00");
                }
                else{
                    balance -= wd;
                    printf("The balance you have %f", balance);
                }
            }         
         break;
        case 4: printf(" Thank you!!!\n SEE YOU AGAIN!\n");exit(0); break;
        default: printf("Your enter key is invalid. Please check!");
        

    }
    
    
    return 0;
goto Again;
}