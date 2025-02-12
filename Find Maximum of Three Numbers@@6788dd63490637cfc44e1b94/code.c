// Your code here...
#include<stdio.h>
int main(){
    int a[3];
    for(int j=0;j<3;j++){
        scanf("%d",a[j]);
    }
        int b=a[0];
    for(int i=0;i<3;i++){
        if (a[i]>b){
            b=a[i];
        }
        else{
            continue;
        }
    }
    return 0; 
}