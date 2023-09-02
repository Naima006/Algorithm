#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};

    vector<int>::iterator it;

    cout << "vector: ";

    for (it = vec1.begin(); it != vec1.end(); it++)
    {

        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
