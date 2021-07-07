#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    
    cin >> a;
    cin >> b;
    
    if(a<b)
    {
        cout << "<" << endl;
    }
    if(a>b)
    {
        cout << ">" << endl;
    }
    if(a==b)
    {
        cout << "==" << endl;
    }
}
