#include<stdio.h>
#include<conio.h>

/*
    Cause of Failuer
*/


void printMatrix(int rows, int cols, int mat[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m1[10][10],m2[10][10],m3[10][10];
    int r1,r2,c1,c2;

    printf("\nEnter no of Rows and columns in Matrix 1 > ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter no of Rows and columns in Matrix 2 > ");
    scanf("%d%d",&r2,&c2);

    if(c1 !=r2){
        printf("\nCase 1:");
        printf("\nError: No of Column in matrix 1 should equal to number rows in matrix 2:");
        return 0;
    }
    printf("\nEnter the element of M1\n");

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(scanf("%d",&m1[i][j])!=1){
                printf("Matrix multiplication not possible cause of not integer value");
                return 0;
            }
        }
    }
    printf("\nMatrix 1\n");
    printMatrix(r1,c1,m1);
     printf("\nEnter the element of M2\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            if(scanf("%d",&m2[i][j])!=1){
                printf("Matrix multiplication not possible cause of not integer value");
                return 0;
            }
        }
    }
    printf("\nMatrix 2\n");
    printMatrix(r2,c2,m2);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            m3[i][j] =0;
            for(int k=0;k<c1;k++){
                m3[i][j] =m3[i][j]+ m1[i][j] * m2[k][j];
            }
        }
    }
    printf("\nResultant Matrix\n");
    printMatrix(r1,c2,m3);
}