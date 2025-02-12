// Your code here...
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d",&a,&b);
c=a%b;
if(c==0){
    printf("Yes");
}
else{
    printf("No");
}
return 0;
}