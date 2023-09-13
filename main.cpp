#include <iostream>
#include <string>
using namespace std;

int YourVar(string name, int var)
{
    return name.length() % var + 1;
}

int main()
{
    string surname;
    int var;
    cout << "Enter surname and number of options\n"; 
    cin >> surname;
    cin >> var;
    cout << YourVar(surname, var);
}