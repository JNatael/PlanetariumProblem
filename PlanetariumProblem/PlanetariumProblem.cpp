//Defines the entry point for the console application.
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

/*
This function reads a line of int values into a vector function and returns that
vector.
*/
vector<int> readlineofints(int count) {
    // Input values
    vector<int> linevalues(count);
    for (int j = 0; j < count; j++) {
        int val;
        cin >> val;
        linevalues[j] = val;
    }
    return linevalues; // Return line values as a vector
}

/*
This function reads a line of long values into a vector function and returns that
vector.
*/
vector<long> readlineoflongs(int count) {
    // Input values
    vector<long> linevalues(count);
    for (int j = 0; j < count; j++) {
        long val;
        cin >> val;
        linevalues[j] = val;
    }
    return linevalues; // Return line values as a vector
}

long gcd(long a, long b) {
    if (b == 0) { return a; }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);

    // get test case count
    int t;
    std::cin >> t;

    //! loop over all the test cases
    for (int i = 1; i <= t; i++) {
        // Read in params
        vector<long> params = readlineoflongs(2);
        long n = params[0];
        long m = params[1];

        long result = gcd(n, m);

        //Print output
        std::cout << "Case #" << i << ": " << result << std::endl;
    }
    return 0;
}