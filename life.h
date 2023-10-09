#include "animals.h"
#include "continent.h"
#include <iostream>
using namespace std;

class Life
{
public:
    Life();
    ~Life();

    void add_continent(Continent *continent);
    void add_herbivore(Herbivore *herbivore);
    void add_carnivore(Carnivore *carnivore);

    void meals();
    void nutrition();

private:
    Continent **continents;
    Herbivore **herbivores;
    Carnivore **carnivores;
    int continent_count;
    int herbivore_count;
    int carnivore_count;
};

