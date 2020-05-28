void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count1=0;
    int count2=0;
    int count0=0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            count0++;
        }
        else if(A[i]==1){
            count1++;
        }
        else if(A[i]==2){
            count2++;
        }
    }
    //int i;
    A.clear();
    for(int i=0;i<count0;i++){
        A.push_back(0);
    }
    for(int i=0;i<count1;i++){
        A.push_back(1);
    }
    for(int i=0;i<count2;i++){
        A.push_back(2);
    }
    
    
    }
