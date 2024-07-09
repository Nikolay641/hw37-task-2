#include "Ingredient.h"
#include <queue>

int main()
{
    priority_queue<Ingredient> MultiKitchen;
    string name;
    int choice = 0, cookingTime = 0;
    while (true)
    {
        cout << "What do you want?:\n1.Add ingredient.\n2.Cook a dish.\n";
        cin >> choice;
        if (choice == 1) {
            cout << "Input ingredient(name, time): "; cin >> name >> cookingTime;
            MultiKitchen.push(Ingredient(name, cookingTime));
        }
        else if (choice == 2) {
            while (!MultiKitchen.empty()) {
                cout << MultiKitchen.top().getName() << " cooked\n";
                MultiKitchen.pop();
            }
            return false;
        }
    }
}