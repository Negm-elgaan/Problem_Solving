#include <iostream>

using namespace std;

int main()
{
    long long Number = 0 , y;
    int x = 0 ;
    cin >> Number;
    y = Number;
    while(y != 0)
    {
        int remiander = y % 10;
        if (remiander == 4 || remiander == 7)
            x++;
        y /= 10;
    }

    if (x == 4 || x == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
