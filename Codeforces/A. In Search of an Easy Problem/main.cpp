#include <iostream>

using namespace std;

int main()
{
    bool hard = false;
    int n = 0 ;
    cin >> n;
    int *ptr = new int[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin >> ptr[i];
        if (ptr[i] == 1)
            hard = true;
    }
    if (hard)
        cout << "\nHard\n";
    else
        cout << "\nEASY\n";


    return 0;
}
