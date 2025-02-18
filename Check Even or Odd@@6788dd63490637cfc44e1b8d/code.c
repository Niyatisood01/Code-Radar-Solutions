#include <stdio.h>
int main(){
    int num;
    scanf("%d",num);
    if (num%2==0)
    {
        printf("%d even",num);
    }
    else
    {
        printf("%d odd",num);
    }
    return 0;
}