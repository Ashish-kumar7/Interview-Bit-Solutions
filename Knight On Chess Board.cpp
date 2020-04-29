//int matrix[1001][1001];

int bfs(long long int matrix[550][550],int a,int b,int sx,int sy,int dx,int dy,int val){
    if(sx<=0 || sx>a || sy<=0 || sy>b || dx<=0 || dx>a || dy<=0 || dy>b){
        return INT_MAX;
    }
    
    if(matrix[sx][sy]<INT_MAX && !(sx==dx && sy==dy)){
        if(matrix[sx][sy]<val+1){
            return INT_MAX;
        }
    }
    
    if(sx==dx && sy==dy){
        return val+1;
    }
    
    if(matrix[sx][sy]>=val+1){
        matrix[sx][sy]=val+1;
        
        long long int B[8];
        
        B[0]=bfs(matrix,a,b,sx+1,sy+2,dx,dy,val+1);
        B[1]=bfs(matrix,a,b,sx+1,sy-2,dx,dy,val+1);
        B[2]=bfs(matrix,a,b,sx-1,sy+2,dx,dy,val+1);
        B[3]=bfs(matrix,a,b,sx-1,sy-2,dx,dy,val+1);
        
        B[4]=bfs(matrix,a,b,sx+2,sy+1,dx,dy,val+1);
        B[5]=bfs(matrix,a,b,sx+2,sy-1,dx,dy,val+1);
        B[6]=bfs(matrix,a,b,sx-2,sy+1,dx,dy,val+1);
        B[7]=bfs(matrix,a,b,sx-2,sy-1,dx,dy,val+1);

        sort(B,B+8);
        return B[0];

    }
    
}


int Solution::knight(int A, int B, int C, int D, int E, int F) {
    
    long long int val=0;
    long long int matrix[550][550];
    for(int i=1;i<=A;i++){
        for(int j=1;j<=B;j++){
            matrix[i][j]=INT_MAX;
        }
    }
    
   long long  int res=bfs(matrix,A,B,C,D,E,F,val);
    if(res==INT_MAX){
        return -1;
    }
    else {
        return res-1;
    }
    return 0;
}
