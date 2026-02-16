// check number is palindrome or not

#include <iostream>
using namespace std;

int main() {
    int n;
    int rev = 0;
    cout << "Enter number: ";
    cin >> n;

    int temp = n;  // Save original number

    while (n != 0) {
        rev = rev * 10 + n % 10;  // Reverse the number
        n = n / 10;
    }

    if (temp == rev)
        cout << "Palindrome";
    else
        cout << "Not palindrome";

    return 0;
}
