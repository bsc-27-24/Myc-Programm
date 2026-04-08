#include <iostream>
#include <string>
using namespace std;

int main() {
int* dynInt = new int;

string* dynStr = new string;
cout << "Enter an integer: ";
cin >> *dynInt;

cin.ignore();
cout << "Enter a string: ";

getline(cin, *dynStr);
cout << "\nDynamically allocated integer: " << *dynInt << endl;
cout << "Dynamically allocated string: " << *dynStr << endl;

delete dynInt;
delete dynStr;

return 0;
}