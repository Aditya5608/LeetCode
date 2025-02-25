class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum=0;
        int currentsum=nums[0];
        for(int i=1;i<nums.size();i++){
            
                if(nums[i]>nums[i-1]){
                    currentsum+= nums[i];
                }
                else{
                    maxsum=max(maxsum,currentsum);
                    currentsum=nums[i];
                }
            
        }
        return max(maxsum,currentsum);
    }
};