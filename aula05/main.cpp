#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    while (1)
    {

        int num;
        cout << "digite um numero: ";
        cin >> num;

        switch (num)
        {
        case 9:
            cout << "numero é 9" << endl;
            break;
        case 11:
            cout << "numero é 11" << endl;
            break;
        case 15:
            cout << "numero é 15" << endl;
            break;
        default:
            cout << "digite um numero 9, 11 ou 15" << endl;
            //nao tem break para ir ate a proxima expressao entao ele volta
        }

        char type;
        cout << "digite um caracter: ";
        cin >> type;

        switch (type)
        {
        case 'q':
            cout << "a letre é um 'q'" << endl;
            break;
        case 'f':
            cout << "a letra é um 'f'" << endl;
            break;
        default:
            cout << "digite uma letrea q ou f" << endl;
            //nao tem break para ir ate a proxima expressao entao ele volta
        }
    }

    return 0;
}
