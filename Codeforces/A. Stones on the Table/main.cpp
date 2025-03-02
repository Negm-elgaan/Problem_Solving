#include <iostream>

using namespace std;

int main()
{
    short number = 0,x = 0;
    cin >> number;
    string blah = "";
    cin >> blah;
    char b = blah[0];
    for (int i = 1 ; blah[i] != '\0' ; i++)
    {
        if (b == blah[i])
            x++;
        b = blah[i];
    }
    cout << x;
    return 0;
}
