// Your code here...
void bubbleSort(int arr[],n){
    int swap=0;
    int temp;
for(int i=0;i<n;i++){
     swap=1;
    for(int j=0;j<n-i-1;j++){
       
        if(arr[j]>arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
        
    }
    if(swap==0){
        break;
    }
}
}