#include<stdio.h>
int main(){
    int A[3][3],i,j,B[3][3];
    int C[3][3];
    printf("Enter the elements of A matrix:");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("matrix of 3x3 of A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the elements of B matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("matrix of 3x3 of B:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }    
    printf("Addition of 2 matrix:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}