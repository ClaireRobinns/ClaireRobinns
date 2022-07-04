/*SIM team
* 1.7.2022/ Kabi
* 'cafe.c'
* Cafe ordering and serving program
*/
#include<stdio.h>
#include<stdlib.h>
int main(){

/******************************* Intro cafe menu ***************************/

    printf("*****************  Welcome TO SIM Cafe  *****************\n");
    printf("..................... Choice Options ....................\n");
    printf("[1]   Menu Book\n");
    printf("[2]   Order Items\n");
    printf("[3]   Cashing  \n");
    printf("[4]   Exit\n");


/******************************* Start Programming ***************************/

    int options, quantity, item_id,tmp_wallet, wallet, count = 0;
    float price, total_prices;
    printf("Enter the amount of wallet: ");
    scanf("%d", &wallet);
    while (wallet < 2000)
    {
        printf("Your cash amount is invalid\n");
        printf("Enter the amount of wallet: ");
        scanf("%d", &wallet);
    }
    
OPT:printf("Enter Option#: ");
    scanf("%d", &options);
    tmp_wallet = wallet;
    switch (options){
        case 1:  // this menu switch
            printf("\n");
            printf(".......................... MENU  ..........................\n");
            printf("Item Code               Description                 Prices  \n");
            printf("[151]                   SIM coffee                  1500  \n");
            printf("[152]                   Latte                       2500  \n");
            printf("[153]                   Hot Chocolate               2500  \n");
            printf("[154]                   Mocha                       2000  \n");
            printf("[155]                   CupCake                     2750  \n");
            printf("[156]                   Cappuccino                  3000  \n");
            printf("[157]                   Hamburger                   2500  \n");
            printf("[404]                   STOP ORDERING                     \n");
            break;
        case 2: // This is ordering management.
            printf("Enter the item code: ");
            scanf("%d", &item_id);
            printf("Enter the quantity of this: ");
            scanf("%d", &quantity);
            while (item_id >= 151 && item_id <= 404 && quantity > 0)
            {
                count++;
                switch (item_id) {
                case 151: price = 1500; break;
                case 152: price = 2500; break;
                case 153: price = 2500; break;
                case 154: price = 2000; break;
                case 155: price = 2750; break;
                case 156: price = 3000; break;
                case 157: price = 2500; break;
                case 404: break;                // stop order
                default: printf("Enter valid ID Thanks!\n"); goto ID; }
                total_prices += price*quantity;
    ID:         printf("Enter the item code: ");
                scanf("%d", &item_id);
                printf("Enter the quantity of this: ");
                scanf("%d", &quantity);
            }
        case 3: 
            tmp_wallet -= total_prices; 

        case 4:
            if (count == 0) exit(0);
            else{
                if (wallet - tmp_wallet == 0){
                    printf("You should cash first please.\n");
                    goto OPT;
                } 
                else {
                    wallet = tmp_wallet;
                    printf("CAST AMOUNT: %f\n", total_prices);
                    printf("The main balance is %d\n", wallet);
                    printf("Thanks alot for your ***\n");
                    exit(0);
                }
            }
        default: printf("I don't know this option."); break;
    }
    goto OPT;
}
