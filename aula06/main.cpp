#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    while (1)
    {
        int num, fat = 1;

        cout << "digite um numero: ";
        cin >> num;

        for (int i = 0; i < num; i++)
        {
            fat = fat * (i + 1);
            cout << "fat: " << fat << endl;
        }

        cout << "final: " << fat << endl;
    }

    return 0;
}
