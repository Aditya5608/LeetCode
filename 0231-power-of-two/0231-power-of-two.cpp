class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if(n<=0) return false;
        // while(n>0){
        //     if(n==1) return true;
        //     if(n%2!=0) return false;
        //     n/=2;
        // }
        // return true;

                if(n<=0) return false;
            if(n==1) return true;
            if(n%2!=0) return false;
            return isPowerOfTwo(n/2);
        // return (n>0) &&(n &(n-1))==0;
    }
};