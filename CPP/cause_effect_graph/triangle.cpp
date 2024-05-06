#include<stdio.h>

int main(){
    int a,b,c;
    printf("\nEnter a,b,c >> ");
    scanf("%d%d%d",&a,&b,&c);

    if( a+b>c && b+c>a && c+a >b ){
        if(a==b && b==c){
            printf("\nIt is an Equalatral Triangle");
        }else if(a==b || b==c || c==a){
            printf("\nIt is an Isosceles Triangle");
        }else
            printf("\nIt is an Scalne Triangle");
        
    }else{
        printf("\nIt is not an Triangle");
        
    }
    return 0;
}