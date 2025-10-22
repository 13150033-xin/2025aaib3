//week07-2.cpp LeetCode學習計畫
//模擬機器人走路
//給你'U' up往上 , 'D' down往下,'L' left往左'R'right往右
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        //for (int i=0; i<moves.length(); i++){ //傳統的for迴圈
        //     char c = moves[i];
        for (char c : moves) {
            if (c=='U'){ //up往上
                y++;
            } else if (c=='D'){
                y--;
            } else if (c=='L'){
                x--;
            } else if (c=='R'){
                x++;
            }
        }
        if (x==0 && y==0) return true;
        else return false;
    }
};
