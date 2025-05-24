#include <iostream>
#include <vector>
#include <cmath> // For sqrt and acos
using namespace std;

int main() {
    vector<int> D1 = {1, 1, 1, 1, 1, 0, 0};
    vector<int> D2 = {0, 0, 1, 1, 0, 1, 1};

    // Calculate dot product
    int dotProduct = 0;
    for (size_t i = 0; i < D1.size(); ++i) {
        dotProduct += D1[i] * D2[i];
    }

    // Calculate magnitudes
    double magD1 = 0, magD2 = 0;
    for (size_t i = 0; i < D1.size(); ++i) {
        magD1 += D1[i] * D1[i];
        magD2 += D2[i] * D2[i];
    }
    magD1 = sqrt(magD1);
    magD2 = sqrt(magD2);

    // Cosine similarity
    double similarity = dotProduct / (magD1 * magD2);

    // Angle in degrees
    double angleRad = acos(similarity);         // in radians
    double angleDeg = angleRad * 180.0 / M_PI;  // convert to degrees

    // Output
    cout << "Dot Product: " << dotProduct << endl;
    cout << "||D1|| = " << magD1 << ", ||D2|| = " << magD2 << endl;
    cout << "Cosine Similarity = " << similarity << endl;
    cout << "Angle (degrees) = " << angleDeg << endl;

    return 0;
}
