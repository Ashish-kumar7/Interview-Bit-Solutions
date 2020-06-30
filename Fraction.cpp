string Solution::fractionToDecimal(int A, int B) {
    
    long long int  a=A;
    long long int b=B;
    string res="";
    
    if(a==0){
        return "0";
    }
    if(a<0 ^ b<0){
        res+="-";
    }
    a=abs(a);
    b=abs(b);
    
    long long int initial=a/b;
    res+=to_string(initial);
    if(a%b==0){
        return res;
    }
    
     res+="."; 
     
     map<long long ,long long >mp;
     
     long long rem=a%b;
     
     int flag=0;
     
     int i;
     
     while(rem>0 && !flag){
         
         if(mp.find(rem)!=mp.end()){
             i=mp[rem];
             flag=1;
             break;
         }
         else{
            mp[rem]=res.size();
         }
             rem=rem*10;
           long long  int temp=rem/b;
             res+=to_string(temp);
             rem=rem%b;
     }
 
 if(flag==1){
    res += ")";
    res.insert(i, "("); 
 }
return res;
}