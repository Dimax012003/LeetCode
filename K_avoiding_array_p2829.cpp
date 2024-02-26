class Solution {
public:
    int minimumSum(int n, int k) {
    vector<int>v;
    int j=1;
    int c=0;
        for(int i=0;i<n;i++){
            

            for(int l=0;l<v.size();l++){
                if(j+v[l]==k){
                    c=1; 
                    break;       
                }
            }
            if(c==0){
                v.push_back(j);
            }
            else if(c==1){
                i--;
            }
            c=0;
            j++;
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        return sum;
    }
};