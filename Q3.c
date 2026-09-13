#include <stdio.h>

int main(){
    int TotalRecords;
    int MissingRecords;
    int DuplicateRecords;
    float PercentageofMissingRecords;
    float PercentageofDuplicateRecords;

    printf("Enter Total Records: ");
    scanf("%d", &TotalRecords);
    printf("Enter Missing Records: ");
    scanf("%d", &MissingRecords);
    printf("Enter Duplicate Records: ");
    scanf("%d", &DuplicateRecords);

    PercentageofMissingRecords = (float)MissingRecords / TotalRecords * 100;
    PercentageofDuplicateRecords = (float)DuplicateRecords / TotalRecords * 100;

    if(TotalRecords <= 0){
        printf("Invalid Dataset");
    }
    else if(PercentageofMissingRecords > 30){
        printf("Poor Quality Dataset");
    }
    else if(PercentageofMissingRecords <= 30 && PercentageofDuplicateRecords >20){
        printf("Dataset Requires Cleaning");
    }
    else{
        printf("Dataset Ready for Training");
    }

    return 0;
}