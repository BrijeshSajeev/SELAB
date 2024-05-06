#include<stdio.h>

void nature_of_roots(int a,int b,int c){
    int d=0;
    if (a==0){
        printf("Not a Quadratic Equation");
        return;
    }
    d = b*b - 4*a*c;
    if(d>0){
        printf("Real Roots");
    }else if(d==0){
        printf("Equal roots");
    }else{
        printf("imaginary roots");
    }

}

void all_test_cases(){
    int a,b,c;
    printf("\nTestCase\ta\tb\tc\tOutput");
    for(int t =1;t<4;t++){
        if(t==1){
            a=0;
            b=50;
            c=100;
        }
        else if(t==2){
             a=100;
            b=50;
            c=100;
        }
        else if(t==3){
            a=100;
            b=50;
            c=0;
        }
        else{
            break;
        }
        printf("\n%d\t\t%d\t%d\t%d\t",t,a,b,c);
        nature_of_roots(a,b,c);
    }
}

int main(){
    all_test_cases();
    return 0;
}