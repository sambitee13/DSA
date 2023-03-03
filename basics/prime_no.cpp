#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a no. to check prime or not \n";
    cin >> n;

    int isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "is not a prime no. \n";
    }
    else
    {
        cout << "is a prime no.";
    }
}