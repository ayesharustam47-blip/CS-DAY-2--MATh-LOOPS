//fibonacci series
#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0, b = 1, temp;
    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";  // Fixed the typo here
        temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}
