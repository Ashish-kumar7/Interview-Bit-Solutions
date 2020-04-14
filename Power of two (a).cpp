int Solution::power(string A) {
    if(A=="1"){
        return 0;
    }
    if(A=="2"){
        return 1;
    }
while(A!="1"){ 
    long long int temp=0;
    string B="";
if(A[A.length()-1]=='0' || A[A.length()-1]=='1' || A[A.length()-1]=='3' || A[A.length()-1]=='5' || A[A.length()-1]=='7' || A[A.length()-1]=='9'){
    return 0;
}
int i=0;
if(A.length()<19){
    char ch[20];
    A.copy(ch,0,A.length());
    unsigned long long int X=stoll(A, nullptr, 10);
    while(X>1){
        if(X%2==0){
            X=X/2;
    }
    else{
        return 0;
    }
    }
    A=to_string(X); 
}
else{
    long long int divi=pow(2,40);
        while(i<A.length()){
            temp=temp*10+(A[i]-'0');
            B=B+to_string(temp/divi);
            temp=temp%divi;
            i++;
        }
        B.erase(0, B.find_first_not_of('0'));
        A=B;
    }
}
if(A=="1")
    return 1;
else
    return 0;
}