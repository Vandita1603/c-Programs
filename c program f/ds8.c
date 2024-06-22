#include<stdio.h>
int main()
{
    int arr[3][3],i,j,isupper=1;
    printf("Enter the values\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j<3; j++){
            if(i>j && arr[i][j] != 0){
                isupper=0;
            }
        } 
    }
    if(isupper==1){
        printf("Matrix is upper triangular\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(arr[i][j]!=0){
                    printf("%d\t",arr[i][j]);
                }
                else{
                    printf("\t");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("\nMatrix is not a upper triangular");
    }
    return 0;
}
