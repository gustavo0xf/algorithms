#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;

    return n * factorial(n -1);
}

int sumEvenSquares(int n) {
    if (n == 1) {
        return 0;
    } else if (n % 2 == 0) {
        return n*n + sumEvenSquares(n - 1);
    } else {
        return sumEvenSquares(n - 1);
    }
}

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {

    cout << "5! = " << factorial(5) << endl;
    cout << "2² + 4² + 6² + 8² + 10² = " << sumEvenSquares(10) << endl;
    cout << "20th fibonacci number: " << fibonacci(20) << endl;

    return 0;
}