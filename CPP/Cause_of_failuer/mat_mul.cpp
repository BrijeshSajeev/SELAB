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
    int row1,row2,col1,col2;

    printf("\nEnter no of Rows and columns in Matrix 1 > ");
    scanf("%d%d",&row1,&col1);
    printf("\nEnter no of Rows and columns in Matrix 2 > ");
    scanf("%d%d",&row2,&col2);

    if(col1 !=row2){
        printf("\nCase 1:");
        printf("\nError: No of Column in matrix 1 should equal to number rows in matrix 2:");
        return 0;
    }
    printf("\nEnter the element of M1\n");

    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            if(scanf("%d",&m1[i][j])!=1){
                printf("Matrix multiplication not possible cause of not integer value");
                return 0;
            }
        }
    }
    printf("\nMatrix 1\n");
    printMatrix(row1,col1,m1);
     printf("\nEnter the element of M2\n");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            if(scanf("%d",&m2[i][j])!=1){
                printf("Matrix multiplication not possible cause of not integer value");
                return 0;
            }
        }
    }
    printf("\nMatrix 2\n");
    printMatrix(row2,col2,m2);
    
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            m3[i][j] =0;
            for(int k=0;k<col1;k++){
                m3[i][j] =m3[i][j]+ m1[i][k] * m2[k][j];
            }
        }
    }
    printf("\nResultant Matrix\n");
    printMatrix(row1,col2,m3);
}