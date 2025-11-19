///week11-1b.cpp 挑戰題 二合一  聰明的方法 用沒教過的 HashMap or HashSet
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;
        for(int num : nums) numsSet.insert(num);
        while ( numsSet.find(original) != numsSet.end() ) {
            original = original * 2;
        }
        return original;
    }
};
