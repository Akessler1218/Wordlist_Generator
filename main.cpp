#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void generate(string argument, string listname){
    ofstream list(listname + "List.txt", ios::app);
    for (int i = 0; i < 9999; ++i){
        list << argument << i << endl;
    }
    list.close();
}

int main(){
    while(true){
    cout << "Name your wordlist \n press CTRL+Z to exit" << endl;
    string listname;
    cin >> listname;
    cout << "Wordlist info" << endl;
    string argument;
    cin >> argument;
    generate(argument, listname);
    }
    return 0;
}