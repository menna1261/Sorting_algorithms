//Time complexity --> O(N^2)
//Space complexity --> O(1)
#include <iostream>
#include<vector>
using namespace std;

void sort(vector<int>& v) {
    // we always assume that the V[0 : i-1 ] is a sorted subarray , so we start the loop from i =1
    for (int i = 1; i < v.size(); i++) {
        // we store the ith term as our key 
        int key = v[i];
        // we need to point at the index just before i so we can compare the ith term  with its previous term(s)
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            // if these conditions are true , that means we need to shift the jth term to the right and then store the ith term in the proper place
            v[j + 1] = v[j];
            j--; // move the j one step back so we can compare the key to all its previous elements
        }
        v[j + 1] = key; // when the while loop ends , the j will be in the place just before the right place for the key
    }
}
int main()
{   // testing the function 
    vector<int> v = { 5,2,4,3,1,6 };
    sort(v);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}

