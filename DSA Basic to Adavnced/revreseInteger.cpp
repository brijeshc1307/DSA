/*

input: 1435
Reversed integer: 5341

*/

#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int x) {
    int ans = 0;
    while (x) {
        int digit = x % 10;
        if ((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
            return 0;
        }
        ans = ans * 10 + digit;
        x /= 10;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int reversed = reverse(n);
    if (reversed == 0) {
        cout << "Error: integer overflow occurred." << endl;
    } else {
        cout << "Reversed integer: " << reversed << endl;
    }
    return 0;
}

// OR

#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int x) {
    int ans = 0;
    while (x != 0) {
        int digit = x % 10;
        ans = ans * 10 + digit;
        if ((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
            return 0;
        }
        x /= 10;
    }
    ans = (x < 0) ? -ans : ans;
    return ans;
}

int main() {
    int n;
    cin >> n;
    int reversed = reverse(n);
    if (reversed == 0) {
        cout << "Error: integer overflow occurred." << endl;
    } else {
        cout << "Reversed integer: " << reversed << endl;
    }
    return 0;
}

// TC = O(log(n)) OR O(log10(n))
