#include <iostream>
using namespace std;
int main() {
    int k, l,s,d;
    l=1;
    s=0;
    d = 1;
    while(cin >> k && k!=0){
        if (k == s){
            l++;
            if (d<=l){
                d = l;
            }  
        }
        else{
                l = 1;
                s = k;
        }
        
    }
    cout << d;
  return 0;
}
