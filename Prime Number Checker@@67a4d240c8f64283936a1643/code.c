// Your code h
int isPrime(int num){
int a=1;
if(num==1 || num==0){
    return(0);
}
else{
for(int i=2;i<num;i++){
    if(num%i==0){
        return(0);
        break;
    }

}

return(1);}
}