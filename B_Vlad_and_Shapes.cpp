#include <iostream>
#include <vector>
#include <string>
#include <limits> // For numeric_limits

using namespace std;

vector<int> calculateFirstOneDistances(const vector<string>& matrix) {
    int n = matrix.size();
    vector<int> distances(n, -1); // Initialize distances to -1 (indicating no '1' found)

    for (int i = 0; i < n; ++i) {
        // Find the index of the first '1' in the current row
        size_t pos = matrix[i].find('1');
        if (pos != string::npos) {
            // Calculate the distance from the first index (0-based)
            distances[i] = static_cast<int>(pos);
        }
    }

    return distances;
}

int main() {
    // Example usage
    vector<string> matrix = {
        "0000",
        "0000",
        "0100",
        "1110"
    };

    // Calculate distances of the first '1' from the first index in each row
    vector<int> firstOneDistances = calculateFirstOneDistances(matrix);

    // Output the distances
    cout << "Distances of the first '1' from the first index in each row:" << endl;
    for (int i = 0; i < firstOneDistances.size(); ++i) {
        if (firstOneDistances[i] == -1) {
            cout << "Row " << i << ": No '1' found" << endl;
        } else {
            cout << "Row " << i << ": Distance = " << firstOneDistances[i] << endl;
        }
    }

    return 0;
}
