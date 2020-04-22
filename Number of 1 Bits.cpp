int Solution::numSetBits(unsigned int A) {
int count=0;
for(int i=0;i<32;i++){
    if(A&1!=0){
        count++;
    }
    A=A>>1;
}
    return count;
}
