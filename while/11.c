#include <iostream>
using namespace std;
int main() {
    int i, n_1, n_2, n_3, N;
    cin >> N;
    i = 0;
    n_1 = 0;
    n_2 = 1;
    while(n_3 < N){
        ++i;
        n_3 = n_1+n_2;
        n_2 = n_1;
        n_1 = n_3;
        
    }
    if (n_3 == N){
        cout << i;
    }else{
        cout << -1;
    }
    
  // put your code here
  return 0;
}
