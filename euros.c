#include <stdio.h>

int main () {
    double euros;
    double dollars;
    
    printf("Please insert the amount of dollars you would like to change to euros: ");
    scanf("%lf", &dollars); 
 
    euros = dollars * 0.859;

    printf("%lf Dollars are %lf Euros. \n", dollars, euros);

    return 0;

} 
