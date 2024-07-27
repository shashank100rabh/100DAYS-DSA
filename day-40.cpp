//leetcode - 74(search a 2d matrix)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n= matrix[0].size();

        vector<int>row(m,0);
        vector<int>col(n,0);
         bool found=0;

        for (int i=0; i<m; i++){
           
            for(int j=0; j<n; j++){
                if(matrix[i][j]==target){
                   found= 1;
                }
            }
        }

        if(found==1){
            return true;
        }
        else{
            return false;
        }
        //return true;
    }
};
