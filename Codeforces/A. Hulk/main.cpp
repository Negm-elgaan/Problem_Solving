#include <iostream>

using namespace std;

string Hulk(short Num)
{
    if (Num == 1)
        return "I hate it";
    string Hate = "I hate" , Love = "I love" , hulk = "I hate";
    for (int i = 2 ; i <= Num ; i++)
    {
        if (i % 2 == 0)
        {
            hulk += " that " + Love;
        }
        else
        {
            hulk += " that " + Hate;
        }
    }
    hulk += " it";
    return hulk;
}

int main()
{
    int h = 0;
    cin >> h;
    cout << Hulk(h) ;
    return 0;
}
