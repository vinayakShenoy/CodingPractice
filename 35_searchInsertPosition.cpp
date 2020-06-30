class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //create iter
        vector<int>::iterator iter = nums.begin();
        //iterator until either iter hits target or comes across number greater than target or iter reaches end
        while(iter!=nums.end() && *iter!=target && *iter<target){
            //cout << *iter << endl;
            ++iter;
        }
        return (iter-nums.begin());
    }
};
