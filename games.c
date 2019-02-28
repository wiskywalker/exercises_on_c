#include <stdio.h>

int main ()
{
    double total;
    double time1;
    double cost1;
    double time2;
    double cost2;
    double time3;
    double cost3;
    double time4;
    double cost4;
    double time5;
    double cost5;
    printf("\nThis program helps you determine the cost per hour of gaming from the last 5 games you played.\n");
    printf("Insert the number of hours you have played the first one: ");
    scanf("%lf", &time1);
    printf("Insert how much did you pay for it: ");
    scanf("%lf", &cost1);
    printf("Insert the number of hours you have played the second one: ");
    scanf("%lf", &time2);
    printf("Insert how much did you pay for it: ");
    scanf("%lf", &cost2);
    printf("Insert the number of hours you have played the third one: ");
    scanf("%lf", &time3);
    printf("Insert how much did you pay for it: ");
    scanf("%lf", &cost3);
    printf("Insert the number of hours you have played the fourth one: ");
    scanf("%lf", &time4);
    printf("Insert how much did you pay for it: ");
    scanf("%lf", &cost4);
    printf("Insert the number of hours you have played the fifth one: ");
    scanf("%lf", &time5);
    printf("Insert how much did you pay for it: ");
    scanf("%lf", &cost5);
    total = (cost1/time1 + cost2/time2 + cost3/time3 + cost4/time4 + cost5/time5)/5;
    printf("You have invested $$ %lf per hour of gaming in your last five games!\n", total);

    return 0;
}

