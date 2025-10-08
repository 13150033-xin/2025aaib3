///week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        //ss >> word;//像是cin >> word一樣,現在的ss可以用ss >> word
        //ss >> word;
        while(ss >> word){

        }
        cout << word;

        return word.length();
    }
};
