class Solution {
public:
    string intToRoman(int num) {
        vector<int>nums;
        string str="";    
        
        
        for(int i=3;i>=0;i--){
            int d=num/pow(10,i);
            nums.push_back(num/pow(10,i));
            num=num-pow(10,i)*d;
        }
        if(nums[0]!=0){
            for(int i=0;i<nums[0];i++){
                str+="M";
            }
        }
        if(nums[1]!=0){
            if(nums[1]==4){
                str+="CD";
            }
            else if(nums[1]==9){
                str+="CM";
            }
            else{
                int d=nums[1]/5;
                int c;
                if(d==1){
                    c=nums[1]%5;
                    str+="D";
                    for(int i=0;i<c;i++){
                        str+="C";
                    }
                }
                else if(d==0){
                    c=nums[1];
                    for(int i=0;i<c;i++){
                        str+="C";
                    }                  
                }
            }
        }
        if(nums[2]!=0){
            if(nums[2]==4){
                str+="XL";
            }
            else if(nums[2]==9){
                str+="XC";
            }
            else{
                int d=nums[2]/5;
                int c;
                if(d==1){
                    c=nums[2]%5;
                    str+="L";
                    for(int i=0;i<c;i++){
                        str+="X";
                    }
                }
                else if(d==0){
                    c=nums[2];
                    for(int i=0;i<c;i++){
                        str+="X";
                    }                  
                }
            }
        }
        if(nums[3]!=0){
            if(nums[3]==4){
                str+="IV";
            }
            else if(nums[3]==9){
                str+="IX";
            }
            else{
                int d=nums[3]/5;
                int c;
                if(d==1){
                    c=nums[3]%5;
                    str+="V";
                    for(int i=0;i<c;i++){
                        str+="I";
                    }
                }
                else if(d==0){
                    c=nums[3];
                    for(int i=0;i<c;i++){
                        str+="I";
                    }                  
                }
            }
        }
        return str;
    }
};