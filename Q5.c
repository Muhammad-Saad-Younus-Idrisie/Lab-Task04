#include <stdio.h>
#include <string.h>

int main(){
    char User_Role[20];
    int Account_Status;
    int Security_Level;

    printf("Enter User Role: ");
    scanf("%s", User_Role);
    printf("Enter Account Status: ");
    scanf("%d", &Account_Status);
    printf("Enter Security Level: ");
    scanf("%d", &Security_Level);

    if(strcmp(User_Role, "Admin") == 0 && Account_Status == 1 && Security_Level >= 3){
        printf("Access Granted to Admin\n");
    } 
    else if(strcmp(User_Role, "Researcher") == 0 && Account_Status == 1 && Security_Level >= 2){
        printf("Access Granted to Researcher\n");
    }
    else if(strcmp(User_Role, "Student") == 0 && Account_Status == 1 && Security_Level >= 1){
        printf("Access Granted to Student\n");
    }
    else{
        printf("Access Denied\n");
    }
}