class Solution {
public:   int fun(int i, string& nums, int prevNum, int& k, vector<vector<int>>& memo) {
    if (i == nums.size())
        return 0;
    
    if (memo[i][prevNum + 1] != -1)
        return memo[i][prevNum + 1];

    int t = INT_MIN;
    if (prevNum == -1 || abs(nums[i] - prevNum) <= k)
        t = 1 + fun(i + 1, nums, nums[i], k, memo);
    int nt = fun(i + 1, nums, prevNum, k, memo);

    return memo[i][prevNum + 1] = max(t, nt);
}

int longestIdealString(string nums, int k) {
    int n = nums.size();
    vector<vector<int>> memo(n, vector<int>(256, -1)); // Assuming nums[i] is ASCII character, hence 256 possible values
    return fun(0, nums, -1, k, memo);

    }
};