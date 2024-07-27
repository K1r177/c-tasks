#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    
    string str = "-1 2 3 -1 -2";
    vector <int> arr;
    istringstream iss(str);
    int number;
    int coNum = 0;
    
    while (iss >> number) {
        arr.push_back(number);
    }
    
    for(int i = 1; i < arr.size(); i++){
        if(arr[i - 1] > 0 && arr[i] > 0){
            cout << arr[i - 1] << " " << arr[i] << " ";
             coNum = coNum + 2;
        }
        else if(arr[i - 1] < 0 && arr[i] < 0){
            cout << arr[i - 1] << " " << arr[i] << " ";
            coNum = coNum + 2;
        }
        
        if(coNum > 1){
            break;
        }
        
    }

    cout << endl;

    system("pause"); 
    
    return 0;
}