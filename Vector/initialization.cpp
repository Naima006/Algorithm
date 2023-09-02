#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1 = {1, 2, 3, 4, 5};

    cout << "Vector: ";
    for (auto &element : vector1)
    {
        cout << element << " ";
    }

    return 0;
}
