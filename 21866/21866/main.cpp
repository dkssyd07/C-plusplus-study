#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    int total = a+b+c+d+e+f+g+h+i;
    
    if(total % 5 == 0)
    {
        if(total >= 100)
            cout << "draw";
        if(total < 100)
            cout << "none";
    }
    else
        cout << "hacker";
 
    
}


