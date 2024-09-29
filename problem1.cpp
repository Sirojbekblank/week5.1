#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i;
    for (i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int k = 1; k <= n-i; k++) {
            cout << "  ";

        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout<<endl;
    }
    return 0;
}
