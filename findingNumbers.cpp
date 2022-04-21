#include <iostream>
#include <vector>

/*--------------------------------------------------------------------------------------------------------------------------

BY PATRICIA DOURADO

Given an array A of intergers and interger K, return the maximum S such that there exists i < j with A[i] + A[j] = S
and S < K. If no such i, j exist satisfying this equation, return -1;

Input: A = {34, 23, 1, 24, 75, 33, 54, 8}, K = 60
Output: 58

34 + 58 < 60 there is no pair with sum 59

--------------------------------------------------------------------------------------------------------------------------*/
using namespace std;

int main(){

    int K = 60, max = 0;
    //vector<int> A = {32, 25, 27, 33, 27, 15, 28};
    vector<int> A = {34, 23, 1, 24, 75, 33, 54, 8};
    //vector<int> A = {10, 20, 30};

    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A.size(); j++)
            if((A[i] + A[j] > max) && (A[i] + A[j] < K))
                max = A[i] + A[j];
    }
    if(!max)
        cout<<-1;
    else
        cout<<max<<endl;

    return 0;
}