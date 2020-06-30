int Solution::maxArr(vector<int> &A) {
    int len=A.size();
    int arr[len]={0};
    int arr1[len]={0};
    
    
    for(int i=0;i<len;i++)
    {
        arr[i]=A[i]+i;
        arr1[i]=A[i]-i;
    }
    
    int ma=INT_MIN;
    int mi=INT_MAX;
    
    for(int i=0;i<len;i++)
    {
        if(arr[i]>ma)
            ma=arr[i];
        if(arr[i]<mi)
            mi=arr[i];
    }
    
    int sum=abs(ma-mi);
    
    ma=INT_MIN;
    mi=INT_MAX;
    
    for(int i=0;i<len;i++)
    {
        if(arr1[i]>ma)
        ma=arr1[i];
        if(arr1[i]<mi)
            mi=arr1[i];
    }
    int sum1=abs(ma-mi);
    int result=max(sum,sum1);
    return result;
}