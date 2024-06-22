#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter the elements of array:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
        printf("\t");
    }
    return 0;
}