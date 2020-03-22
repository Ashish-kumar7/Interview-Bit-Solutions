vector<string> Solution::fizzBuzz(int A) {
        string s[A+1];
    s[0]="1";
    s[1]="2";
    for(int i=2;i<=A;i++)
    {
        if((i+1)%15==0)
        {
            s[i]="FizzBuzz";
        }
        else if((i+1)%3==0)
        {
            s[i]=("Fizz");
        }
        else if((i+1)%5==0)
        {
            s[i]=("Buzz");
        }
        else 
        {
            s[i]=to_string(i+1);
        }
    }
   vector<string>st;
for(int i=0;i<A;i++)
{
    st.push_back(s[i]);
}
    return st;
}
