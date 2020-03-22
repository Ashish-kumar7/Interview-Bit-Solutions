
bool isprime(int n)
{   
    int y=n/2;
    //cout<<y<<" ";
    for(int i=2;i<y;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}





vector<int> Solution::primesum(int a) {
    int x=a/2;
    vector<int>A;
   // cout<<22222222<<endl;
    for(int i=2;i<a;i++)
    {
        if(isprime(i)==1)
        {
           // cout<<00000<<endl;
            if(isprime(a-i)==1)
            {
             //   cout<<i<<" "<<a-i;
               A.push_back(i);
               A.push_back(a-i);
               break;
            }
        }
    }
    return A;
}
