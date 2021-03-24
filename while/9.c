#include <iostream>
using namespace std;
int main() {
    int k,accum, count;
    accum = 0;
    count = 0;
    while (cin >> k && k!=0){
          if (accum <= k){
              count = accum;
              accum = k;
          }
          else if(count < k){
              count = k;
          }
    }
    cout << count;
  return 0;
}
