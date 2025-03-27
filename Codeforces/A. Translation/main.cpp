#include <iostream>
#include <string>


using namespace std;

int main()
{
    bool b = true;

    string s = "" , r = "" , t = "";

    cin >> s >> t;

    //r = s.reverse(s.begin() , s.end());

    for (int i = s.length() - 1 ; i >= 0 ; i--)
    {
        r += s[i];
    }

    for (int i = 0 ; r[i] != '\0' ; i++)
    {
        if (r[i] != t[i] || r.length() != t.length())
        {
            b = false;
            break;
        }
    }

    if (b)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
