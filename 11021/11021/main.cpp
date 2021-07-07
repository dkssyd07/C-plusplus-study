#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    int N = 0;
    int a = 0;
    int b = 0;
  
    cin >> N;
   
        for (int i = 1; i <=N; i++)
        {
            cin >> a;
            cin >> b;
            cout << "Case #" << i  << ": " << a+b << '\n';
          
        }
   
        
    }
    
    



