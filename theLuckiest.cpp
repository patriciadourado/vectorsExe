#include <iostream>
#include <vector>
#include <set>

using namespace std;
/*------------------------------------------------------------------------------------------------------------------
  BY PATRICIA DOURADO
  
  the luckiest number is the one which appears the number of times it is equal to, example, number 2 appears twice.
  return the largest luckiest number;

--------------------------------------------------------------------------------------------------------------------*/

int lucky(vector<int> arr, int num){
  int count = 0;
  
  for(int i = 0; i < arr.size(); i++)
    if(arr[i] == num)
      count++;

  return count == num ? num : -1;
}

int main(){
  
  vector<int> arr = {1,1,2,3,3};
  set<int> v;

  int max = -1;

  for(int i = 0; i < arr.size(); i++){
    if(lucky(arr, arr[i]) != -1)
      v.insert(arr[i]);//the set insert unique values and order them from the highest to the lowest
  }
  
  if(!v.empty())
    max = *(v.rbegin());

  if(max != -1)
    cout<< "the luckiest int is: "<< max <<endl;
  else
    cout<<"there isn't lucky intergers! :("<<endl;
  return 0;
}