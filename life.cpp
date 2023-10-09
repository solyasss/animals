#include "life.h"
#include <iostream>
using namespace std;

Life::Life() : continents(nullptr), herbivores(nullptr), carnivores(nullptr), continent_count(0), herbivore_count(0), carnivore_count(0) {}

Life::~Life()
{
    for (int i = 0; i < continent_count; ++i)
    {
        delete continents[i];
    }
    delete[] continents;

    for (int i = 0; i < herbivore_count; ++i)
    {
        delete herbivores[i];
    }
    delete[] herbivores;

    for (int i = 0; i < carnivore_count; ++i)
    {
        delete carnivores[i];
    }
    delete[] carnivores;
}

void Life::add_continent(Continent *continent)
{
    Continent **new_continents = new Continent *[continent_count + 1];
    for (int i = 0; i < continent_count; ++i)
    {
        new_continents[i] = continents[i];
    }
    new_continents[continent_count] = continent;
    delete[] continents;
    continents = new_continents;
    continent_count++;
}

void Life::add_herbivore(Herbivore *herbivore)
{
    Herbivore **new_herbivores = new Herbivore *[herbivore_count + 1];
    for (int i = 0; i < herbivore_count; ++i)
    {
        new_herbivores[i] = herbivores[i];
    }
    new_herbivores[herbivore_count] = herbivore;
    delete[] herbivores;
    herbivores = new_herbivores;
    herbivore_count++;
}

void Life::add_carnivore(Carnivore *carnivore)
{
    Carnivore **new_carnivores = new Carnivore *[carnivore_count + 1];
    for (int i = 0; i < carnivore_count; ++i)
    {
        new_carnivores[i] = carnivores[i];
    }
    new_carnivores[carnivore_count] = carnivore;
    delete[] carnivores;
    carnivores = new_carnivores;
    carnivore_count++;
}

void Life::meals()
{
    for (int i = 0; i < herbivore_count; ++i)
    {
        herbivores[i]->eat_plant();
    }
}

void Life::nutrition()
{
    for (int i = 0; i < carnivore_count; ++i)
    {
        for (int j = 0; j < herbivore_count; ++j)
        {
            carnivores[i]->eat(herbivores[j]);
        }
    }
}
