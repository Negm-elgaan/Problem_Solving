#include <iostream>

using namespace std;

int main()
{
    string s = "";
    cin >> s;
    for (int i = 0 ; s[i] != '\0' ; i++)
    {
        if (s[i] == ',')
        {
            s[i] = 32;
        }

        else if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }

        else
        {
            s[i] -= 32;
        }
    }

    cout << s;
    return 0;
}
