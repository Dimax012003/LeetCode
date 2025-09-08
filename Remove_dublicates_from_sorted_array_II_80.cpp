class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        int j;
        for(i=0;i<nums.size();i++){
           int k=0;
            for(j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    k++;
                }
                else if(nums[j]!=nums[i]){
                    break;
                }
            }
            if(k>1){
                nums.erase(nums.begin()+i);
                i=i-1;
            }
            cout<<k;

        }
        return nums.size();
    }
};