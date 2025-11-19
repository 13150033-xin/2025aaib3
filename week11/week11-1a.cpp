//week11-1a.cpp 挑戰題 二合一 先用(笨方法)寫
///每次乘兩倍,把沒有出現的數字 return出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        //用while迴圈一直做
        while(1){
            int found = 0;//一開始還沒找到
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == original) found = 1;
            }
            if(found==0) break;
            else original = original * 2;
        }
        return original;
    }
};
