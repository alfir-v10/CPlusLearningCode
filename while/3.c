#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N,i;
    cin >> N;
    i=0;
    while (i<=N){
        if (pow(2,i)<=N){
            cout << pow(2,i);
            cout << " ";
        }
        i++;
    }
  // put your code here
  return 0;
}
