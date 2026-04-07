#include <iostream>
using namespace std;
int main() {
int rows, cols;

do {
cout << "Enter rows (1-3): ";
cin >> rows;
cout << "Enter columns (1-3): ";
cin >> cols;

if (rows > 3 || cols > 3 || rows < 1 || cols < 1)
cout << "Dimensions must be between 1 and 3. Try again.\n";
} while (rows > 3 || cols > 3 || rows < 1 || cols < 1);
double** arr = new double*[rows];

for (int i = 0; i < rows; ++i)
arr[i] = new double[cols];
cout << "\nEnter values:\n";

for (int i = 0; i < rows; ++i)
for (int j = 0; j < cols; ++j) {
cout << "arr[" << i << "][" << j << "]: ";
cin >> arr[i][j];
}
cout << "\nArray contents:\n";

for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j)
cout << arr[i][j] << " ";
cout << endl;

}
for (int i = 0; i < rows; ++i)
delete[] arr[i];

delete[] arr;

return 0;
}