#include <stdio.h>

int main(){
    int obstacle, person, battery;

    printf("Enter if obstacle is detected (1 for yes, 0 for no): ");
    scanf("%d", &obstacle);
    printf("Enter if person is detected (1 for yes, 0 for no): ");
    scanf("%d", &person);
    printf("Enter batter percentage: ");
    scanf("%d", &battery);

    if (obstacle == 1 && person == 1){
        printf("Emergency Stop");
    }
    else if (obstacle == 1 && person == 0){
        printf("Change Direction");
    }
    else if (obstacle == 0 && battery < 20){
        printf("Return to Charging Station");
    }
    else if (obstacle == 0 && battery >= 20){
        printf("Continue Moving");
    }

    return 0;
}