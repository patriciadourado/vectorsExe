#include <iostream>
#include <string>

using namespace std;

/*------------------------------------------

BY PATRICIA DOURADO
finding the extra character of two strings

--------------------------------------------*/

int main(){
    string s1 = "abcde";
    string s2 = "cbdaue";
    char c = s2[0];
    int it = 0;

    while(c != '\0'){
        int count = 0;
        for(int i = 0; i < s1.size(); i++){
            if(c != s1[i]){
                count++;
            }
            if(count == s1.size()){
                break;
            }
        }
        if(count == s1.size())
            break;
        else
            c = s2[it++];
    }

    cout<<"the extra character is: "<<c<<endl;

    return 0;
}