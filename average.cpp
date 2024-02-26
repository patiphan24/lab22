#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

double calculateAverage(const vector<double>& numbers) {
    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please input numbers to find average." << endl;
        return 0;
    }

    vector<double> numbers;
    for (int i = 1; i < argc; ++i) {
        stringstream ss(argv[i]);
        double num;
        if (ss >> num) {
            numbers.push_back(num);
        }
    }

    double average = calculateAverage(numbers);

    cout << "---------------------------------" << endl;
    cout << "Average of " << numbers.size() << " numbers = " << average << endl;
    cout << "---------------------------------" << endl;

    return 0;
}
