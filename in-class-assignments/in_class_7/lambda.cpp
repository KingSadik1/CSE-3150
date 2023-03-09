//a perfect number is the sum of all of its divisors excluding itself examples and 6 and 28
// use a lambada function to check if an integer is perfect int
// use a vecotr and a capture to keep track of the sums

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

#include "lambda.h"

using namespace std;

bool is_perfect_in_range(int n) {
    int x = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            x += i;
        }
    }
    return x == n;
};

void lamda_print(int n) {
    vector<int> vector(n);
    iota(vector.begin(), vector.end(), 1);
    for_each(vector.begin(), vector.end(),
             [](int num) {
                if (is_perfect_in_range(num)) {
                    cout << num << "= perfect" << endl;
                }
             });
};