class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; ///�i�H�α�l�Ӹ˦r��,�j�A��,�N��@�}�l�Ū�
        for(int i=0; i<s.length(); i++){ //�r�ꪺfor�j��
            char c = s[i]; //���X�r��
            A[c]++; //��r��,��J��l��
        }
        for(int i=0; i<t.length(); i++){ //�r�ꪺfor�j��
            char c = t[i]; //���X�r��
            A[c]--; //�q��l��,���X�r��
            if(A[c] < 0) return c; //������ �ܭt��,�N������,�ʥ�
        }
        return 0; //���|�Ψ�o�@��
    }
};
