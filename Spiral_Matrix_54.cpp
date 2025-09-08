class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int k=0;
        int uprow=0;
        int dorow=matrix.size()-1;
        int ricol=matrix[0].size()-1;
        int lecol=0;
        vector<int>array;
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==1 && n==1){
            array.push_back(matrix[0][0]);
            return array;
        }
        if(m==1 && n!=1){
            for(int i=0;i<n;i++){
                array.push_back(matrix[0][i]);
            }
            return array;
        }
        if(n==1 && m!=1){
            for(int i=0;i<m;i++){
                array.push_back(matrix[i][0]);
            }
            return array;
        }
        do{
            if(k<m*n){
                for(int j=lecol;j<ricol;j++){
                    if(k<m*n){
                    array.push_back(matrix[uprow][j]);
                    k++;
                    }
                }
            }
            if(k<m*n){
                for(int i=uprow;i<dorow;i++){
                    if(k<m*n){
                    array.push_back(matrix[i][ricol]);
                    k++;
                    }
                }
            }
            if(k<m*n){
                for(int j=ricol;j>lecol;j--){
                    if(k<m*n){
                    array.push_back(matrix[dorow][j]);
                    k++;
                    }
                }
            }
            if(k<m*n){
                for(int i=dorow;i>uprow;i--){
                    if(k<m*n){
                    array.push_back(matrix[i][lecol]);
                    k++;
                    }

                }
            }
            lecol++;
            uprow++;
            dorow--;
            ricol--;

            if(m*n-k==1 && ricol==lecol){
                array.push_back(matrix[m/2][n/2]);
                k++;
                cout<<k;
            }
        }while(k<m*n);
        return array;
    }
};