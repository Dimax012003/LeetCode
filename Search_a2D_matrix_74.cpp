class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j=-1;
        for(int i=0;i<matrix.size();i++){
            if(i==0 ){
                if(target==matrix[0][0]){
                    j=0;
                }
            }
            else if (target>=matrix[i-1][0] && target<matrix[i][0]){
                j=i-1;
            }
            else if(matrix[i][0]==target){
                j=i;
            }
            if(i==matrix.size()-1){
                if(target>matrix[i][0]){
                    j=i;
                }
            }
            
        }
        if(j==-1){
            return false;
        }
        for(int i=0;i<matrix[0].size();i++){
            if(matrix[j][i]==target){
                return true;
            }
        }
        return false;
    }
};