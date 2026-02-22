//COMSC-210-5068, Lab 12, Yang Liu
#include <iostream>
#include <array>
#include <fstream>
using namespace std;

int main() {
    array<int, 30> dailySteps;
    
    ifstream stepFile("daily_steps.txt");
    
    // Read 30 elements from file into the array
    for (int i = 0; i < 30; i++) {
        stepFile >> dailySteps[i];
    }
    stepFile.close();

    // Verifying
    cout << "Step count on Day 1: " << dailySteps[0] << endl;
    return 0;
}