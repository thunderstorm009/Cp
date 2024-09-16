#include <iostream>

using namespace std;

int main()
{

    map<char, int>count;
    for(auto var:s){
        count[var]++;
    }
    int rez = 0;
    for(auto var:s){
        if(count[var]%2==0){
            rez+=count[var];
        }else{
            rez+=(count[var]-1);
        }
    }
    return rez;
}
