#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct userchecking{

    int id;
    char username[50];
    char password[50];

} aue;


int main(){

int check = 0;

char username[50];
char password[50];

FILE *data = fopen("data.txt", "rb");

fflush(stdin);
printf("Enter UserName: ");
scanf("%s", &username);

printf("Enter Password: ");
scanf("%s", &password);


while(fscanf(data, "%i %s %s\n\n", &aue.id, aue.username, aue.password)!=EOF){
    if(strcmp(username,aue.username)==0){
        if(strcmp(password, aue.password) == 0){
            check =1;
            printf("Login Success");
            break;
        }
    }

}
if(!check){
    printf("Login Failed");
}
fclose(data);


return 0;
}
