#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N = 0;
    cin >> N;
    
    for (int i = 0; i<N; i++)
      {
          cout << N-i << '\n';
      }
    return 0;

}
