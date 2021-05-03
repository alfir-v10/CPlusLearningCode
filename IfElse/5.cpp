#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b && b==c){
        cout << 3; 
    }else{
        if (a==b && (b!=c && a!=c)){
            cout << 2;
        }
        if (a==c && (a!=b && c!=b)){
            cout << 2;
        }
        if (b==c && (b!=a && c!=a)){
            cout << 2;
        }
        if (a!=b && b!=c && a!=c){
            cout<<0;
        }
    }
  // put your code here
  return 0;
}
