class Solution {
public:
    int maxArea(vector<int>& height) {
    //    int maxi=0;
    //    int maxii=0;
    //     for(int i=0;i<height.size();i++){
    //         for(int j=0;j<height.size();j++){
    //         maxi=max(height[i]);
    //         maxii=max(height[j]);
    //         if(height[i]==height[j]){
    //             return maxi*maxii ;
    //         }
    //         else if(
    //             return maxi;
    //         )
    //         }
    //     }
    int n=height.size();
    int i=0,j=n-1;
    int maxarea=0;
    while(i<j){
        int area=min(height[i],height[j])*(j-i);
        maxarea=max(maxarea,area);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }

    }
    return maxarea;

       
        
       
          
    }
};