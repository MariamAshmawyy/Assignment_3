#include <iostream>
using namespace std;

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "The sum is: " << sum(num1, num2) << endl;
    return 0;
}
