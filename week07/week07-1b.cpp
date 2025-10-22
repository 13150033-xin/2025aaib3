///week07-1b.cpp 二合一
///TAICA　NYCU 國立陽明交通大學 期中考第6題
///Input:1-9的數字 Output:繞圈圈的方形
///ex. Input:3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3
///Input 2 有3層樓,Input 有5層樓,Input4 有7層樓,Input5 有9層樓
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n; ///Step1:Input

    for(int i=1; i<2*n; i++){ ///Step3:for迴圈,樓層
        for(int j=1; j<2*n; j++){ ///第幾格
            if(j>1) cout << " ";///Step5:火車頭+車廂+車廂+車廂+車廂
            int d = max(abs(i-n), abs(j-n));///Step6:找距離最大值
            cout << d+1; ///cout << n; ///先亂印數字n(將會拆掉)///Step6:再+1
         }
         ///cout << "現在是第i樓, i;" << i; ///Step4:樓層鷹架(將會拆掉)
         cout << endl; ///Step2:Output,跳行
    }
}

