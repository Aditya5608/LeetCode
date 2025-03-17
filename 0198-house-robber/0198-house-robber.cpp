class Solution {
public:
    int rob(vector<int>& nums) {
    this->nums=nums;
        //int maxi=INT_MIN;
    //Decide Framwork
    return dp(nums.size()-1);
    }
    unordered_map<int,int> cache;
    vector<int> nums;

        //BAse Cases
        int dp(int i){
         if (i == 0) return nums[0];  
        if (i == 1) return max(nums[0], nums[1]);
        if(cache.find(i)!=cache.end()){
            return cache[i];
        }
        else{
            int donotrob=dp(i-1);
            int dorob=dp(i-2)+nums[i];
              cache[i]=max(donotrob,dorob);
            return cache[i];
        
        }
        }
      //  if(nums<2) return nums[i];
        // for(int i=0;i<nums.size();i++){
        //     if(nums.size()<2) return  nums[i];
        //     for(int j=i+2;j<nums.size();j++){
        //         maxi=max(maxi,nums[i]+nums[j]);  
        //             }
        // } 
        // return maxi;
    
};