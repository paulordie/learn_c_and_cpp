//#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int test = 0;
    char c1 = 'a';
    char c2 = 'b';
    int soma = c1 + c2;
    int subt = c1 - c2;
    int mult = c1 * c2;
    int div  = c1 / c2;
    int rest = c1 / c2;

    cout << "soma: " << soma << " char: " << (char)soma << endl;
    cout << "test: " << test << endl;

    cout << "subt: " << subt
	    << "\nmult: " << mult 
	    << "\ndiv: " << div
	    << "\nrest: " << rest << endl;

    int a, b, r;
    a = 20, b = 10;
    r = a + b;
    cout << "Resultado: " << r << endl;
    cout << "test vscode!" << endl;
    std::cout << "Another instance" << std::endl;

    return 0;
}
