///week05-3c.cpp �T�X�@��Part1/Part2 Input/Output
///Part3:stringstream�_�r
///CPE �o������2�D UVA 483 Word Scrnble��r�ˤ�
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    while( getline(cin, line)){
    ///Ū�J1��,�@��Ū,Ū��Ctr1-Z�~����
       stringstream ss(line);
       string word;
       ss >> word;
       reverse( word.begin(), word.end() );
       cout << word;
       while( ss >> word){
           reverse(word.begin(),word.end() );
           cout << " " << word;
       }
       cout << endl;///����Part 2:Output
       ///cout << line << endl;///���H�K�L�X��
    }
}
