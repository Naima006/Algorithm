#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector1;

    for (int x = 1; x <= 10; x++)
    {
        vector1.push_back(x);

        cout << "Vector size: " << vector1.size()<< "\t" ;   //size() function to show vector's length
        cout << "Vector capacity: " << vector1.capacity() << endl;  //capacity() function to show that the vector's size grows dynamically.
    }

    cout << endl;
    return 0;
}

