class Solution {
public:

int binary(vector<int>& nums,int low,int high,int target){
    if(low>high) return -1;

   int mid=(low+high)/2;
   if(nums[mid]==target){
                return mid;
            }
    else if(target<nums[mid]){
       return binary(nums,low,mid-1,target);
    }
    else{
       return binary(nums,mid+1,high,target);
    }

}
    int search(vector<int>& nums, int target) {
       
       return binary(nums,0,nums.size()-1,target);
        // int n=nums.size();
        // int low=0;
        // int high=n-1;
        // int ans=n;
        // while(low<=high){
        //     int mid=(low+high)/2;
        //     if(nums[mid]==target){
        //         return mid;
        //     }
            // else if(target<nums[mid]){
            //     high=mid-1;
            // }
            // else {
            //     low=mid+1;

            
            
        // }
        
    // }     
    //          return -1;

    }  
};