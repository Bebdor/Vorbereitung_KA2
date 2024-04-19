#include "main.h"
using namespace std;

int main()
{
    int x;

    cout << "Welche Aufgabe mochtest du machen?";
    cin >> x;

    switch (x) {
        case 1:
            A1();
            break;

        case 2:
            A2();
            break;
        default:
            cerr << "Falsche eingabe!";

    }
    return 0;
}