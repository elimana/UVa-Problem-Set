#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i, j, n, count, maxC;
    while ((cin >> i) && (cin >> j)) {
        maxC = 0;
        for(int k = min(i,j); k <= max(i,j); k++)
        {
            n = k;
            count = 1;
            while (n != 1) {
                if (n%2 != 0) {
                    n = 3*n + 1;
                } 
                else
                {
                    n = n/2;
                }
                count++ ;   
            }  
            if (count > maxC) {
                maxC = count;
            }    
        }
        cout << i << " " << j << " " << maxC << endl;
    }
    return 0;
}