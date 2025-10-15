///week04-1.cpp
///複習vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; ///伸縮自如的陣列
    cout << "沒有初始化a的長度是" << a.size() << endl; ///一開始 大小0
    a.push_back(99);
    cout << "經過 .push_back() 後 a的長度變" << a.size() << endl;

    vector<int> b(3); ///伸縮自如的陣列,長度是3 裡面都放0
    cout << "b的長度是" << b.size() << endl;
    b.push_back(99); ///最後面再加1個99
    for(int i=0; i<b.size(); i++) cout << b[i] << ' ';
    cout << "經過.push_back(99)後 b變長了" << endl;

    vector<int> c(3,88); ///伸縮自如的陣列,長度是3 裡面都放88
    for(int i=0; i<c.size(); i++) cout << c[i] << ' ';
    cout << "初始化(3,88) 就會是3個88" << endl;

}
