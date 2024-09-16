#include <iostream>

using namespace std;
int binaryExponentiation(int a, int b) {
    int result = 1;
    while (b > 0) {
        if (b & 1) {
            result = result * a;
        }
        a = a * a;
        b >>= 1;
    }
    return result;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
