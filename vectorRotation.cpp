#include <iostream>
#include <vector>

using namespace std;

/*-----------------------------------------------------------------------------------------------------------------
    BY PATRICIA DOURADO
    
   1. GIVEN A VECTOR [1,2,3,4,5,6,7], IF K ROTATIONS WERE MADE, EXAMPLE K=3, THE VECTOR SHOULD STAY AS FOLLOWING:
   [7,1,2,3,4,5,6]->[6,7,1,2,3,4,5]------>[5,6,7,1,2,3,4];

-------------------------------------------------------------------------------------------------------------------*/


int main(){
    vector<int> v = {1,2,3,4,5,6,7};

    int k = 1, temp;

    for(int j = 0; j < k; j++){
        temp = v[v.size()-1];
        for(int i = 0; i < v.size() - 1; i++)
            v[v.size() - i - 1] = v[v.size() - i - 2];
        v[0] = temp;
    }
    cout<<"v = { ";
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<", ";
    cout<<"}";

    return 0;
}