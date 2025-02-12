// Your code here...
#include<stdio.h>
int main(){
    int a,b,c ;
    scanf("%d %d %d",&a,&b,&c);
    if ((b<a+c)&&(c<a+b)&&(a<c+b)){
printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}