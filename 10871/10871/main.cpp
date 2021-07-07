#include <iostream>

using namespace std;

int main()
{
    int n, a, x;
    
    cin >> n >> a;
    
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        if(a>x)
        {
            cout << x << " ";
        }
        
    }
}
