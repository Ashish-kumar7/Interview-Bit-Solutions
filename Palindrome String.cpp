int Solution::isPalindrome(string A) {
transform(A.begin(), A.end(), A.begin(), ::toupper); 
int length,i,j;
length=A.length();
i=0;
j=length-1;
while(i<j){
    if((A[i]>=65 && A[i]<=90)|| (A[i]>=48 && A[i]<=57)){
        if((A[j]>=65 && A[j]<=90)|| (A[j]>=48 && A[j]<=57)){
            if(A[i]==A[j]){
                i++;
                j--;
            }
            else{
                return 0;
        
            }
        }
        else{
            j--;
        }
    }
    else{
        i++;
    }
}
return 1;
}