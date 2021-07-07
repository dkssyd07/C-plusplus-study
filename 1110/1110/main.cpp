#include <iostream>

using namespace std;

int main(void)
{
    int A;
    int temp1, temp2, temp3;
    int count=0;
    temp3 = -1;
    cin >> A;
    temp1= A%10;
    temp2= (A/10+A%10)%10;
    while(temp3!=A){
        temp3= temp1*10+temp2;
        temp1= temp2;
        temp2= (temp3/10+temp3%10)%10;
        
        count++;
    }
    cout << count;
}
