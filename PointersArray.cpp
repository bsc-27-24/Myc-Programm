#include <iostream>
using namespace std;

int main() {
int numbersArray[5];
int *pPointer = nullptr;

// assign the address of the first element to the pointer
pPointer = numbersArray;
*pPointer = 10; // assign a value to the first element

// increment the pointer to point to the second element
pPointer++;
*pPointer = 20; // assign a value to the second element

// assign the address of the third element to the pointer
pPointer = &numbersArray[2];
*pPointer = 30; // assign a value to the third element

// assign the address of the fourth element using pointer arithmetic
pPointer = numbersArray + 3;
*pPointer = 40; // assign a value to the fourth element

// reset pointer to the first element
pPointer = numbersArray;

// assign a value to the fifth element using pointer arithmetic
*(pPointer + 4) = 50;

// iterate and output all elements in the array
for (int n = 0; n < 5; n++) {
cout << numbersArray[n] << ", ";
}
return 0;
}