// Your code here...
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        // for(int j=0;j<n-i;j++){
        //     printf(" ");
        // }
        // for(int k=0;k<=i;k++){
        //     printf("%d",k+1);
        // }
        m=i+1;
        for(int z=1;z<=i;z++){
            printf("%d",m-1);
            m--;
        }
        printf("\n");
    }
    return 0;
}