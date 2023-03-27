#include <iostream>
using namespace std;
#include "code.hpp"

int main(int argc, char** argv) {
    
    int n, m;

    cout << "Wprowadź dwie liczby całkowite, które chesz dodać: " << endl;
    cin >> n >> m;
    cout << endl;
    cout << "Suma Twoich liczb to: " << suma(n,m) << endl;
    cout << endl;
    return 0;

}