#include <stdio.h>
int main() {
    int num; //defines the variable "num" as int datatype
    printf("Enter a number to check : "); //gets the input for num
    scanf("%d", &num);
    if(num < 40)
        printf("You failed !"); //if the number is lesser than 40 , they failed
    else if(num > 40 && num <85)
        printf("You passed !"); //if the number is greater than 40 and lesser than 85 they passed
    else if(num >= 85)
        printf("You passed with distinction !"); //if the number is greater than 85 they passed with distinction 
    return 0;
}
