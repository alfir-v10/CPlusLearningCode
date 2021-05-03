#include <iostream>
using namespace std;
int main() {
    int h,m,h2,s,N;
    cin >> N;
    h = N/60/60;
    h2 = h%24;
    m = (N-h*60*60)/60;
    s = (N-h*60*60)-m*60;
    cout << h2 << ":";
    cout << m/10 << m%10 << ":";
    cout << s/10 << s%10;
    
  // put your code here
  return 0;
}
