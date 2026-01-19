#include "testlib.h"
#include <vector>
int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    // Read n (number of elements)
    int n = inf.readInt(3, 100, "n");
    inf.readEoln();

    // Read the sequence of integers
    std::vector<int> s = inf.readInts(n, 1, 100, "s");
    inf.readEoln();

    // Ensure exactly n integers
    ensure((int)s.size() == n);

    // Ensure no extra data
    inf.readEof();

    return 0;
}
