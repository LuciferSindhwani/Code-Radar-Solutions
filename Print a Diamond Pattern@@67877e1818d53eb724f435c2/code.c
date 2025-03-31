// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     for(int i=0;i<a;i++){
//         for(int j=0;j<2-i;j++){
//             printf(" ");
//         }
//         for(int k=0;k<=(i*2);k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int z=0;z<=a-2;z++){
//         for(int b=-1;b<z;b++){
//             printf(" ");
//         }
//         for(int w=0;w<=a-(2*z)-1;w++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    int i,j;
    int n;
    scanf("%d",&n);
    for (i=0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
            printf("*");
        }
        printf("\n");
    }
}