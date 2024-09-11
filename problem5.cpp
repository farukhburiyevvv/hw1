#include <iostream>

using namespace std;

int main() {
    double a,b;
    cin>>a>>b;
    b = b * 30.48;
    if (a>=b) {
         cout<<"0"<<endl;
    }
    else cout<<"1"<<endl;
    return 0;
}
