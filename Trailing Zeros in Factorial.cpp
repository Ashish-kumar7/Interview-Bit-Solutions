int Solution::trailingZeroes(int A) {
    int count=0;
    for(int i=5;A/i>=1;i=i*5){
        
        count=count+(A/i);
    }
    return count;
}
