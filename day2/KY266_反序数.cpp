#include <iostream>
using namespace std;
int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        int x1 = i / 1000;
        int x2 = (i / 100) % 10;
        int x3 = (i / 10) % 10;
        int x4 = i % 10;
        int j = i * 9;
        int y1 = j / 1000;
        int y2 = (j / 100) % 10;
        int y3 = (j / 10) % 10;
        int y4 = j % 10;
        if (x1 == y4 && x2 == y3 && x3 == y2 && x4 == y1)
            cout << i << endl;
    }
}