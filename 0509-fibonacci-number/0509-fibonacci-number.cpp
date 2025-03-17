class Solution {
public:
    int fib(int n) {
        unordered_map<int,int> cache;
        if(n<=1) return n;
        if(cache.find(n) !=cache.end()){
            return cache[n];
        }
        else{
            cache[n]=fib(n-1)+fib(n-2);
            return cache[n];
        }
        //if(n==0) return 1;
      //  return fib(n-1)+fib(n-2);
        // int a=0;
        // int b=1;
        // for(int i=2;i<=n;i++){
        //     int temp=b;
        //     b=a+b;
        //     a=temp;
        // }
        // return b;
    }
};