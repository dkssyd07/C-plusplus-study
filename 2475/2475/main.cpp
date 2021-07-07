#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int prove;
    
    cin >> a >> b >> c>> d>> e;
    
    prove= (a*a+b*b+c*c+d*d+e*e)%10;
    
    cout << prove;
}
