#include "testlib.h"
int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    int correct = ouf.readInt();
    int user = ans.readInt();
    if (user == correct)
        quitf(_ok, "Correct");
    else
        quitf(_wa, "Wrong answer: expected %d, found %d", correct, user);
}
