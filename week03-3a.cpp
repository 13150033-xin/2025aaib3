//week03-3a.cpp
//LeetCode�ǲ߭p�e
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; ///1���W�����,�N��M�ܦ� �����
        for(int i=0; i<nums.size(); i++){
            ans *= nums[i]; ///��}�C ���i�h
        }
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
