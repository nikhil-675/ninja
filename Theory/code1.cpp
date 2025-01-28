#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numIntWalls, numExtWalls;
    double intWallArea, extWallArea;
    double totalIntCost = 0.0, totalExtCost = 0.0;

    const double intCostPerSqFt = 18.0;
    const double extCostPerSqFt = 12.0;

    cin >> numIntWalls >> numExtWalls;

    for (int i = 0; i < numIntWalls; ++i) {
        cin >> intWallArea;
        totalIntCost += intWallArea * intCostPerSqFt;
    }

    for (int i = 0; i < numExtWalls; ++i) {
        cin >> extWallArea;
        totalExtCost += extWallArea * extCostPerSqFt;
    }

    double totalCost = totalIntCost + totalExtCost;

    cout << fixed << setprecision(1);
    cout << "Total estimated Cost: " << totalCost << "\n";

    return 0;
}