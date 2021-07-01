#include <iostream>

using namespace std;



int num_global = 10;

void foo(){
  int num = 10;
  static int num_static = 1;
  cout << "variable local " << num << endl;
  cout << "variable global "<< num_global << endl;
  cout << "num_static: " << num_static << endl;
  num_static++;
  cout << "num_static++ é: " << num_static << endl;
  cout << "/******************************************/" << endl;
}

int main(){


  foo();
  foo();
  foo();

  return 0;


}


