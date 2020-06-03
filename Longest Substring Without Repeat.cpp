int Solution::lengthOfLongestSubstring(string A) {
    unordered_map<char, int> mp;
    int max_len = -1;
    int prev_len = 0;
    for(int i=0;i<A.size();++i){
        auto it=mp.find(A[i]);
        if(it ==mp.end()){
            mp[A[i]] = i;
            prev_len += 1;
    } 
    else {
         if(prev_len > max_len) {
             max_len = prev_len;
         }
         prev_len = 0;
         i = mp[A[i]];
         mp.clear();
    }
    
    }
    return max(prev_len, max_len);
}