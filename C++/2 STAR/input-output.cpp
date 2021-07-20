#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int ar[3];
    int sum = 0;
    for ( int i = 0 ; i< 3; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
    }
    printf("%d", sum);
    return 0;
}
