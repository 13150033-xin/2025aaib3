///week09-1.cpp學習計畫 Matrix矩陣第1題
///LeetCode 1672. Richest Customer Wealth
/// j=0 1 2
///i=0  1,2,3
///i=1  3,2,1
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(), N = accounts[0].size();
        //左手 M 右手 N
        int ans = 0;
        for(int i=0; i<M; i++){
            int now = 0;
            for(int j=0; j<N; j++){
                now += accounts[i][j];
            }
            ans = max(ans, now);
        }
        return ans;
    }
};
