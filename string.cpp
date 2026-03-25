#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cout << "input the string:";
	getline(cin, str);
	int str_length = str.length();
	cout << "length of the string" << str_length;
	return 0;


}
