// W. Mirror Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class MirrorArray
{
    int _Size0 = 0, _Size1 = 0;
    int** DptrArr;
    int** DptrArrRev;
    public:
        MirrorArray(int Size0 ,int Size1)
        {
            _Size0 = Size0;
            _Size1 = Size1;
        }
        void Fill()
        {
            DptrArr = new int* [_Size0];
            DptrArrRev = new int* [_Size0];
            for (int i = 0; i < _Size0; i++)
            {
                DptrArr[i] = new int[_Size1];
                DptrArrRev[i] = new int[_Size1];
                for (int j = 0; j < _Size1; j++)
                {
                    cin >> DptrArr[i][j];
                    DptrArrRev[i][_Size1 - j - 1] = DptrArr[i][j];
                }
            }
        }
        void print()
        {
            for (int i = 0; i < _Size0; i++)
            {
                for (int j = 0; j < _Size1; j++)
                {
                    cout << DptrArr[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        void Rev()
        {
            for (int i = 0; i < _Size0; i++)
            {
                for (int j = 0; j < _Size1; j++)
                {
                    cout << DptrArrRev[i][j] << " ";
                }
                cout << endl;
            }
        }
};
int main()
{
    int s1, s2;
    cin >> s1 >> s2;
    MirrorArray Arr(s1, s2);
    Arr.Fill();
    Arr.Rev();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
