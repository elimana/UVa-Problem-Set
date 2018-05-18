#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
  ifstream myfile ("input.txt");

  string inputstr;
  int n = 0;
  int min = 25;
  int sum = 0;
  int rows = 0;
  
  if (myfile.is_open()) {
    getline(myfile, inputstr);
    n = std::stoi( inputstr );
     rows = n;
    while ( getline(myfile, inputstr)) {
      if (n == 0) {
        sum -= min*rows;
        cout << sum << endl;
        sum = 0;
        min = 25;
        n = std::stoi( inputstr );
        rows = n;
      } else {
        //cout << "N: " << n << endl;
        int count = 0;
        for (int i = 0; i < inputstr.length(); i++) {
          if (inputstr[i] == ' ') {
            count++;
          }
          //cout << count << endl;
        }
        sum += count;
        if (count < min) {
          min = count;
        }
        n = n-1;
      }
    }
    myfile.close();
  }
  

  return 0;
}