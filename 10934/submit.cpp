#include <iostream>
using namespace std;

//TODO: Solve using BigIntegers
int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int n, k;
        while (cin >> n >> k) {
            cout << (factorial(n+k-1)/(factorial(k-1)*factorial(n))) << endl;
        }
    return 0;
}