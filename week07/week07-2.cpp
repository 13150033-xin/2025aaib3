//week07-2.cpp LeetCode�ǲ߭p�e
//���������H����
//���A'U' up���W , 'D' down���U,'L' left����'R'right���k
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        //for (int i=0; i<moves.length(); i++){ //�ǲΪ�for�j��
        //     char c = moves[i];
        for (char c : moves) {
            if (c=='U'){ //up���W
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
