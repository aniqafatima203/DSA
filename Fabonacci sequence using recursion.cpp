#include<iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1)
        return n;
    else
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Fibonacci sequence up to " << num << " is: ";
    for (int i = 0; i <= num; i++) {
    cout << fibo(i) << " ";
    }

    return 0;
}
