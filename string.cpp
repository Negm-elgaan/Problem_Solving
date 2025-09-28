#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    
    string a = "" , b = "";
    
    short ca = 0 , cb = 0;
     
     cin >> a >> b;
     
    for (int i = 0 ; a[i] != '\0' ; i++)
    {
        ca++;
    }
    
    for (int i = 0 ; b[i] != '\0' ; i++)
    {
        cb++;
    }
    
    cout << ca << " " << cb << endl;
    cout << a + b << endl;
    char c = a[0];
    a[0] = b[0];
    b[0] = c;
    cout << a << " " << b;
    
    return 0;
}
