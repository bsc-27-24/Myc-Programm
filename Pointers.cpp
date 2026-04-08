#include <iostream>
using namespace std;

int main (){
int firstValue;
int secondValue;

int * pPointer = nullptr;

//assign pointer with the address of firstvalue
pPointer = &firstValue;
*pPointer = 10; // indirection

// assign pointer with the address of secondvalue
pPointer = &secondValue;
*pPointer = 20; // Indirection

cout << "firstvalue is " << firstValue << '\n';
cout << "secondvalue is " << secondValue << '\n';

return 0;
}