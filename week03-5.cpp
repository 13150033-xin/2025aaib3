///week03-5.cpp
///LeetCode厩策璸礶材肈
///р计 逼 琌ぃ琌 綟常妓计
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int d = arr[1] - arr[0];
        for(int i=1; i<arr.size(); i++){
            if(arr[i] - arr[i-1] != d) return false;
        }
        return true;
    }
};
