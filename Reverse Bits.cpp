unsigned int Solution::reverse(unsigned int A) {
    unsigned int ans=0;
    for(int i=0;i<32;i++){
        if((A>>i) & 1)
        ans+=pow(2,(31-i));
    }
    return ans;
}

