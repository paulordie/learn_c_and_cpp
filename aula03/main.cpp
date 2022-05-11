#include <iostream>

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;

    cout << "num1: " << num1 << " num2: " << num2 << endl;

    int num3 = num1++;
    int num4 = ++num2;
    cout << "after" << endl;
    cout << "num1: " << num1 << " num2: " << num2 << endl;

    cout << "num3 of num1++: " << num3 << " num4 of ++num2: " << num4 << endl;

    char word = 'a';
    char word2 = 'z';
    char aspa = '\'';

    cout << "word: " << word << " ASCII: " << (int)word << endl;
    cout << "word2 " << word2 << " ASCII: " << (int)word2 << endl;
    cout << "aspa ASCII: " << (int)aspa << endl;
    cout << "addiction: word+word2 = " << (int)word + (int)word2 << endl;
    cout << "aspa: " << aspa << endl;
    
    return 0;
}