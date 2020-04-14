int Solution::atoi(const string A) {
    int i=0;
    long long int v=0;
    int flag=0;
        for(int i=0;i<A.length();i++){
        if(A[i]==' '){
            break;
        }
        if(A[i]=='-'){
            flag=-1;
            continue;
        }
        if(A[i]=='+'){
            continue;
        }
        if((A[i]<'0' || A[i]>'9')){
            break;
        }
            if((A[i]>='0' && A[i]<='9')){
                v=v*10 + (A[i]-'0');
            }
            if(v>INT_MAX && flag==0){
                return INT_MAX;
            }
            if(v>INT_MAX && flag ==-1){
                return INT_MIN;
            }
        }
    if(flag==-1){
        return v-2*v;
    }
    return v;
}