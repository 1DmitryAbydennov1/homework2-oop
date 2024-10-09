#include <iostream>
using namespace std;

class Cat 
{
public:
    int* miceCount;

    Cat(int& groupMiceCount) : miceCount(&groupMiceCount) {}

    void catchMice(int number) 
    {
        *miceCount += number;
    }
};

int main() 
{
    int miceCaughtA = 0;
    int miceCaughtB = 0;

    Cat alice(miceCaughtA), alex(miceCaughtA), anna(miceCaughtA);
    Cat bob(miceCaughtB), bella(miceCaughtB);

    alice.catchMice(2);
    alex.catchMice(1);
    bella.catchMice(4);
    bob.catchMice(2);
    anna.catchMice(1);
    bella.catchMice(1);
    alex.catchMice(4);
    bella.catchMice(5);
    alice.catchMice(2);

    cout << miceCaughtA << endl;
    cout << miceCaughtB << endl;

    return 0;
}
