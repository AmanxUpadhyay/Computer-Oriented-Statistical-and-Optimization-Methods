#include <bits/stdc++.h>
using namespace std;
/*
 * Author: Aman Upadhyay
 * Date: 23/02/2022
 * Email: amanupadhyay0208@gmail.com
 * GitHub: https://github.com/AmanxUpadhyay
*/
double ArithmeticMean(vector<int> Arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += Arr[i];
    }
    return sum / size;
}

double GeometricMean(vector<int> Arr, int size) {
    double product = 1;
    for (int i = 0; i < size; i++) {
        product *= Arr[i];
    }
    return pow(product, 1.0 / size);
}

double HarmonicMean(vector<int> Arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += 1.0 / Arr[i];
    }
    return size / sum;
}

double Median(vector<int> Arr, int size) {
    sort(Arr.begin(), Arr.end());
    if (size % 2 == 0) {
        return (Arr[size / 2] + Arr[size / 2 - 1]) / 2.0;
    } else {
        return Arr[size / 2];
    }
}

double Mode(vector<int> Arr, int size) {
    int max_count = 0, max_element = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (Arr[i] == Arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_element = Arr[i];
        }
    }
    return max_element;
}

void Menu() {
    cout << "\n\n";
    cout << "1. Arithmetic Mean" << endl;
    cout << "2. Geometric Mean" << endl;
    cout << "3. Harmonic Mean" << endl;
    cout << "4. Median" << endl;
    cout << "5. Mode" << endl;
    cout << "6. Exit" << endl;
}

int main() {
    int N;
    cout << "Enter the Number of Observations: ";
    cin >> N;

    cout << "Enter the Observations: ";
    vector<int> Arr(N);
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    int choice;
    do {
        Menu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Arithmetic Mean: " << ArithmeticMean(Arr, N) << endl;
                break;
            case 2:
                cout << "Geometric Mean: " << GeometricMean(Arr, N) << endl;
                break;
            case 3:
                cout << "Harmonic Mean: " << HarmonicMean(Arr, N) << endl;
                break;
            case 4:
                cout << "Median: " << Median(Arr, N) << endl;
                break;
            case 5:
                cout << "Mode: " << Mode(Arr, N) << endl;
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    } while (choice != 6);
}