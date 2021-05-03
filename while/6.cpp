#include <iostream>
using namespace std;
int main() {
    int i=0;
    int k;
    int accum=0;
    while (cin >> k && k != 0){
        accum += k;
        i++;
    }
    cout << accum;
  // put your code here
  return 0;
}
