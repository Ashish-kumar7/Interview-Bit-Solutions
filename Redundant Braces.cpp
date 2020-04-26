int Solution::braces(string A) {
    stack<char>S;
    for(int i=0;i<A.length();i++){
        if( A[i]=='(' || A[i]=='*'|| A[i]=='+' || A[i]=='/' || A[i]=='-' ){
            S.push(A[i]);
        }
        else if(A[i]==')'){
            if(S.top()=='('){
                return 1;
            }
            else{
                while(!S.empty() && S.top()!='('){
                    S.pop();
                }
                S.pop();
            }
        }
    }
    return 0;
}