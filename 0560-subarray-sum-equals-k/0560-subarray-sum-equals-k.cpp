class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int counter=0;
        
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]+nums[i+1]==k){
        //         counter++;
        //     }
        //     if(nums[i]==k) counter++;
        // }
        // return counter;
        unordered_map<int,int> prefixFreq;
        int prefixsum=0,counter=0;
        prefixFreq[0]=1;

        for(int num:nums){
            prefixsum+= num;
            if(prefixFreq.find(prefixsum-k)!=prefixFreq.end()){
                counter+=prefixFreq[prefixsum-k];
            }
            prefixFreq[prefixsum]++;
                    }
                    return counter;
    }
};