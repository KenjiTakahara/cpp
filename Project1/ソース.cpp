#include <iostream>  // cout
#include <algorithm> // generate
#include <vector>    // vector
#include <ctime>     // time
#include <cstdlib>   //srand,rand
using namespace std;
int main()
{
    srand(static_cast<unsigned>(time(nullptr)));
    auto g = []()
    { return (rand() % 1000); };
    vector<short> v(100);
    generate(v.begin(), v.end(), g);
    for (auto i : v)
        cout << i << ',';
}