#include <stdio.h>

int main() {
       int n;
    scanf("%d ",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            printf("%d",arr[i]);
            return 0;
        }
    }
    printf("%d",-1);
    return 0;
}