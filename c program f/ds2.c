#include<stdio.h>
int main(){
    int A[3][3],i,j,B[3][3];
    printf("Enter the elements of matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("matrix of 3x3:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            B[j][i]=A[i][j];
        }
    }
    printf("The transpose of matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}

