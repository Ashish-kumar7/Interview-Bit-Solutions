bool rowwisesahiplacekiya(int board[][9],int row,int num){
    for(int i=0;i<9;i++){
        if(board[row][i]==num){
            return 0;
        }
    }
    return 1;
}

bool colwisesahiplacekiya(int board[][9],int col,int num){
    for(int i=0;i<9;i++){
        if(board[i][col]==num){
            return 0;
        }
    }
    return 1;
}

bool boxwisesahiplacekiya(int board[][9],int row,int col,int num,int n){
    
    int p=sqrt(n);
    int rowstart=row-row%p;
    int colstart=col-col%p;

    for(int i=rowstart;i<rowstart+p;i++){
        for(int j=colstart;j<colstart+p;j++){
            if(board[i][j]==num){
                return 0;
            }
        }
    }
    return 1;
}

bool placecorrectkiyeho(int board[][9],int row, int col,int num,int n){
    if(!rowwisesahiplacekiya(board,row,num)){
       return 0; 
    }
    if(!colwisesahiplacekiya(board,col,num)){
       return 0; 
    }
    if(!boxwisesahiplacekiya(board,row,col,num,n)){
       return 0; 
    }
    return 1;
}

bool sudokusolver(int board[][9],int n){
    
    int row=-1;
    int col=-1;
    int istrue=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==0){
                row=i;
                col=j;
                istrue=1;
                break;
            }
        }
        if(istrue==1){
            break;
        }
    }
    
    if(istrue==0){
        return 1;
    }
    
    //row
    //col
    
    for(int num=1;num<=n;num++){
        if(placecorrectkiyeho(board,row,col,num,n)){
            board[row][col]=num;
            if(sudokusolver(board,n)){
                return 1;
            }
            board[row][col]=0;
        }
    }
    return 0;
    
}


void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int grid[9][9];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]=='1'){
                grid[i][j]=1;
            }
            else if(A[i][j]=='2'){
                grid[i][j]=2;
            }
           else if(A[i][j]=='3'){
                grid[i][j]=3;
            }
           else if(A[i][j]=='4'){
                grid[i][j]=4;
            }
           else if(A[i][j]=='5'){
                grid[i][j]=5;
            }
           else if(A[i][j]=='6'){
                grid[i][j]=6;
            }
           else if(A[i][j]=='7'){
                grid[i][j]=7;
            }
            else if(A[i][j]=='8'){
                grid[i][j]=8;
            }
            else if(A[i][j]=='9'){
                grid[i][j]=9;
            }
           else if(A[i][j]=='.'){
                grid[i][j]=0;
            }
        }
    }

    
     sudokusolver(grid,n);
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            if(grid[i][j]==1){
                A[i][j]='1';
            }
            else if(grid[i][j]==2){
                A[i][j]='2';
            }
            else if(grid[i][j]==3){
                A[i][j]='3';
            }
            else if(grid[i][j]==4){
                A[i][j]='4';
            }
            else if(grid[i][j]==5){
                A[i][j]='5';
            }
            else if(grid[i][j]==6){
                A[i][j]='6';
            }
            else if(grid[i][j]==7){
                A[i][j]='7';
            }
            else if(grid[i][j]==8){
                A[i][j]='8';
            }
            else if(grid[i][j]==9){
                A[i][j]='9';
            }
}
}


}