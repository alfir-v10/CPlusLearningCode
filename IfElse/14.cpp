#include <iostream>
using namespace std;
int main() {
    int a1, b1, c1, a2, b2, c2,d;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1 > b1) {
        d = a1;
        a1 = b1;
        b1 = d;
    }
    if (b1 > c1) {
        d = b1;
        b1 = c1;
        c1 = d;
    }
    if (a1 > b1) {
        d = b1;
        b1 = a1;
        a1 = d;
    }

    if (a2 > b2) {
        d = b2;
        b2 = a2;
        a2 = d;
    }
    if (b2 > c2) {
        d = c2;
        c2 = b2;
        b2 = d;
    }
    if (a2 > b2) {
        d = b2;
        b2 = a2;
        a2 = d;
    }

    if (a1 == a2 && b1 == b2 && c1 == c2) {
        cout << "Boxes are equal";
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2) {
        cout << "The first box is larger than the second one";
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2) {
        cout << "The first box is smaller than the second one";
    }
    else {
        cout << "Boxes are incomparable";
    }
  return 0;
}
