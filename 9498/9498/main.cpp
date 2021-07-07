#include <iostream>

using namespace std;

int main()
{
    int grade;
    cin >> grade;
    
    if(grade<=100&&grade>=90)
    {
        cout << "A" << endl;
    }
    if(grade<90&&grade>=80)
    {
        cout << "B" << endl;
    }
    if(grade<80&&grade>=70)
    {
        cout << "C" << endl;
    }
    if(grade<70&&grade>=60)
    {
        cout << "D" << endl;
    }
    if(grade<60&&grade>=0)
    {
        cout << "F" << endl;
    }
    
}

