#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n, m, x, y, left, right;
    cin >> n >> m >> x >> y;
    if (n > m) {
        left = min(abs(n - y), y);
        right = min(abs(m - x), x);
    }
    else {
        left = min(abs(m - y), y);
        right = min(abs(n - x), x);
    }

    if (left < right) {
        cout << left;
    }
    else {
        cout << right;
    }

  // put your code here
  return 0;
}
