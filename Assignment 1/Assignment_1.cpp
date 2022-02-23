#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void loadingBar() {
    cout << "Loading...";
    for (int i = 0; i < 5; i++) {
        printf(" ...");
        Sleep(500);
    }
}

void printTable(vector<int> Table, int n) {
    int sum = 0;
    loadingBar();
    cout << "\n\nFrequency Table: " << endl;

    cout << "----------------------------\n";
    cout << "|  " << "Interval" << "  |  " << "Frequency" << "  |" << endl;
    cout << "----------------------------\n";
    for (int i = 0; i < n - 1; i++) {
        sum += Table[i];
        cout << "|  " << (i + 2) * 10 << "-" << (i + 3) * 10 << "     |      " << Table[i] << "      |" << endl;
    }
    cout << "----------------------------\n";
    cout << "|    " << "Total" << "   |      " << sum << "     |" << endl;
    cout << "----------------------------\n";
}

void FrequencyDistribution(vector<int> Arr, int size) {
    sort(Arr.begin(), Arr.end());
    int HighestMark = Arr[size - 1];
    int LowestMark = Arr[0];

    vector<int> Range(8, 0);
    for (int i = 0; i < size; i++) {
        if (Arr[i] >= 20 && Arr[i] <= 30) {
            Range[0]++;
        }
        else if (Arr[i] >= 30 && Arr[i] <= 40) {
            Range[1]++;
        }
        else if (Arr[i] >= 40 && Arr[i] <= 50) {
            Range[2]++;
        }
        else if (Arr[i] >= 50 && Arr[i] <= 60) {
            Range[3]++;
        }
        else if (Arr[i] >= 60 && Arr[i] <= 70) {
            Range[4]++;
        }
        else if (Arr[i] >= 70 && Arr[i] <= 80) {
            Range[5]++;
        }
        else if (Arr[i] >= 80 && Arr[i] <= 90) {
            Range[6]++;
        }
        else if (Arr[i] >= 90 && Arr[i] <= 100) {
            Range[7]++;
        }
    }
    printTable(Range, 8);
}

void Info(vector<int> Arr, int size) {
    cout << "\n\nFor the Given Marks of 40 Students: " << endl;
    cout << "{";
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << ", ";
    }
    cout << "}" << endl;
    cout << "\n\nFinding Highest and Lowest Marks: " << endl;
    sort(Arr.begin(), Arr.end());
    cout << "{ ";
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << ", ";
    }
    cout << "}" << endl;

    cout << "\n\nHighest Mark: " << Arr[size - 1] << endl;
    cout << "Lowest Mark: " << Arr[0] << endl;
    cout << "Interval: 10" << endl;
}

int main() {
    system("cls");
    cout << "\n\nAuthor: Aman Upadhyay\n";
    vector<int> Marks;
    Marks = { 25, 80, 83, 39, 65, 69, 64, 73, 37, 62, 53, 62, 73, 55, 77, 78, 52, 54, 62, 75, 85, 57, 56, 53, 50, 84, 39, 42, 79, 48, 49, 29, 45, 34, 68, 73, 32, 89, 78, 21 };
    int n = Marks.size();
    loadingBar();
    Info(Marks, n);
    FrequencyDistribution(Marks, n);

    cout << "Thanks for using this program.\n\n";
}