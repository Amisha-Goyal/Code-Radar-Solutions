int binarySearch(int arr[],int n,int target){
    int pos,found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            pos=i;
            found=1;
           
        }
    }
    if(found){
        return pos;
    }
    else{
        return -1;
    }
    
}