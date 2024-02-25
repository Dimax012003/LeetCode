class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int l=2;
        int max=0;
        int c=0;
        if(points.size()==1){
            return 1;
        }
        else if(points.size()==2){
            return 2;
        }
        for(int i=0;i<points.size();i++){
            for(int j=0;j<points.size();j++){
                long double a=0;
                long double b=0;
                
                if(j!=i){
                    if(points[j][0]-points[i][0]!=0){
                        a=(long double)(points[j][1]-points[i][1])/(long double)(points[j][0]-points[i][0]);
                        b=(long double)points[j][1]-a*(long double)points[j][0];
                        c=0;
                        
                    }
                    else if(points[j][0]-points[i][0]==0){
                        b=(long double)points[j][0];
                        c=1;
                    }
                
                for(int k=0;k<points.size();k++){
                    if(abs((long double)points[k][0]*a+b-(long double)points[k][1])<=0.000000000001 && k!=i && k!=j && c==0){
                        l++;
                        cout<<k<<endl;
                    }
                    else if(c==1 && k!=i && k!=j){
                        if(points[k][0]==b){
                            l++;
                        }
                    }
                    
                }
            
                if(max<l){
                    max=l;
                }
            
                l=2;
                
            }
            }
        }
        
        return max;
    }
};