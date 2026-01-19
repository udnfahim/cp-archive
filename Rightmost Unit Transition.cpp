#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    // Read n (number of elements)
    int n = inf.readInt(3, 100, "n"); // n must be between 3 and 100
    inf.readEoln();

    // Read the sequence of integers
    std::vector<int> s = inf.readInts(n, 1, 100, "s"); // each s_i between 1 and 100
    inf.readEoln();

    // Ensure exactly n integers are provided
    ensure((int)s.size() == n);

    // Ensure there are no extra tokens in the file
    inf.readEof();

    return 0;
}
