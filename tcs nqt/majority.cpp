
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    int candidate = 0;

    // Find candidate using Boyer-Moore Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
        else if (candidate == arr[i]) {
            count++;
        }
        else {
            count--;
        }
    }

    // Verify whether candidate is actually a majority element
    count = 0;

    for (int i = 0; i < n; i++) {
        if (candidate == arr[i]) {
            count++;
        }
    }

    if (count > n / 2)
        return candidate;

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << majorityElement(arr) << endl;

    return 0;
}

