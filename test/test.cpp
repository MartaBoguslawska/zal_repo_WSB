#include "../src/code.hpp"

#include <iostream>
using namespace std;

int main() { 

  int n = 2, m = 4;

  if (suma(n, m) != 6){
    cout << "FAILURE" << endl;
    return 1;
  }
  else{
    cout << "OK" << endl;
    return 0;
  }
}
