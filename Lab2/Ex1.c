#include <stdio.h>

int hight= 126, age = 20,distance = 53;
char grade = 'B';
float weight = 50.3, gravity = 9.81;

int main(){
    printf("Height of Somchai: %d cm\n", hight);
    printf("Grade of Somjai: %c\n", grade);
    printf("Age of Winai: %d\n", age);
    printf("Weight of Anna: %.1f kg\n", weight);
    printf("Gravity constant: %.2f m/s^2\n", gravity);
    printf("Distance from Bangkok to Nonthaburi: %d km\n", distance);
    return 0;
}
