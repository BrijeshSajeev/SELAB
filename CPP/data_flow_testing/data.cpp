#include <stdio.h> 


void main() 
{ 
int a,b, t; 
  
    printf("Enter the first number > "); 
    scanf("%d", &b); 
    printf("Enter the second number"); 
    scanf("%d", &b); 
    if (a<b) { 
        t=a; 
        a=b; 
        b=t; 
    } 
    printf("%d%d", a,b); 
    getch(); 
} 