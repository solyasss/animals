#include <iostream>
#include <string>
using namespace std;

class Continent
{
public:
    Continent(const string &name);
    virtual ~Continent();

    virtual void Regions() const = 0;

protected:
    string name;
};

class Africa : public Continent
{
public:
    Africa(const string &name);
    virtual ~Africa();

    virtual void Regions() const;
};

class NorthAmerica : public Continent
{
public:
    NorthAmerica(const string &name);
    virtual ~NorthAmerica();

    virtual void Regions() const;
};

