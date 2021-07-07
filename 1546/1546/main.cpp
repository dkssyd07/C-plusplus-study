#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_num = -1;
    int num;
    double avg_num = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (max_num < num)
        max_num = num;
        avg_num += num;
    }
    avg_num = ((avg_num / max_num) / n) * 100;

    cout.precision(6);
    cout << fixed;
    cout << avg_num << endl;

    return 0;
}
