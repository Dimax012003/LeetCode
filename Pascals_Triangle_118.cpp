class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        if(numRows==1){
            v={{1}};
            return v;
        }
        else if(numRows==2){
            v={{1},{1,1}};
            return v;
        }
        else {
            vector<vector<int>> v1(numRows,vector<int>(0,0));
            v1[0].push_back(1);
            v1[1].push_back(1);
            v1[1].push_back(1);
            for(int i=2;i<numRows;i++){
                v1[i].push_back(1);
                for(int j=1;j<i;j++){
                    v1[i].push_back(v1[i-1][j-1]+v1[i-1][j]);

                }
                v1[i].push_back(1);
            }
            return v1;
        }
        return v;
    }
};