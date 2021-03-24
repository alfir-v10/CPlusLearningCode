#include <iostream>
using namespace std;
int main() {
    int s = 109;
    int V, T;
    cin >> V >> T;
    cout << (109+V*T%s)%109;
    return 0;
}
