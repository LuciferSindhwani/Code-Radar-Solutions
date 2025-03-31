// Your code here...
#include <stdio.h>
int main(){

int n,l=0;
scanf("%d",&n);
int arr[n],brr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int j=0;j<n;j++){
    l=0;
    for(int k=0;k<n;k++){
        if(arr[j]==arr[k]){
            l++;
            
        }
    }
printf("%d %d\n",arr[j],l);
}
return 0;
}
