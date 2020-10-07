class Solution {
public:
map<vector, int>m;

void dfs(vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int> temp, int sum, int i){
    if(target==sum){
        sort(temp.begin(), temp.end());
        auto it = m.find(temp);
        if(it==m.end()){
            m.insert(make_pair(temp, 1));
            ans.push_back(temp);
        }
        return;
    }
    if(sum>target || i>=candidates.size())return;
    
    dfs(candidates, target, ans, temp, sum, i+1);
    temp.push_back(candidates[i]);
    dfs(candidates, target, ans, temp, sum+candidates[i], i+1);
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> temp;
    dfs(candidates, target, ans, temp, 0, 0);
    return ans;
}
};