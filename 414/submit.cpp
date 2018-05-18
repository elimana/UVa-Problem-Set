#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, min, sum, rows, count;
    string inputstr;
    //cout << "testdffdgfdbdbhfd" << endl;
    while ((cin >> n) && n != 0)
    {
        min = 25;
        sum = 0;
        rows = n;
        getline(cin,inputstr);
        for (int i = 0; i < n; i++) {
            
            getline(cin, inputstr);
            count = 0;
            for (int j = 0; j < inputstr.length(); j++)
            {
                if (inputstr[j] == ' ')
                {
                    count++;
                }
            }
            //cout << "c: " << count << endl;
            //cout << "line: " << inputstr << "|" << endl;
            sum += count;
            if (count < min)
            {
                min = count;
            }
        }
        sum -= min * rows;
        cout << sum << endl;
    }
    return 0;
}