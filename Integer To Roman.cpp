string Solution::intToRoman(int num) {
    
        int val[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
        string ss;
        int i=12;
        while(num>0){
            int div=num/val[i];
            num=num%val[i];
            while(div--){
                ss+=sym[i];
            }
            i--;
        }
        return ss;
}
