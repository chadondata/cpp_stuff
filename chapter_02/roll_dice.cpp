#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int elapsed_seconds = time(nullptr);

    srand(elapsed_seconds);

    int die1 = rand() % 6;
    die1 = die1 + 1;

    int die2 = rand() % 6;
    die2 = die2 + 1;

    cout << "Your roll:  " << die1 << " " << die2 << endl;
}