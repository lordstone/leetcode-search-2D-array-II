class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> xs, ys;
        for(int i = 0; i < matrix.size(); i ++){
            if(matrix[i][0] <= target && matrix[i].back() >= target)
                xs.push_back(i);
        }
        for(int j = 0; j < matrix[0].size(); j ++){
            if(matrix[0][j] <= target && matrix[matrix.size() - 1][j] >= target)
                ys.push_back(j);
        }
        for(int i = 0; i < xs.size() ; i ++){
            for(int j = 0; j < ys.size(); j ++){
                if(matrix[i][j] == target) return true;
            }
        }
        return false;
        
    }
};
