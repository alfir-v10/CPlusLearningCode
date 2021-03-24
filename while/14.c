#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n_0, n_1, n_2;
    int s = 0;
    int l = 0;
    int s_min = 0;

    if (cin >> n_0 && n_0 != 0) {
        if (cin >> n_1 && n_1 != 0) {
            if (cin >> n_2) {
                int pos = 2;
                while (n_2 != 0) {
                    if (n_0 < n_1 && n_1 > n_2) {
                        if (s != 0) {
                            l = pos - s;
                            if (s_min == 0) {
                                s_min = l;
                            }
                            else {
                                s_min = min(l, s_min);
                            }
                        }

                        s = pos;
                    }
                    ++pos;
                    n_0 = n_1;
                    n_1 = n_2;
                    cin >> n_2;
                }
            }
        }
    }

    cout << s_min;

    return 0;
}
