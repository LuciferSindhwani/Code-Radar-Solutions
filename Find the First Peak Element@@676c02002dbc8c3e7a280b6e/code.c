// Your code here...
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<n-1;j++){
        if((arr[j]>arr[j+1])&&(arr[j]>arr[j-1])){
            m=arr[j];
        }
    }
    printf("%d",m);
}