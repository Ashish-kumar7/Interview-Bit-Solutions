int Solution::jump(vector<int> &A){
    //dp O(n^2)
    // int n=A.size();
    // if(n<=1){
    //     return 0;
    // }
    // if(A[0]==0 ){
    //     return -1;
    // }
    // int dp[n];
    // dp[0]=0;
    
    // dp[1]=1;
    // for(int i=2;i<n;i++){
    //     dp[i]=INT_MAX;
    //     for(int j=0;j<i;j++){
    //         if(i<=j+A[j] && dp[j]!=INT_MAX){
    //             dp[i]=min(dp[i],dp[j]+1);;
    //             break;
    //         }
    //     }
    // }
    // if(dp[n-1]==INT_MAX){
    //     return -1;
    // }
    // return dp[n-1];
    
    
    //O(n)
    if(A[0]==0 && A.size()>1){
        return -1;
    }
    if(A.size()<=1){
        return 0;
    }
    int ladder=A[0];
    int stair=A[0];
    int jump=1;
    for(int i=1;i<A.size();i++){
        if(i==A.size()-1){
            return jump;
        }
        if(i+A[i]>ladder){
            ladder=A[i]+i;
        }
        stair--;
        if(stair==0){
            stair=ladder-i;
            jump++;
        }
    }
    return jump;
}