#include <stdio.h>

int main ()
{
    double total;
    double seasons;
    double episodes;
    double length; 
    double intro;
    char name[30];	
    printf("\nThis program helps you determine the amount of time you have spent watching a serie.");
    printf("\nInsert the name of the Serie: ");  
    scanf("%[^\n]%*c", &name);
    printf("Insert the number of seasons : ");  
    scanf("%lf", &seasons);
    printf("Insert the number of episodes for season : "); 
    scanf("%lf", &episodes);
    printf("Insert the length in minutes of each episode : ");
    scanf("%lf", &length);
    printf("Insert the duration in minutes of the intro on the episodes : ");
    scanf("%lf", &intro);
    printf("Seasons : %lf , Episodes: %lf, Length: %lf, Intro: %lf ", seasons, episodes, length, intro);
    total = (seasons * episodes * (length - intro))/60;
    printf("\nThe total amount of time you have invested in %s, is equal to : %.2lf hours. \n", name, total);

    return 0;
}

