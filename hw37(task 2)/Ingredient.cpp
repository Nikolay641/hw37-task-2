#include "Ingredient.h"

Ingredient::Ingredient()
{
    name = "undefined";
    cookingTime = 0;
}

Ingredient::Ingredient(string name, int cookingTime)
{
    this->name = name;
    this->cookingTime = cookingTime;
}

void Ingredient::setName(string name){ this->name = name; }

void Ingredient::setCookingTime(int cookingTime){ this->cookingTime = cookingTime; }

string Ingredient::getName() const{ return name; }

int Ingredient::getCookingTime() const{ return cookingTime; }

void Ingredient::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Cooking time: " << cookingTime << endl;
}

bool Ingredient::operator<(const Ingredient& obj) const&
{
    return this->cookingTime < obj.cookingTime;
}
