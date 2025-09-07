class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int boundi=0;
        int boundj=matrix.size()-1;
        while(boundi<boundj){
            for(int i=boundi;i<boundj;i++){
                int temp1=matrix[boundi][i];
                int temp2=matrix[i][boundj];
                int temp3=matrix[boundj][matrix.size()-1-i];
                int temp4=matrix[matrix.size()-1-i][boundi];
                matrix[i][boundj]=temp1;
                matrix[boundj][matrix.size()-1-i]=temp2;
                matrix[matrix.size()-1-i][boundi]=temp3;
                matrix[boundi][i]=temp4;
            }
            boundi++;
            boundj--;
        }

    }
};