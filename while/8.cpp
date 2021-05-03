#include <iostream>
using namespace std;
int main() {
    int n, k, count = 0, i = 0;
    int accum = 0;

    while (cin >> n && n != 0) {
        if (accum < n) {
            count = 1;
            accum = n;
        }
        else if (n == accum) {
            count++;
        }
    }
    cout << count;
  // put your code here
  return 0;
}
