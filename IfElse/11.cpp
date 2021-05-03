#include <iostream>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    if (k<=m*n && ((m*n-k)%n==0 ||(m*n-k)%m==0)){
        cout << "YES";
    }else{
        cout << "NO";
    }
  return 0;
}
