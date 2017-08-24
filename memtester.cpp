/**
 * memtester.cpp
 * (c) 2017 YLWS-4617
 *
 * Use this program AT YOUR OWN RISK !
 * DO NOT COMPILE AND USE IT ON ANY
 * PRODUCTION SERVER !
 */

#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int main()
{
    long allocSize = 0;

    while (true)
    {
        unsigned char *memorySize = new unsigned char[1048576];
        for (int i = 0; i < 1048576; i++)
        {
            memorySize[i] = i * rand();
        }
        allocSize += 1;
        cout << allocSize << " MB allocated" << endl;
    }

    return 0;
}
