class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(!n)
            return 0;
        while(n!=1){
            if(n%2)
                return 0;
            n = n>>1;
        }
        return 1;
    }
};
