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

    cout << "--- Monthly Step Count Analysis ---" << endl;
    
    cout << "1. Total tracking days: " << dailySteps.size() << endl;
    
    cout << "2. Is step data empty? " << (dailySteps.empty() ? "Yes" : "No") << endl;
    
    cout << "3. Step count on Day 1: " << dailySteps.front() << endl;
    
    cout << "4. Step count on Day 30: " << dailySteps.back() << endl;
    
    cout << "5. Step count on Day 10: " << dailySteps.at(9) << endl;
    
    cout << "6. Step count on Day 9 (without boundary check): " << dailySteps[8] << endl;

    cout << " All daily step count: " << endl;
    for (auto it = dailySteps.begin(); it != dailySteps.end(); it++) {
        cout << "Day " << (it - dailySteps.begin() + 1) << ": " << *it << endl;
    }

    return 0;
}