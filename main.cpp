#include "animals.h"
#include "continent.h"
#include "Life.h"
#include "wildebeest.h"
#include "bison.h"
#include "lion.h"
#include "wolf.h"
#include <iostream>

using namespace std;

int main()
{
    Africa africa("Africa");
    NorthAmerica north_america("North America");

    Wildebeest wildebeest(100);
    Bison bison(200);          
    Lion lion(150);    
    Wolf wolf(120); 

    Life world;
    world.add_continent(&africa);
    world.add_continent(&north_america);
    world.add_herbivore(&wildebeest);
    world.add_herbivore(&bison);
    world.add_carnivore(&lion);
    world.add_carnivore(&wolf);

    world.meals();
    world.nutrition();

    return 0;
}
