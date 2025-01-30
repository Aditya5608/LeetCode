class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closed=INT_MAX/2;

        for(int i=0;i<nums.size()-2;++i){
            for(int j=i+1;j<nums.size()-1;++j){
                for(int k=j+1;k<nums.size();++k){
                    int currentsum=nums[i]+nums[j]+nums[k];
                    if(abs(currentsum-target)<abs(closed-target)){
                        closed=currentsum;
                    }
                                    }
            }
        }
    
    return closed;
    }
};