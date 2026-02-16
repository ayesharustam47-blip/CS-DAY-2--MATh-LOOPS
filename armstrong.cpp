//check number is armstrong or not

#include <iostream>
using namespace std;

int main() {
    int n, digit;
    int sum = 0;
    cout << "Enter number: ";
    cin >> n;

    int temp = n;  // Store original number

    while (n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;  // Cube of each digit
        n = n / 10;
    }

    if (sum == temp)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}
