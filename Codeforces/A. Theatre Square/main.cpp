#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double n = 0 , m = 0 , a = 0;
    long long number = 0;
    cin >> n >> m >> a;
    if (a == 1)
        number = n * m;
    else if (a >= n)
        number = ceil(m / a);
    else if (a >= m)
         number = ceil(n / a);
    else
        number = ceil(n / a) * ceil(m / a);
    cout << number;
    return 0;
}
