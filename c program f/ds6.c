#include<stdio.h>
int main(){
    int A[4][5]={{0,0,4,0,6},{0,0,9,0,6},{0,0,0,0,0},{0,1,2,0,0}};

    int i,j,k=0,size=0;
    int sparse[3][10];
    
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(A[i][j]!=0){
                size++;
            }
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if (A[i][j]!=0){
                sparse[0][k]=i;
                sparse[1][k]=j;
                sparse[2][k]=A[i][j];
                k++;

            }
        }
    }
    // display final matrix
    for(i=0;i<3;i++){
        for(j=0;j<size;j++){
            printf("%d\t",sparse[i][j]);
        }
        printf("\n");
    }
    return 0;
}