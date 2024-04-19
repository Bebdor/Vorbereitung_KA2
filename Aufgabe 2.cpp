#include "main.h"
#include <cstdlib>
#include <utility>

class StadtA2
{
private:
    string name;
    int x = rand()%501;
    int y = rand()%501;
    bool sichtbarkeit = rand() % 2 == 0;
public:
    [[maybe_unused]] explicit StadtA2(string name) : name(std::move(name)) {}

    string ausgabe()
    {
        return "name: " + name + "\nx: " + to_string(x) + "\ny: " + to_string(y) + "\nsichtbarkeit: " + (sichtbarkeit ? "sichtbar" : "unsichtbar");
    };

};


void A2()
{
    StadtA2 stadtA2("Muelheim an der Ruhr");
    StadtA2 essen("essen");
    cout << stadtA2.ausgabe();
    cout << essen.ausgabe();

}