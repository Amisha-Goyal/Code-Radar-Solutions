int binarySerach(int arr[],int n,int target){
    int found=0;
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