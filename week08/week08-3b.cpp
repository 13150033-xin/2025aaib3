///week08-3b.cpp
///�ݰ_�� 3x3 �}�C,�ҥH�}int aa[3][3] ={}�}�C �A��myPrint�L�X��
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; //���j�A��,�|��0
        int now = 1;
        int winner = 0;
        for(vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now;
            //myPrint(a);//��}�C�L�X��!�ڭ̪��p����
            if (a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now;//���@����u
            if (a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now;//���@�����u
            if (a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now;//�׽u ���W �k�U
            if (a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now;//�׽u �k�W ���U
            if(now==1) now = 2;//A������,�N��B�U
            else now = 1; //B������,�N��A�U
        }
        if(winner==1) return "A"; //��wineer�O1
        else if(winner==2) return "B"; //��wineer�O2
        else if(moves.size()==9) return "Draw";//����9�B,����
        else return "Pending";
    }
};

