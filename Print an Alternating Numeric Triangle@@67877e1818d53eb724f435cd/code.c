// Your code here...
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        m=n-i-1;
        for(int j=0;j<=i;j++){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
}