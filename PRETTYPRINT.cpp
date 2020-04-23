vector<vector<int> > Solution::prettyPrint(int A) {
    int n = 2 * A - 1;
   vector<vector<int>> v(n, vector<int>(n, 0));
   for (int i = 0; i < A; i++) {
       for (int j = 0 + i; j < n - i; j++) {
           v[i][j] = v[n - i - 1][j] = A - i;
           v[j][i] = v[j][n - 1 - i] = A - i; 
       } 
   }
   return v;
}
