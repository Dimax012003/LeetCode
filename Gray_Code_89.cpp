class Solution {
public:
    vector<int> grayCode(int n) {
        int s=pow(2,n);
        int i;
        vector<int>v={0,1};
        if(n==1){
            v={0,1};
        }
        else{
        for(int j=1;j<n;j++){
            for(i=pow(2,j);i<pow(2,j+1);i++){
                v.push_back(v[pow(2,j+1)-i-1]+pow(2,j));
            }

        }
        }
        return v;
    }
};