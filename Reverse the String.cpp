string Solution::solve(string A) {
    string res="";
    stack<string>S;
    for(int i=0;i<A.size();i++){
        if(A[i]!=' '){
            res+=A[i];
        }
        else if(A[i]==' ' && i!=A.size()-1 && res.length()!=0){
            S.push(res);
            res="";
        }
    }
    S.push(res);
    string AA="";
    while(!S.empty()){
        AA=AA+S.top();
        AA=AA+" ";
        S.pop();
    }
    int val;
    for(int j=0;j<AA.size();j++){
        if(AA[j]!=' '){
            val=j;
            break;
        }
    }
    int val2;
    for(int j=AA.size()-1;j>=0;j--){
        if(AA[j]!=' '){
            val2=j;
            break;
        }
    }
    return AA.substr(val,val2-val+1);
}