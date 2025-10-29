///week08-3b.cpp
///看起來 3x3 陣列,所以開int aa[3][3] ={}陣列 再用myPrint印出來
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; //有大括號,會給0
        int now = 1;
        int winner = 0;
        for(vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now;
            //myPrint(a);//把陣列印出來!我們的小幫手
            if (a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now;//那一條橫線
            if (a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now;//那一條直線
            if (a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now;//斜線 左上 右下
            if (a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now;//斜線 右上 左下
            if(now==1) now = 2;//A走完後,將換B下
            else now = 1; //B走完後,將換A下
        }
        if(winner==1) return "A"; //有wineer是1
        else if(winner==2) return "B"; //有wineer是2
        else if(moves.size()==9) return "Draw";//走完9步,平手
        else return "Pending";
    }
};

