#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    register double arr[6] = {4.00 , 4.50 , 5.00 , 2.00 , 1.50};
    register int x = 0;
    register double y = 0;
    cin >> x >> y;
    cout << fixed << setprecision(2) << "Total: R " << double(arr[x - 1] * y) ;
    return 0;
}
