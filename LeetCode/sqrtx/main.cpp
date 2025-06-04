#include <iostream>

using namespace std;

class Solution
{
    public:
        int mySqrt(int x)
        {
            if (x == 0)
                return 0;

            if (x == 1 || x == 2 ||x == 3)
                return 1;

            long long y = 2;

            while(y * y < x)
            {
                y++;
            }

            if (x < y * y)
                return y - 1;

            return y;
        }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
