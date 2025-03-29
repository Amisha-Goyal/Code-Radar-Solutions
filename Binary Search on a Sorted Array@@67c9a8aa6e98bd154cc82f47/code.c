int binarySerach(int arr[],int n,int target){
    int found=0,pos;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            pos=i;
            found=1;
           
        }
    }
    if(found){
        printf("%d",pos);
    }
    else{
        printf("-1");
    }
}