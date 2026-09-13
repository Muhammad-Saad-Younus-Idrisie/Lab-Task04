#include <stdio.h>

int main(){
    float DataUsed_GB, PricePerGB, Basic_Cost,Final_Cost, DiscountAmount;
    printf("Enter the amount of data used in GB: ");
    scanf("%f", &DataUsed_GB);
    printf("Enter the price per GB: ");
    scanf("%f", &PricePerGB);

    Basic_Cost = DataUsed_GB * PricePerGB;
    Final_Cost = Basic_Cost;
    DiscountAmount = 0.0;

    if(DataUsed_GB < 50){
        printf("Basic Cost: $%.2f\nDiscount Amount: $%.2f\nFinal Cost: $%.2f\n",Basic_Cost, 0.0, Basic_Cost);
    }
    else if(DataUsed_GB >= 50 && DataUsed_GB < 100){
        Final_Cost = Basic_Cost * 0.95;
        DiscountAmount = Basic_Cost * 0.05;
        printf("Basic Cost: $%.2f\nDiscount Amount: $%.2f\nFinal Cost: $%.2f\n",Basic_Cost, DiscountAmount, Final_Cost);
    }
    else if(DataUsed_GB >= 100 && DataUsed_GB < 200){
        Final_Cost = Basic_Cost * 0.90;
        DiscountAmount = Basic_Cost * 0.10;
        printf("Basic Cost: $%.2f\nDiscount Amount: $%.2f\nFinal Cost: $%.2f\n",Basic_Cost, DiscountAmount, Final_Cost);
    }
    else{
        Final_Cost = Basic_Cost * 0.85;
        DiscountAmount = Basic_Cost * 0.15;
        printf("Basic Cost: $%.2f\nDiscount Amount: $%.2f\nFinal Cost: $%.2f\n",Basic_Cost, DiscountAmount, Final_Cost);
    }
    return 0;
}