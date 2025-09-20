#include <iostream>
#include
using namespace std;

int licznik = 0;

int przestaw(int n) {
    int r = n % 100;
    int a = r / 10;
    int b = r % 10;
    n /= 100;
    int w = 0;

    if (n > 0) {
        w = a + 10 * b + 100 * przestaw(n);
    }
    else {
        if (a > 0) {
            w = a + 10 * b;
        }
        else {
            w = b;
        }
    }
    licznik++;
    return w;
}

int przestaw2(int n) {
    int w = 0;
    int m = 1;
    while (n > 0) {
        int r = n % 100;
        int a = r / 10;
        int b = r % 10;
        if (a > 0) {
            w += a * m + 10 * b * m;
        }
        else {
            w += b * m;
        }
        m *= 100;
        n /= 100;
        licznik++;
    }
    return w;
}

int main() {
    cout << przestaw2(316498) << endl;
    cout << licznik << endl;
    return 0;
}