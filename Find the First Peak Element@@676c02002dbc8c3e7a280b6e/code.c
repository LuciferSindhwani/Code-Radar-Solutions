// Your code here...
#include<stdio.h>
int main(){
    int n,m=-1;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n>2){
    for(int j=1;j<n-1;j++){
        if((arr[j]>arr[j+1])&&(arr[j]>arr[j-1])){
            m=arr[j];
            break;
        }
        else if(arr[n]>arr[n-1]){
            m=arr[n];
        }
    }}
    else{
        if(arr[0]>arr[1]){
            m=arr[0];
        }
        else{
            m=arr[1];
        }
    }
    
    printf("%d",m);
}