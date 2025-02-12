// Your code here...
#include<stdio.h>
int main(){
    int a;
    int j=0;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
if (a%i==0)
{
    j=1;
    break;
}

    }
    if (j==1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }

    retrun 0;

}