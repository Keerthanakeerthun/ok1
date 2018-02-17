#include <iostream>
using namespace std;

int main()
{
    int n,i, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        sum=sum+ i;
    }

    cout << "Sum of "<<n<<" numbers  = " << sum;
    return 0;
}
