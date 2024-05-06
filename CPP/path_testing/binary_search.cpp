#include<stdio.h>
int bsearch(int a[10],int n,int ele){
    int high =n-1;
    int low = 0;
    int mid=0;
    while (low < high){
        mid = (low+high)/2;
        if(a[mid]==ele)
            return mid; 
        else if(ele > a[mid])
            low = mid+1;
        else
            high=mid-1;
    }
    return -1;

}

int main(){
    int n,a[10],ele;
    int key=-1;
    printf("\nEnter the total number of elements >> ");scanf("%d",&n);
    printf("\nEnter the Elements in Ascending Order Below :) \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the Search Element >> ");scanf("%d",&ele);
    key = bsearch(a,n,ele);
    if(key==-1){
        printf("\nElement not found");
        return 0;
    }else{
        printf("\nElement found in the location : %d",key+1);
    }
    return 0;
    
}