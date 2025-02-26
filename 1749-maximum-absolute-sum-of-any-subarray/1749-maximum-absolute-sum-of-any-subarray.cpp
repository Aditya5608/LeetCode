class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=0;
        int minsum=0;
        int sum=0;
        for(int num:nums){
            sum+=num;
            if(sum>maxsum) maxsum=sum;
            if(sum<minsum) minsum=sum;
        }
        return abs(maxsum-minsum);
    }
};