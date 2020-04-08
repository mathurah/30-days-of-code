#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double tipPercent;
    double taxPercent;
    double mealCost;
    double totalCost;
    cin>>mealCost>>tipPercent>>taxPercent;
    tipPercent/=100.;
    taxPercent/=100.;
    totalCost=mealCost+(mealCost*tipPercent)+(mealCost*taxPercent);
    cout<< round(totalCost);
    return 0;
}



