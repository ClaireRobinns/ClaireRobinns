/* SIM team
 * 5 - 6 -2022 / Akai
*/#include<stdio.h>
int main(){
    float digit, sum = 0.0, minimum, maximum, avg;
    int count = 0;
    printf("Enter number: ");
    scanf("%f", &digit);
    minimum = digit;
    maximum = digit;
    while(digit > 0){
        sum += digit;
        count++;
        if (digit > maximum){
            maximum = digit;
        }
        else if (digit < minimum){
            minimum = digit;
        }

        printf("Enter number: ");
        scanf("%f", &digit);
    }
    if (count == 0) printf("There is no data entry.\n");
    else{
            avg = sum/count;
            printf("The total sum of the numbers is %.2f\n", sum);
            printf("The average of the numbers is %.2f\n", avg);
            printf("The maximum number of these numbers is %.2f\n", maximum);
            printf("The minimum number of these numbers is %.2f\n", minimum);
    }
}
