class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
    //  long   long maxi=INT_MIN;
    //     for(int i=0;i<nums.size()-2;i++){
    //         for(int j=i+1;j<nums.size()-1;j++){
    //             for(int k=j+1;k<nums.size();k++){
    //                 long long ans=(nums[i]-nums[j])*nums[k];
    //                 maxi=max(maxi,ans);
    //             }
    //         }
    //     }
    //     if(maxi<=0) return 0;
    //     return maxi;

         long maxTriplet = 0, maxElement = 0, maxDiff = 0;
        for (long num : nums) {
            maxTriplet = max(maxTriplet, maxDiff * num);
            maxDiff = max(maxDiff, maxElement - num);
            maxElement = max(maxElement, num);
        }
        return maxTriplet;
    }
};