#include <iostream>
#include <algorithm>
using namespace std;

struct coord {
    int x;
    int y;
    int s;
};

int main() {
    int scenarios, d, n, sum;
    coord result;

    cin >> scenarios;
    for (int s = 0; s < scenarios; s++) {
        result.s = 0;
        cin >> d >> n;
        
        coord pop[20000];
        for (int i = 0; i < n; i++) {
            cin >> pop[i].x >> pop[i].y >> pop[i].s;
        }

        for (int i = 0; i < 1025; i++) {
            for (int j = 0; j < 1025; j++) {
                sum = 0;
                for (int k = 0; k < n; k++) {
                    if (max(abs(pop[k].x-i), abs(pop[k].y-j)) <= d) {
                        sum += pop[k].s;
                    }
                }
                if (sum > result.s) {
                    result.x = i;
                    result.y = j;
                    result.s = sum;
                }
            }
        }
        cout << result.x << " " << result.y << " " << result.s << endl;
    }
}