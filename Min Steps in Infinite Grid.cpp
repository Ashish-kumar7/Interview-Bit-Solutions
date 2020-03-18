int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    
   int count=0;
   if(A.size()==1)
   {
       return 0;
   }
   for(int i=0;i<A.size()-1;i++)
   {
       if(abs(A[i+1]-A[i]) > abs(B[i+1]-B[i]) )
       {
           count+=abs(A[i+1]-A[i]);
       }
       else 
       {
           count+=abs(B[i+1]-B[i]);
       }
   }
   return count;
}