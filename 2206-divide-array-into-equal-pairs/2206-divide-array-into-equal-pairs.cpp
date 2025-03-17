class Solution {
public:
    bool divideArray(vector<int>& nums) {
      unordered_map<int,int> count;
        //int count=0;

        for(int num:nums){
           count[num]++;
            }
        
        for(auto& pair:count){
            if(pair.second %2 !=0)return false;
        }
        return true;
    //     sort(nums.begin(),nums.end());
    //    for(int i=0;i<nums.size();i+=2){
    //     if(nums[i]!=nums[i+1]){
    //         return false;
    //     }
    //    }
    //    return true;
    }
};