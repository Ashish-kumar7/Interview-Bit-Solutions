int Solution::lengthOfLastWord(const string A) {
    
int len = 0;
for(int i = A.size() - 1 ; i >= 0 ; i--){
     if(len > 0 && A[i] == ' '){
        break;
     }
     else if(A[i] != ' '){
        len++;
     }
     else if(A[i] == ' '){
     }
}
        return len;
}
