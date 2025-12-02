#include <iostream>
using namespace std;
int fidonacci(int n){
    if(n <= 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fidonacci(n-1) + fidonacci(n-2);
}

int main() {
    cout << "Fibonacci(5) is: " << fidonacci(5) << endl;
}