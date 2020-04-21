int Solution::isPalindrome(int n) {
    int remainder=0;
    int reversedN=0;
    int p=n;
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
     while (n > 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    if(reversedN==p){
        return 1;
    }
    return 0;
}