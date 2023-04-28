#include <iostream>
using namespace std;

int countPositive(float arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        int count = countPositive(arr, n-1);
        if (arr[n-1] > 0) {
            count++;
        }
        return count;
    }
}

int main() {
    float arr[] = { 3.14, -2.5, 6.7, -1.0, 0.0, 9.8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = countPositive(arr, n);
    cout << "Number of positive elements in the array: " << count << endl;

    return 0;
}