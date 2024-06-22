#include<stdio.h>
int main(){
    int A[3][3],i,j;
    int scount=0;
    printf("Enter the elements of matrix:");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
            if (A[i][j]==0){
                ++scount;
            }
        }
    }
    printf("matrix of 3x3 of A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    if (scount>(3*3)/2){
        printf("matrix is sparse\n");
    }
    else{
        printf("not a sparse matrix\n");
    }
    printf("total no of zero values are %d", scount);
    return 0;
}