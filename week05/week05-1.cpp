///week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        //ss >> word;//���Ocin >> word�@��,�{�b��ss�i�H��ss >> word
        //ss >> word;
        while(ss >> word){

        }
        cout << word;

        return word.length();
    }
};
