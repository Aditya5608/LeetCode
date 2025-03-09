class Solution {
public:
    int majorityElement(vector<int>& nums) {
      /*  int count =0;
        int candidate=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        
        if(count>nums.size()/2){            
        candidate=nums[i];
        }}
        return candidate;}
    
};*/
// sort(nums.begin(),nums.end());                    
// int n= nums.size();
// return nums[n/2];

int element,count=0;
for(int i=0;i<nums.size();i++){
    if(count==0){
        element=nums[i];
        count++;
    }
    else if(nums[i]==element) count++;
    else count--;
}
return element;
}
};