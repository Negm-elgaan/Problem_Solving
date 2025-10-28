// You don't need to add/edit anything to the below solution. 
// Click on the SUBMIT button to solve your first 
#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(int k=1; k<=n; k++){
        cin>>i>>j;
        if(i>j){
            cout<<i<<endl;
        }else{
            cout<<j<<endl;
        }
        }
    return 0;
}
