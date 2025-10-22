///week07-1a.cpp 二合一
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
using namespace std;
int main()
{
    int n;
    cin >> n; ///Step1:Input

    for (int i=1; i<2*n; i++) { ///Step3:for迴圈,樓層
         for(int j=1; j<2*n; j++) { ///第幾格
             if(j>1) cout << " ";///Step5:火車頭+車廂+車廂+車廂+車廂
             cout << n;
         }
         cout << "現在是第i樓, i:" << i;
         cout << endl; ///Step2:Output,跳行
    }
}
