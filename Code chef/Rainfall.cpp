#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
	    int x;
	    cin>>x;
	    if(x<3){
	        cout<<"LIGHT\n";
	    }else if(x<7 && x>=3){
	        cout<<"MODERATE\n";
	    }else if(x>=7){
	        cout<<"HEAVY\n";
	    } }
    return 0;
}
