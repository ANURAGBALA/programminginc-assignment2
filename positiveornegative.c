#include <stdio.h>
int main() {
    int num; // defining a variable "num" of int data typr
    printf("Enter a number to check : "); // getting the value for the variable
    scanf("%d", &num);
    if(num < 0)
        printf("%d is negative.", num); // if the number is less than 0 it is negative
    else if(num > 0)
        printf("%d is positive.", num); //if the number is greater than 0 it is positive
    else
        printf("%d is 0.", num); //if the number is 0 , then it's 0
    return 0;
}
