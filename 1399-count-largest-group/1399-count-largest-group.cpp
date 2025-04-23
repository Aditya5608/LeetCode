class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> digit;
        int maxicount=0,maxdigit=0;

        for(int i=1;i<=n;i++){
            int digitsum=0,key=i;
            while(key>0){
                digitsum+=key%10;
                key/=10;
            }
            digit[digitsum]++;
            maxicount=max(maxicount,digit[digitsum]);
        }
        for(auto digi:digit){
            if(digi.second==maxicount){
                maxdigit++;
            }
        }
        return maxdigit;
    }
};