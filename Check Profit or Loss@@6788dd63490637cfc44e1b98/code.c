#include <stdio.h>
int main(){
    int sp,cp;
    scanf("%d %d",&sp,&cp);
    if(sp>cp){
        printf("Loss");
    }else if(cp>sp){
        printf("Profit");
    }else{
        printf("No Profit No Loss");
    }
}