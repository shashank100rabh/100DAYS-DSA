//coding-ninja=sum of zeroes
#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int r = mat.size();
    int c = mat[0].size();
    int count =0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(mat[i][j]==0){
                if(i-1>=0 && mat[i-1][j]==1)
            count++;
            if(j+1<c && mat[i] [j+1]==1)
            count++;
            if(i+1<r && mat[i+1][j]==1)
            count++;
            if(j-1>=0 && mat[i][j-1]==1)
            count++;
            }
        }
    }
    return count;
}
