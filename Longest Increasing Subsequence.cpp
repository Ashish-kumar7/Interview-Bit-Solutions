int Solution::lis(const vector<int> &A) 
{
    int mxlen=0;
    unordered_map<int, stack<int>> bag;
    for(auto i: A)
    {
        if(bag.empty())
        {
            stack<int> temp({i});
            bag[1]=temp;
            mxlen=1;
        }
        else
        {
            for(auto it: bag)
            {
                stack<int> temp = it.second;
                
                while(!temp.empty() && i<temp.top())
                    temp.pop();
                    
                if(temp.empty() || (!temp.empty() && temp.top()<i))
                {
                    temp.push(i);
                    int len=temp.size();
                    
                    if(bag.find(len)==bag.end())
                        bag[len] = temp;
                    else 
                    {
                        if(i < bag[len].top())
                            bag[len] = temp;
                    }
                    
                    mxlen=max(mxlen,len);
                }
            }
        }
    }
    return mxlen;
}