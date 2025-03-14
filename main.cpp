#include <iostream>
using namespace std;

int main() {
    int x = 100, y = 130, z;

    int *ptrX, *ptrY;

    cout << "Nilai x = " << x << ", y = " << y << endl;

    cout << "Alamat x = " << &x << ", y = " << &y << endl;

    ptrX = &x;

    cout << "Isi ptrX = " << ptrX << " (alamat x), Nilai yg ditunjuk ptrX = " << *ptrX << endl;

    ptrY = &y;

    cout << "Isi ptrY = " << ptrY << " (alamat y), Nilai yg ditunjuk ptrY = " << *ptrY << endl;

    z = *ptrX;

    cout << "Nilai z = " << z << " Sama dengan nilai x (" << x << ")" << endl;

    *ptrY = 70;

    cout << "Isi ptrY = " << ptrY << " (tetap), nilai y = " << y << " (yg berubah)" << endl;

    *ptrX = *ptrY + 5;

    cout << "Isi ptrX = " << ptrX << " (tetap), nilai x = " << x << " (yg berubah)" << endl;

    ptrX = ptrY;
    cout << "Isi ptrX = " << ptrX << " dan ptrY = " << ptrY << endl;

    cout << "Nilai yang ditunjuk ptrX = " << *ptrX << " dan ptrY = " << *ptrY << endl;

    cout << endl;
    return 0;
}