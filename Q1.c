#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;

    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i", &num2);
    printf("Enter the third number: ");
    scanf("%i", &num3);

    if(num1>num2 && num1>num3){
        printf("%i is the greatest number",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%i is the greatest number",num2);
    }
    else if(num3>num1 && num3>num2){
        printf("%i is the greatest number",num3);
    }
    else if(num1==num2 && num1>num3){
        printf("%i is the greatest number",num1);
    }
    else if(num1==num3 && num1>num2){
        printf("%i is the greatest number",num1);
    }
    else{
        printf("All numbers are equal");
    }

    return 0;
}