//*************************************************
//          Natalie Ferraro
//          helloWorld
//          05-05-2023 
//  simple helloWorld file for C-Repo
//*************************************************

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    vector<string> hello(4);

    hello.push_back("hello world ");
    hello.push_back("welcome to my C repo ");
    hello.push_back( "on GitHub -_- ");
    hello.push_back("._.");


    for(int i = 0; i < hello.size(); i++){
        cout<<hello[i];
    }

    return 0;

}