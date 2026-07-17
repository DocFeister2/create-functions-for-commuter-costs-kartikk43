#include <iostream>
using namespace std;

const double DOLLARS_PER_GALLON = 4.49;     // cost of gas per gallon
const double MILES_PER_COMMUTE = 20.5;    // miles in one round-trip commute
const double MILES_PER_GALLON = 36;       // car fuel efficiency

double myCommutes;
double myCost;

// Converts gas dollars into number of commutes
double toCommutes(double gasDollars) {
  double gasGallons;
  double gasMiles;
  double numCommutes;

  // Convert money spent on gas into gallons of gas
  gasGallons = gasDollars / DOLLARS_PER_GALLON;

  // Converts gallons into the total # of miles the car can drive
  gasMiles = gasGallons * MILES_PER_GALLON;

  // Converts miles into # of communtes by dividing by miles / commute
  numCommutes = gasMiles / MILES_PER_COMMUTE;
  return numCommutes;
}

// TODO!
// Converts number of commutes into gas cost
double toDollars(double commutes) {
  double totalMiles;
  double gasGallons;
  double totalCost;


// Calculates total miles traveled for the given # of commutes
totalMiles = commutes * MILES_PER_COMMUTE;

// Converts miles into gallons of gas needed
gasGallons = totalMiles / MILES_PER_GALLON;

// Calculates the total cost of gas
totalCost = gasGallons * DOLLARS_PER_GALLON;
return totalCost;
}

int main() {

  cout << "$20 will buy you: " << toCommutes(20) << " commutes." << endl;
  cout << "$100.50 will buy you: " << toCommutes(100.50) << " commutes." << endl;
  cout << "$500 will buy you: " << toCommutes(500) << " commutes." << endl;
  cout << "$8000 will buy you: " << toCommutes(8000) << " commutes." << endl;

  cout << "Enter the number of commutes you'd like to do:" << endl;
  cin >> myCommutes;

  myCost = toDollars(myCommutes);

  cout << "Great idea! Let's drive! ";
  cout << myCommutes << " commutes will cost you $" << myCost << endl;

  cout << "All done!" << endl;
}
