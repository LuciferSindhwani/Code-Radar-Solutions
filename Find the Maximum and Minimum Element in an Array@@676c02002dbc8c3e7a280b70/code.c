// Your code here...
#include<stdio.h>
int main(){
    int n,e,l;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    l=e=arr[0];
    for(int j=0;j<n;j++){
if(arr[j]>e){
    e=arr[j]; 
}
    }
    for(int j=0;j<n;j++){
if(arr[j]<l){
    l=arr[j]; 
}
    }
     printf("%d",l);
    printf(" %d",e);
   
    return 0;
}