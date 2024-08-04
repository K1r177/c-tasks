#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    string str;
    vector <int> arr;
    int number;
    int previous;
    int current;

    getline(cin, str);
    istringstream iss(str);

    while(iss >> number){
        arr.push_back(number);
    }

    for(int i = 1; i < arr.size(); i++){
        current = arr[i];
        if(current > previous){
            cout << current << " ";
        }
        previous = current;
    }
    cout << endl;

    return 0;
}