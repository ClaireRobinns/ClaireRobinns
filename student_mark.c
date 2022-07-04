/* SIM team
* 
*/
#include<stdio.h>
int main(){
    int candidate, sub1, cw1, sub2, cw2, count;
    int real_mark1, real_mark2;
    float real_mark, sum_sub1, sum_sub2, avg1, avg2;
    const float EMPC = 0.7, CWPC = 0.3;
    
    sum_sub1 = 0.0;
    sum_sub2 = 0.0;
    count = 0; // number of student
    printf("Enter the candidate NO: ");
    scanf("%d", &candidate);
    while (candidate > 0){
        count++;
        // input the exam and coursework of each subject
        printf("Enter the exam mark for C : ");
        scanf("%d", &sub1);
        printf("Enter the coursework for C: ");
        scanf("%d", &cw1);
        printf("Enter the exam mark for Phy: ");
        scanf("%d", &sub2);
        printf("Enter the coursework for Phy: ");
        scanf("%d", &cw2);

        // progress the marks

        real_mark1 = sub1*EMPC + cw1*CWPC;
        real_mark2 = sub2*EMPC + cw2*CWPC;
        sum_sub1 += real_mark1;
        sum_sub2 += real_mark2;

        // output these marks of the students
        printf("The marks of the student id %d \n", candidate);
        printf(" 70 of C -> %f and 30 of C -> %f \n",sub1*EMPC, cw1*CWPC);
        printf(" 70 of Phy -> %f and 30 of Phy -> %f \n",sub2*EMPC, cw2*CWPC);
        printf("The real mark of C is %d, Phy is %d", real_mark1, real_mark2);
        // Enter candidate again
        printf("\nEnter the candidate NO: ");
        scanf("%d", &candidate);

    }
    if (count == 0){
        printf("There is no data entry");

    }
    else{
        avg1 = sum_sub1 / count;
        avg2 = sum_sub2 / count;
        printf("The average of C programming exam mark is %f\n", avg1);
        printf("The average of Physics exam mark is %f\n", avg2);

    }

}