int Solution::gcd(int A, int B) {
    int val=0;
    if(A==0 && B!=0){
        return B;
    }
    else if(B==0 && A!=0){
        return A;
    }
    else if(A==0 && B==0){
        return 0;
    }
    else if(A<=B){
        for(int i=A;i>=1;i--){
            if(A%i==0 && B%i==0){
                val=i;
                break;
            }
        }
    }
    else if(B<=A){
        for(int i=B;i>=1;i--){
            if(A%i==0 && B%i==0){
                val=i;
                break;
            }
        }
    }
    return val;
}