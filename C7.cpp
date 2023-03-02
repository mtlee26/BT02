#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int tmp = -1;
    while(true){
        if(n < 0) break;
        if(n != tmp) cout << n << ' ';
        int x; cin >> x;
        tmp = n;
        n = x;
    }
  return 0;
}
