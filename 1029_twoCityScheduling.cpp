class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int cost = 0;
        size_t sz = costs.size();
        vector<int> diff_a;
        vector<int> diff_b;
        for(vector<int> &vec:costs){
            if(vec[0]<vec[1]){
                cost+=vec[0];
                diff_a.push_back(vec[1]-vec[0]);
            }
            else{
                cost+=vec[1];
                diff_b.push_back(vec[0]-vec[1]);
            }
        }
        if(diff_a.size()>diff_b.size()){
            sort(diff_a.begin(), diff_a.end());
            for(size_t i=0;i<(diff_a.size()-(sz/2));i++)
                cost+=diff_a[i];
            return cost;
        }
        else if(diff_a.size()<diff_b.size()){
            sort(diff_b.begin(), diff_b.end());
            for(size_t i=0;i<(diff_b.size()-(sz/2));i++)
                cost+=diff_b[i];
            return cost;
        }
        else{
            return cost;
        }
    }
};
