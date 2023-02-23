#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int q = 0;
    while(n > 0){
        for(int i = 1; i< n ; i++)
            cout << ' ';
        for(int j = 0; j <= q; j++)
            cout << '*';
        n--;
        q += 2;
        cout << endl;
    }
    return 0;
}
