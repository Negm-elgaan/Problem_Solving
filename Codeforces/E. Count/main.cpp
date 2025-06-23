#include <iostream>


using namespace std;

int main()
{
    string S = "";
    int Sum = 0;
    cin >> S;
    for (int i = 0 ; S[i] != '\0' ; i++)
    {
        Sum += (int)(S[i]) - 48;
    }
    cout << Sum;
    return 0;
}
