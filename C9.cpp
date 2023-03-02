#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    long long min_x = 1e6;
    long long min_y = 1e6;
    for(int i = 0; i < n; i++){
        long long x, y;
        cin >> x >> y;
        if(x < min_x) min_x = x;
        if(y < min_y) min_y = y;
    }
    cout << min_x * min_y;
}
