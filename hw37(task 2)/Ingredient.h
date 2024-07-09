#pragma once
#include <iostream>
#include <string>
using namespace std;

class Ingredient{
	string name;
	int cookingTime;
public:
	Ingredient();
	Ingredient(string name, int cookingTime);

	void setName(string name);
	void setCookingTime(int cookingTime);

	string getName()const;
	int getCookingTime()const;

	void showInfo()const;
	bool operator<(const Ingredient& obj)const&;
};

