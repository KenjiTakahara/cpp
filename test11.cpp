#include <iostream>
#include <vector>
#include <iomanip>
#include <random>

using std::cout;
using std::endl;
using std::setw;
using std::vector;

constexpr int SIZE = 10;
constexpr int NEW_SIZE = 20;
constexpr int MIN = 1;
constexpr int MAX = 1000;

void initPrintIntVector(int *arr, int size)
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(MIN, MAX);
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = distr(eng) % 1000;
        cout << setw(2) << distr(eng) % 1000 << "; ";
    }
    cout << endl;
}

int main()
{
    std::unique_ptr<int[]> arr2(new int[SIZE]);
    initPrintIntVector(arr2.get(), SIZE);
}