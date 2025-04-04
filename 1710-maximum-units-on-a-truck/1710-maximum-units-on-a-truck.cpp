class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](const vector<int>& a,const vector<int>&b){
            return a[1]>b[1];
        });
        int maxi=0;

        for(auto num:boxTypes){
            if(truckSize==0) break;

            int box=min(num[0],truckSize);
            maxi +=box*num[1];
            truckSize -= box;
        }
    return maxi;
    }
};