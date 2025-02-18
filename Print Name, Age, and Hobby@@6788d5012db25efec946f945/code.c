#include <stdio.h>
int main(){
    int age;
    char name[50];
    char hobby[50];
    scanf("%d",&name);
    scanf("%s",&age);
    scanf("%x",&hobby);
    printf("Name: %d\nAge: %s\nHobby: %x");
    return 0;
}