#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int b;
    cin >> b;
    int num;
    for (num = a; num <= b; num++)
    {
        for (int n = 2; n < num; n++)
        {
            if (num % n == 0)
            {
                break;
                cout << num << endl;
            }

            if (num == n)
            {
                cout << num << endl;
            }
        }
        return 0;
    }
}