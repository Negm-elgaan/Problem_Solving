#include <iostream>

using namespace std;

int main()
{
    int n = 0 , A = 0 , D = 0;
    cin >> n;
    char *CPtr = new char[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> *(CPtr + i);

        if (CPtr[i] == 'A')
            A++;
        else
            D++;
    }

    if (A > D)
        cout << "Anton\n";
    else if (A < D)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
    return 0;
}
