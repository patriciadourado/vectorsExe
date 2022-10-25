#include <iostream>
#include <set>
#include <vector>

/* ---------------------------------------------------------------------------------------------------------------------------------------

BY PATRICIA DOURADO

Given a SET containing numbers from 1 to n. Due to a data error, one of the numbers in the set got duplicated to another number in
the set, which results in a repetition of one number and a loss of another number. 

Given an ARRAY nums representing the data status of this set after the error, find and return the number that occurs twice and the number
that is missing in the form of an array.

Input: nums = {1, 2, 3, 4, 3};
Output: {3, 5};

3 is repeated and 5 is missing

------------------------------------------------------------------------------------------------------------------------------------------*/

using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 2};
    int repeated, missing, count = 0;
    
    for(int j = 0; j < nums.size(); j++){
        repeated = nums[j];
        count = 0;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] == repeated)
                count++;
        if(count == 2)
            break;
    }

    cout<<"["<<repeated<<", "<<nums[nums.size()-2] + 1<<"]"<<endl;

    return 0;
}