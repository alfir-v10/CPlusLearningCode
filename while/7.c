#include <iostream>
using namespace std;
int main() {
    int k;
    int accum = -1;
    while (cin >> k && k!=0){
        if (accum < k){
            accum = k;
        }
    }
    cout << accum;
  return 0;
}
