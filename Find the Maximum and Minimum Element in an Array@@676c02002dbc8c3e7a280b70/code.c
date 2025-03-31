#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",arr[i])
    }
    int num = arr[0];
    int num2 = arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]>num){
        num=arr[i]
    }
    }
    for (int i =0;i<n;i++){
        if (arr[i]<num2){
            num2 = arr[i]
        }
    }
    printf("%d %d",num2,num);
    return 0;
}