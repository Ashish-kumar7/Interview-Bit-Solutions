int Solution :: solve(string A) {
int len=A.length()-1;
    int start=0;
    int end=len;
    int prev=0;
    int backup=0;
    bool status=false;
    while(start<end){
        if(A[start]==A[end]){
            start++;
            backup++;
        }else{
            prev++;
            start=0;
            if(A[start]==A[end])
                {   
                    start++; 
                }
            else{
                    prev+=backup;
                    backup=0; 
                }    
        }
        end--;
    }
    return (prev);
}