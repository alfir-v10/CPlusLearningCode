#include <iostream>
using namespace std;
int main() {
    int n_0, n_1, n_2, accum;
    accum = 0;
    cin >> n_0 >> n_1;
    if (n_1 == 0) {
        cout << accum;
        return 0;
    }
    cin >> n_2;
    if (n_2 == 0) {
        cout << accum;
        return 0;
    }
    if (n_1 > n_0 && n_1 > n_2) accum += 1;
    while (n_2 != 0) {
        n_0 = n_1;
        n_1 = n_2;
        cin >> n_2;
        if (n_2 == 0) break;
        if (n_1 > n_0 && n_1 > n_2) accum += 1;
    }
    cout << accum;
  return 0;
}
