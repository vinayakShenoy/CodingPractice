class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.empty() || s.size()==1)
            return;
        size_t r = s.size()-1;
        size_t l = 0;
        while(l<r){
            //swap s.at(l) and s.at(r)
            //increment l and decrement r
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }
    }
};
