#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i=1; i < n+1; i++)
    {
        for(int k= n -i; k> 0; k--)
        {
            cout << " ";
        }
        for(int j=1; j<i+1; j++)
        {
            cout <<"*";
        }
        cout << '\n';
    }
    return 0;
}
