int Solution::colorful(int A) {
    unordered_map<int,int>mp;
    while(A>0){
        int t=A;
        int p=1;
        int r=0;
        while(t>0){
            r=t%10;
            p=p*r;
            mp[p]++;
            if(mp[p]>1){
                return 0;
            }
            t=t/10;
        }
        A=A/10;
    }
    return 1;
}