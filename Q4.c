#include <stdio.h>

int main() {
    float Model_Accuracy;
    int Prediction_Latency;
    int Model_Approval_Status;

    printf("Enter Model Accuracy (in percentage): ");
    scanf("%f", &Model_Accuracy);
    printf("Enter Prediction Latency (in milliseconds): ");
    scanf("%d", &Prediction_Latency);
    printf("Enter Model Approval Status (1 for Approved, 0 for Not Approved): ");
    scanf("%d", &Model_Approval_Status);
    
    if (Model_Accuracy >=90.0 && Prediction_Latency<=100 && Model_Approval_Status==1) {
        printf("Model is Ready for Deployment");
    }
    else if (Model_Accuracy <90.0) {
        printf("Accuracy too low");
    } 
    else if(Prediction_Latency>100) {
        printf("Latency too high");
    } 
    else{
        printf("Model not approved");
    }
    
    return 0;
}