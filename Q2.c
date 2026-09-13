#include <stdio.h>

int main(){
    int confidence;
    printf("Enter your confidence level (0-100): ");
    scanf("%i", &confidence);
    if(confidence>=80 && confidence<=100){
        printf("High Confidence");
    }
    else if (confidence>=50 && confidence<80){
        printf("Moderate Confidence");
    }
    else if (confidence>=0 && confidence<50){
        printf("Low Confidence");
    }
    else{
        printf("Invalid Score");
    }

    return 0;
}