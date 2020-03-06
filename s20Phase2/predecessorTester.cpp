#include <iostream>
#include "RBTree.cpp"
using namespace std;

int main(){
	int K[11] = {0,1,2,3,4,5,6,7,8,9,10};
    int V[11] = {10,9,8,7,6,5,4,3,2,1,0};

    cout << "Testing predecessor" << endl;

    RBTree<int, int> T1(K,V,11);
    // cout << *(T1.predecessor(7)) << endl;
    for (int i = 1; i < 11; i++){
        cout << "predecessor of " << i << " = " << *(T1.predecessor(i)) << endl;
    }

    return 0;
}