vector<int> Solution::equal(vector<int> &A) {
    
    int n=A.size();
    map<int,pair<int,int>>mp;
    
     vector<int>Ans;
     
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             int sum=A[i]+A[j];
             if(mp.find(sum)==mp.end()){
                 mp[sum]=make_pair(i,j);
                 continue;
             }
             
             pair<int,int>p=mp[sum];
             
             if(p.first!=i && p.second!=i && p.first!=j && p.second!=j ){
                 vector<int>ans;
                 ans.push_back(p.first);
                ans.push_back(p.second);
                ans.push_back(i);
                ans.push_back(j);
                
                if(Ans.size()==0){
                    Ans=ans;
                }
                else{
                      bool shouldReplace = false;
                      for (int i1 = 0; i1 < Ans.size(); i1++) {
                         if (Ans[i1] < ans[i1]) break;
                         if (Ans[i1] > ans[i1]) {
                           shouldReplace = true;
                           break;
                            }
                        }
                     if (shouldReplace) Ans = ans;
                }
             }
         }
     }
    return Ans;
}