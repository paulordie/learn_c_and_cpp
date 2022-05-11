//#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int test = 0;
    char c1 = 'a';
    char c2 = 'b';
    char c3 = '\'';
    cout << "c1: " << (int)c1
	    << "\nc2: " << (int)c2
	    << "\naspas simples: " << c3 << endl;
    
    int soma = c1 + c2;
    int subt = c1 - c2;
    int mult = c1 * c2;
    
    float div  = (float)c1 / c2;
    float rest = c1 % c2;
    
    int incre = 10;
    int incre1 = 10;
    int n = 10;
    n /= 5;
    
    cout << "incre++: " << incre++ << endl; // will incremente after show
    cout << "++incre1: " << ++incre1 << endl;// will increment before and show
    cout << "incre after: " << incre << endl;
    cout << "incre/2: " << incre / 2 << endl;
    cout << "action after to n/=5: " << n << endl;
    cout << "soma: " << soma << " char: " << (char)soma << endl;
    cout << "test: " << test << endl;

    cout << "subt: " << subt
	    << "\nmult: " << mult 
	    << "\ndiv: " << div
	    << "\nrest: " << rest << endl;
    
    int num_1 = 10, num_2 = -10;
    int res_1 = -num_1, res_2 = -num_2;

    cout << "res_1: " << res_1 
	    << "\nres_2: " << res_2 << endl;
    
    int a, b, r;
    a = 20, b = 10;
    r = a + b;
    
    cout << "Resultado: " << r << endl;
    cout << "test vscode!" << endl;
    std::cout << "Another instance" << std::endl;

    return 0;
}
