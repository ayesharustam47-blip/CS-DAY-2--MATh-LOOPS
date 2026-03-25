#include<iostream>
#include<string>
using namespace std;
int main() {
	string str1, str2;
	cout << "input 1st string" << endl;
	getline(cin, str1);
	cout<< "input 2nd string" << endl;
	getline(cin, str2);
	if (str1 == str2) {
		cout << "bot strings are equal" << endl;
	}
	else {
		cout << "bot strings are not equal" << endl;
	}
	
	return 0;
}
