#include <iostream>

using namespace std;

int main()
{
    float a[20];
    float c = 1;

    for(int i = 0; i < 20; i++)
    {
        a[i] = c;
        printf("%.0f\n", c);
        c *= i+1;
    }
    return 0;
}

