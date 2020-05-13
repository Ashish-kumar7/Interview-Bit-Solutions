int Solution::diffPossible(vector<int> &A, int B) {
    
    int point1=0;
    int point2=1;
    
    while(point2<A.size() && point1<A.size()){
        
        if(A[point2]-A[point1]==B){
            return 1;
        }
        else if(A[point2]-A[point1]>B && point2-point1>1){
            point1++;
        }
        else {
            point2++;
        }
    }
    return 0;
}
