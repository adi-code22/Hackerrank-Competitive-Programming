#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin>>num;
    int ar[num];
    for(int i=0; i<num; i++){
        cin>>ar[i];
    }
    for (int j=num-1; j>=0; j--){
        cout<<ar[j]<<" ";
    }
    return 0;
}
