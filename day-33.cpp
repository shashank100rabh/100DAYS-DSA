//leetcode - 48(rotate image
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     int size= matrix.size();   
    vector < vector < int >> rotated(size,vector < int > (size, 0));
    
    
    for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        rotated[j][size - i - 1] = matrix[i][j];
        //matrix[i][j]=rotated[j][size - i - 1];
    }
    }
    matrix = rotated;
    //return matrix;
        
    }
};
