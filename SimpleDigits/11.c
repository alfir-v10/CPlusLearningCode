#include <iostream>
using namespace std; 
int main() {
    int N,a,b, c, d;
    cin >> N;
    a = N / 1000;
    b = N / 100 % 10;
    c = N / 10 % 10;
    d = N % 10;
    cout << (a-d)*(a-d)+(b-c)*(b-c) + 1; 
  return 0;
}
