#include <iostream>

using namespace std;

int main()
{
    int userinput, a, b;
    int p = 1000;
    int result[p];
    cin >> userinput;
    
    for (int i = 0; i < userinput; i++)
    {
        cin >> a;
        cin >> b;
        int sum = a+b;
        result[i] = sum;
    }
    for ( int i = 0; i < userinput; i++)
    {
        cout << result[i] << endl;
    }
}
