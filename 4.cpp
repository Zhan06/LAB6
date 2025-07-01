#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int n, num, target;
    vector<int> arr;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    cout << "Find frequency of: ";
    cin >> target;

    int countResult = count(arr.begin(), arr.end(), target);
    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());

    cout << "Count of " << target << ": " << countResult << endl;
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}
