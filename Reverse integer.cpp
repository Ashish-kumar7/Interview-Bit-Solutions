int Solution::reverse(int A) {
    long long int a = 0;
    long long int b = abs(A);
    while (b > 0){
        a =(a*10)+ (b%10);
        b /= 10;
    }
    if (A < 0)
        a *= -1;
    if (a > INT_MAX || a < INT_MIN)
        return 0;
    return a;
}