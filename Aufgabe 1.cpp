#include "main.h"

class Stadt
{

// Wir benutzen hier private, weil es besser ist die unbenutzen funktionen zu verstecken.

private:
    string name;
    [[maybe_unused]] int x,y;
    [[maybe_unused]] bool sichtbar;
public:
    Stadt(string name, int x, int y, bool sichtbar) : name(name), x(x), y(y), sichtbar(sichtbar) {}

    void setName(const string &name1) {
        name1.length() <= 14 ? name = name1 : name = name1.substr(0, 11) + "...";
    }

    string getName() {
        return name;
    }

};

void A1()
{
  Stadt stadt("Essen", 1, 2, true);
  stadt.setName("Muelheim an der Ruhr");
  cout << stadt.getName();
  cout << "test";
}