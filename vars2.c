#include <stdio.h>

int main() {
    char gender;
    int CP;
    int HP;
    double weight;
    double height; 
    int candies;
    printf("\nInsert gender M/F:");
    scanf("%c", &gender);
    printf("\nInsert Combat Points:");
    scanf("%d", &CP); 
    printf("\nInsert Health Points:");
    scanf("%d", &HP);
    printf("\nInsert weight:");
    scanf("%lf", &weight);
    printf("\nInsert height:");
    scanf("%lf", &height);
    printf("\nInsert candies:");
    scanf("%d", &candies);
    printf("Gender: %c, CP: %d, HP: %d, Weight: %lf, Height: %lf, Candies: %d.\n", gender, CP, HP, weight, height, candies);
}
