#include <iostream>
using namespace std;


int main() {
    int numPass;
    double distance;
    double fuelEff;
    double gasPrice;
    float mealCost; // per person meal cost

    double fuelUsed;
    double fuelCost;
    double mealTotal; // all meals together
    double totalCost; // grand total everyone together
    double costPerPerson; // for each person

    cout << "How many passengers are there? ";
    cin >> numPass;
    cout << "How far is the trip? (km): ";
    cin >> distance;
    cout << "Enter the car's effiency (L/100km): ";
    cin >> fuelEff;
    cout << "Enter the gas price: $";
    cin >> gasPrice;
    cout << "How much for each person meal? $";
    cin >> mealCost;

    // calculate the fuel used during the road trip
    fuelUsed = (distance / 100) * fuelEff;
    fuelCost = fuelUsed * gasPrice;

    // TODO - Calculate cost of fuel per person... maybe

    // calculate the total meal cost
    mealTotal = mealCost * numPass;

    // calculate the total for everyone.
    totalCost = mealTotal + fuelCost;
    // per person
    costPerPerson = totalCost / numPass;

    cout << "=================================================================" << endl;
    cout << "Number of Passenger: " << numPass << endl;
    cout << "Distance travelled : " << distance << " km " << endl;
    cout << "Car Efficiency : " << fuelEff << " L/100km" << endl;
    cout << "Fuel Used: " << fuelUsed << "L" << endl;
    cout << "Cost of Fuel: $" << fuelCost << endl;
    cout << "Cost of fuel per person: $" << fuelCost/numPass << endl;
    cout << "Meal cost person and group: $" << mealCost << " and $" << mealTotal << endl;
    cout << "=================================================================" << endl;
    cout << "Grand Total: $" << totalCost << endl;
    cout << "Total cost per person: $" << costPerPerson << endl;
    cout << "Thank you for the road trip! E-transfer the money to michael.allan@rdcrs.ca" << endl;



    return 0;
}