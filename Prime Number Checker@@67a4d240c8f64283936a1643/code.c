// Your code h
int isPrime(int num){
    int a=1;
for(int i;i<num;i++){
    if(num%i==0){
        a=0;
        break;
    }
}
return (a);
}