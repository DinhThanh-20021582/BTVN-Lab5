#include <iostream>
using namespace std;
int main()
{
    int a[3];
    char b[3];
    for (int i = 0; i < 3; i++){
        cout << (void*)&a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << (void*)&b[i] << " ";
    }
    cout << endl;
    a[0] = 09;
    b[0] = 03;

    for (int i = 0; i < 3; i++){
        cout << (void*)&a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << (void*)&b[i] << " ";
    }
    
    return 0;
    // Ta thay Vi tr� c�c dia chi truoc v� sau khi nhap gi� tri cua mang giong nhau.
    // Bien dia chi co VT gan nhau
}
