int Solution::evalRPN(vector<string> &A) {
    stack<int>S;
    for(int i=0;i<A.size();i++){
        if(A[i]!="+" && A[i]!="-" && A[i]!="*" && A[i]!="/"){
            S.push( stoi(A[i]) );
        }
        else{
            int a=S.top();
            S.pop();
            int b=S.top();
            S.pop();
            if(A[i]=="+"){
                S.push(a+b);
            }
            else if(A[i]=="-"){
                S.push(b-a);
            }
            else if(A[i]=="*"){
                S.push(a*b);
            }
            else if(A[i]=="/"){
                S.push(b/a);
            }
        }
    }
    return S.top();
}