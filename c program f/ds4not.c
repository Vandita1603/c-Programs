#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],m[3][3];;
    int i,j,sum=0;
    printf("Enter the elements of A matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    // printf("matrix of 3x3 of A:\n");
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d\t",A[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("\nEnter the elements of B matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    // printf("matrix of 3x3 of B:\n");
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d\t",B[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("call for the process:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0;
            for(int k=0; k<3; k++){
                sum=sum+(A[i][k]*B[k][j]);
                m[i][j]=sum;

            }
            // m[i][j]=sum;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}