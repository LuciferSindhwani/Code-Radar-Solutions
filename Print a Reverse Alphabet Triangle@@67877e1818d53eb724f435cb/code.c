// Your code here...
#include<stdio.h>
int main(){
    int n;
    char a='A';
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(j=0;j<n-i;j++){printf("%c ",a);
        a++;
        }
        printf("\n");
    }
}