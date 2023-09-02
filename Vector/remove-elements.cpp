#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1{ 1, 2, 3, 4, 5, 6 };

    vec1.pop_back(); //removing last element

    cout << "Vector elements now: ";
    for (auto it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *it <<" ";
    }
    cout << endl;

    return 0;
}


