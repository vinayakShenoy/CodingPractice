class Solution {
public:
    bool isSubsequence(string s, string t) {
        string::iterator iter_s = s.begin();
        for(string::iterator iter_t=t.begin();iter_t!=t.end();++iter_t){
            if(*iter_t==*iter_s){
                ++iter_s;
            }
            if(iter_s==s.end())
                return 1;
        }
        if(s=="" && t=="")
            return 1;
        return 0;
    }
};
