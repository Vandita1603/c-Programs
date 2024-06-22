#include<stdio.h>
int main()
{
    int arr[3][3],i,j,islower=1;
    printf("Enter the values\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j<3; j++){
            if(j>i && arr[i][j] != 0){
                islower=0;
            }
        } 
    }
    if(islower==1){
        printf("Matrix is lower triangular\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(arr[i][j]!=0){
                    printf("%d\t",arr[i][j]);
                }
            }
            printf("\n");
        }
    }
    else{
        printf("\nMatrix is not a lower triangular");
    }
    return 0;
}
