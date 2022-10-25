#include <iostream>
#include <string>

using namespace std;

/*------------------------------------------

BY PATRICIA DOURADO

validate a given string based on expression

--------------------------------------------*/

int main(){
    string s = "()[]{}";
    //string s = "[(]){}";
    //string s = "([])";
    bool valid = true;

    for (int i = 0; i < s.size(); i++){
        switch(s[i]){
            case '{':
                if(s[i+1] != '}' && s[s.size()-i-1] != '}'){
                    valid = false;
                }
                break;
            case '(':
                if(s[i+1] != ')' && s[s.size()-i-1] != ')'){
                    valid = false;
                }
                break;
            case '[':
                if(s[i+1] != ']' && s[s.size()-i-1] != ']'){
                    valid = false;
                }
                break;
        }
    }
    if(!valid)
        cout<<"the string = "<<s<<" is invalid!"<<endl;
    else
        cout<<"the string = "<<s<<" is valid!"<<endl;

    return 0;
}