#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector1;
    for (int x = 1; x <= 10; x++)
    {
        vector1.push_back(x);    //adding elements
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Vector elements: " << vector1[i] << endl;
    }

    return 0;
}


