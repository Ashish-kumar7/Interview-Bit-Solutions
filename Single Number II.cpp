int Solution::singleNumber(const vector<int> &A) {
    int sum = 0;
    int answer = 0;
    int num = 0;
    for(int i=0;i<32;i++){
        sum =0;
    for(int j:A){
        num = j >> i;
        int x = num & 1;
        sum+=x;
    }
    sum = sum%3;
    answer += sum*pow(2,i);
    }
    return answer;
}