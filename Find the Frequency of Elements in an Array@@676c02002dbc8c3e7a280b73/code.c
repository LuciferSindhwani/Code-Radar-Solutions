// Your code here...
#include <stdio.h>
int main(){

int n,l=0;
scanf("%d",&n);
int arr[n],brr[n],crr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    crr[i]=arr[i];
}
for(int j=0;j<n;j++){
    l=0;
    if (arr[j]==-1){

    for(int k=0;k<n;k++){
        if(arr[j]==arr[k+1]){
            l++;
            arr[k]=-1;
            }

    }
    brr[j]=l;
}
}
return 0;
}
