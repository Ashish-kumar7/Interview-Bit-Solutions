
bool cmpr( string s1, string s2 ){

if( s1.append(s2).compare( s2.append(s1) ) > 0 )
    return true;
    
else
    return false;
}
string Solution::largestNumber(const vector<int> &A) {
    int i=0, s = A.size();
string ret = "";

if( s == 0 )
    return "";

vector<string> ans(s);

while( i<s ){
    
   ans[i] = to_string( A[i] );
   ++i;
}

sort( ans.begin(), ans.end(), cmpr );

if( ans[0] == "0" )
    return "0";
    

for( i=0; i<s; i++ ){
    
    ret.append( ans[i] );
}
return ret;
}