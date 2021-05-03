#include <iostream>
using namespace std;
int main() {
    int i,n_1, n_2, N, n_3;
    cin >> N;
    n_1 = 0;
    i = 0;
    n_2 = 1;
    while (i < N){
        n_3 = n_1+n_2;
        n_2 = n_1;
        n_1 = n_3;
        i++;
    }
    cout << n_3;
  // put your code here
  return 0;
}
