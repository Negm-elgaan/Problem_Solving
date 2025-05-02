#include <iostream>

using namespace std;

int main()
{
    bool x = false;
    string p = "";
    cin >> p;
    for (int i = 0 ; p[i] != '\0' ; i++)
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            x = true;
            break;
        }
    if (x)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
