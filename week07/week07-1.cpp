///week07-1a.cpp �G�X�@
///TAICA�@NYCU ��߶�����q�j�� �����Ҳ�6�D
///Input:1-9���Ʀr Output:¶��骺���
///ex. Input:3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3
///Input 2 ��3�h��,Input ��5�h��,Input4 ��7�h��,Input5 ��9�h��
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; ///Step1:Input

    for (int i=1; i<2*n; i++) { ///Step3:for�j��,�Ӽh
         for(int j=1; j<2*n; j++) { ///�ĴX��
             if(j>1) cout << " ";///Step5:�����Y+���[+���[+���[+���[
             cout << n;
         }
         cout << "�{�b�O��i��, i:" << i;
         cout << endl; ///Step2:Output,����
    }
}
