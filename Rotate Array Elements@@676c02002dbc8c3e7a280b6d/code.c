// Your code here...
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
scanf("%d",&m);
    
        
            for(int j=0;j<n;j++){
                if(m>0){
                        brr[j]=arr[n-m];
                       }
                else{
                    brr[j]=arr[((-1)*(n-m))];
                }
                     m++;
        }
        for(int k=0;k<n;k++){
            printf("%d\n",brr[k]);
        }

    return 0;
}