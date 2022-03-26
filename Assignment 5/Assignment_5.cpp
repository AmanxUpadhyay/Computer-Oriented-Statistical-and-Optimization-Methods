#include <bits/stdc++.h>
using namespace std;
/*
 * Author: Aman Upadhyay
 * Date: 07/03/2022
 * Email: amanupadhyay0208@gmail.com
 * GitHub: https://github.com/AmanxUpadhyay
*/

/*
    * Prototype: Mean Deviation about the Mean
*/
int FindSum(vector<int> Arr, int n);
int FindRange(vector<int> Arr, int n);
int FindMean(vector<int> Arr, int n);
int FindAbsoluteDeviation(vector<int> Arr, int n);
double FindMeanDeviation(int AbsoluteDeviation, int n);
/*
    * Prototype: Mean Deviation about the Mean
*/
int FindMedian(vector<int> Arr, int n);
int FindMedianAbsoluteDeviation(vector<int> Arr, int n);
/*
    * Prototype: Standard Deviation
*/
double FindStandardDeviation(vector<int> Arr, int n);

/*
    * Prototype: Quartile deviation
*/
double FindQuartileDeviation(vector<int> Arr, int n);

/*
    * Prototype: Coefficient of Variation
*/
double FindCoefficientOfVariation(vector<int> Arr, int n);

/*
    * Driver Code
*/
int main() {
    system("cls");
    cout << "<>--------------------------------------------<>" << endl;
    int n; vector<int> Observation;
    cout << "Enter the number of observations: ";
    cin >> n;
    cout << "\n-------<>--------" << endl;

    cout << "Enter the observations: ";
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        Observation.push_back(x);
    }

    cout << "-------<>--------" << endl;
    int Range = FindRange(Observation, n);
    int Mean = FindMean(Observation, n);
    int AbsoluteDeviation = FindAbsoluteDeviation(Observation, n);
    double MeanDeviation = FindMeanDeviation(AbsoluteDeviation, n);
    int Median = FindMedian(Observation, n);
    int MedianAbsoluteDeviation = FindMedianAbsoluteDeviation(Observation, n);
    double MedianDeviation = FindMeanDeviation(MedianAbsoluteDeviation, n);
    double StandardDeviation = FindStandardDeviation(Observation, n);
    double QuartileDeviation = FindQuartileDeviation(Observation, n);
    double CoefficientOfVariation = FindCoefficientOfVariation(Observation, n);

    cout << "\n<> - Range: " << Range << endl;
    cout << "<> - Mean: " << Mean << endl;
    cout << "<> - Mean Deviation about mean: " << MeanDeviation << endl;
    cout << "<> - Median: " << Median << endl;
    cout << "<> - Median Deviation about median: " << fixed << setprecision(2) << MedianDeviation << endl;
    cout << "<> - Standard Deviation: " << fixed << setprecision(2) << StandardDeviation << endl;
    cout << "<> - Quartile Deviation: " << fixed << setprecision(2) << QuartileDeviation << endl;
    cout << "<> - Coefficient of Variation: " << fixed << setprecision(2) << CoefficientOfVariation << endl;

    cout << "<>--------------------------------------------<>" << endl;
    cout << "Author: Aman Upadhyay\nEmail: amanupadhyay0208@gmail.com\n" << endl;

    return 0;
}

/*
    * Functions Mean Deviation about the Mean
*/
int FindSum(vector<int> Arr, int n) {
    int sum = 0;
    for (int i : Arr) {
        sum += i;
    }
    return sum;
}

int FindRange(vector<int> Arr, int n) {
    sort(Arr.begin(), Arr.end());
    int Range = Arr[n - 1] - Arr[0];
    return Range;
}

int FindMean(vector<int> Arr, int n) {
    int Sum = 0;
    for (int i : Arr) {
        Sum += i;
    }
    int Mean = Sum / n;
    return Mean;
}

int FindAbsoluteDeviation(vector<int> Arr, int n) {
    vector<int> AbsoluteDeviation;
    int Mean = FindMean(Arr, n);
    for (int i : Arr) {
        AbsoluteDeviation.push_back(abs(i - Mean));
    }
    int sum = FindSum(AbsoluteDeviation, n);
    return sum;
}

double FindMeanDeviation(int AbsoluteDeviation, int n) {
    double MeanDeviation = (double)AbsoluteDeviation / n;
    return MeanDeviation;
}

/*
    * Functions Mean Deviation about the Median
*/
int FindMedian(vector<int> Arr, int n) {
    sort(Arr.begin(), Arr.end());
    int Median = Arr[n / 2];
    return Median;
}

int FindMedianAbsoluteDeviation(vector<int> Arr, int n) {
    int Median = FindMedian(Arr, n);
    vector<int> AbsoluteDeviation;
    for (int i : Arr) {
        AbsoluteDeviation.push_back(abs(i - Median));
    }
    int sum = FindSum(AbsoluteDeviation, n);
    return sum;
}

/*
    * Functions Standard Deviation
*/
double FindStandardDeviation(vector<int> Arr, int n) {
    double Mean = FindMean(Arr, n);
    double StandardDeviation = 0;
    for (int i : Arr) {
        StandardDeviation += pow((i - Mean), 2);
    }
    StandardDeviation = sqrt(StandardDeviation / n - 1);
    return StandardDeviation;
}

/*
    * Functions Quartile deviation
*/
double FindQuartileDeviation(vector<int> Arr, int n) {
    sort(Arr.begin(), Arr.end());
    int Median = FindMedian(Arr, n);
    vector<int> QuartileDeviation;
    for (int i : Arr) {
        QuartileDeviation.push_back(abs(i - Median));
    }
    int sum = FindSum(QuartileDeviation, n);
    return sum;
}

/*
    * Functions Coefficient of Variation
*/
double FindCoefficientOfVariation(vector<int> Arr, int n) {
    double StandardDeviation = FindStandardDeviation(Arr, n);
    double Mean = FindMean(Arr, n);
    double CoefficientOfVariation = StandardDeviation / Mean;
    return CoefficientOfVariation;
}