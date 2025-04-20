#include <iostream>

#define Func(x , y , s) \
    for (int i = 0 ; x[i] != '\0' ; i++) \
    { \
        if (x[i] != y[i]) \
            s += '1'; \
        else \
            s += '0'; \
    }\
    cout << s;\

using namespace std;

int main()
{
    string f = "" , g = "" , s = "";
    cin >> f >> g;
    Func(f , g , s);
    return 0;
}
