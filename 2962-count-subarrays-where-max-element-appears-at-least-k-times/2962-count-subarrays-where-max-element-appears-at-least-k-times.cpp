class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k,int left=0) {
        long maxi=*max_element(nums.begin(),nums.end()),maxioccurence=0,res=0;

        for(int right=0;right<nums.size();right++){
            if(nums[right]==maxi){
                ++maxioccurence;
            }
            while(maxioccurence>=k){
                if(nums[left]==maxi){
                    --maxioccurence;
                }
            left++;
        }
        res+=left;
    }
    return res;
    }
};