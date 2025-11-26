//week12-3.cpp 學習計畫Math 第4題
//LeetCode 976. Largest Perimeter Triangle
//要用nums裡的棒子長度,組合出 三角形 兩邊和>第3邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());//排序(又快又好)
        for(int i=nums.size()-1; i>=2; i--){
            if(nums[i] < nums[i-1] + nums[i-2]) return nums[i] + nums[i-1] + nums[i-2];

        }

        return 0;//
    }
};
