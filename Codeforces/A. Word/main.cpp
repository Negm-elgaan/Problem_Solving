#include <iostream>

using namespace std;

int main()
{
    short Upper = 0 ,Lower = 0;
    string s;
    cin >> s;
    for (int i = 0 ; s[i] != '\0' ; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            Upper++;
        }
        else
        {
            Lower++;
        }
    }

    if (Upper > Lower)
        for (int i = 0 ; s[i] != '\0' ; i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
        }
    else
        for (int i = 0 ; s[i] != '\0' ; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                s[i] += 32;
        }

    cout << s << endl;
    return 0;
}
