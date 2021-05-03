#include <iostream>
using namespace std;
int main() {
    int n;
    int k = 1;
    cin >> n;
    while (k != n && k <= n) {
        k *= 2;
    }
    if (k == n) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
  return 0;
}
