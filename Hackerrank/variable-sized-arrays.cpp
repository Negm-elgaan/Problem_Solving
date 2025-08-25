#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() 
{
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0 , q = 0;
    cin >> n >> q;
    int **dptr = new int* [n];
    
    for (int i = 0 ; i < n ; i++)
    {
        int c = 0 ;
        cin >> c;
        dptr[i] = new int[c];
        
        for (int  j = 0 ; j < c ; j++)
        {
            cin >> dptr[i][j];
        }
        
    }   
    
    for (int i = 0 ; i < q ; i++)
    {
        int f = 0  , h = 0;
        cin >> f >> h;
        cout << dptr[f][h] <<endl;
    }
    return 0;
}

