#include <stdio.h>
#include <limits.h>
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
    printf("Gender: %d, CP: %d, HP: %d, Weight: %d, Height: %d, Candies: %d.\n", sizeof(gender), sizeof(CP), sizeof(HP), sizeof(weight), sizeof(height), sizeof(candies));
}
