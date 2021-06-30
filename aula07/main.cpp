#include <iostream>

using namespace std;

bool valorPar(int num)
{
    if (num % 2 == 0)
        return true;
    return false;
}

void mensagem()
{
    cout << "verifique a mensagem!" << endl;
}

int soma(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (valorPar(num))
        cout << "o valor é par" << endl;
    else
        cout << "o numero é impar" << endl;
    mensagem();
    cout << "soma é " << soma(3, 100) << endl;
    return 0;
}
