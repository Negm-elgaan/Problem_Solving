#include <iostream>
#include <string>

using namespace std;

bool Wonderful(long long num)
{
    string remiander1 = "" , remiander2 = "";
    if (num % 2 == 0)
        return false;

    while (num != 0)
    {
        remiander1 += to_string(num % 2);
        num /= 2;
    }

    remiander2 = remiander1;

    for (int i = 0 ; remiander1[i] != '\0' ; i++)
    {
        remiander2[i] = remiander1[remiander1.length() -(i + 1)];
    }

    if (remiander1 == remiander2)
        return true;

    return false;

}

int main()
{
    int num = 0;
    cin >> num;
    if (Wonderful(num))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
