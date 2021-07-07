#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a;
    double b;
    
    cin >> a;
    cin >> b;
    
    if (a>0 && b<10)
    {
        cout << fixed;
        cout << setprecision(10)<< a/b << endl;
    }
    
}
