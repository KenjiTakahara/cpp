#include <iostream>  // cout
#include <algorithm> // generate
#include <vector>    // vector
#include <ctime>     // time
#include <cstdlib>   //srand,rand
using namespace std;
int main()
{
    std::srand(unsigned(time(NULL)));

    vector<int> v(8);

    generate(v.begin(), v.end(),
             []() -> int
             {
                 return (rand() % 100);
             });

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    generate(v.begin(), v.end(),
             []() -> int
             {
                 static int i = 0;
                 return (++i);
             });

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}