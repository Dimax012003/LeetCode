class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 1;
        int j = size(height);

        if(j==2){
            if (height[0]<height[1])
                return height[0];
            else if (height[0]>height[1])
                return height[1];
            else if (height[0]==height[1])
                return height[1];
        }
        vector<int> area;
        while(i<j){
            if (height[i-1]<=height[j-1]){
                int new_area=(j-i)*height[i-1];
                area.push_back(new_area);
                i+=1;
            }
            else if (height[i-1]>height[j-1]){
                int new_area=(j-i)*height[j-1];
                area.push_back(new_area);
                j-=1;
            }
        };
        int max_area=0;
        for(int k=0;k<size(area);k++){
            if(max_area<area[k]){
                max_area=area[k];
            }
        }
        return max_area;
    }
};