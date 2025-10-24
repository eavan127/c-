#include<iostream> 
#include<cmath> 

using namespace std;

int main(){
    int num = 1;
    int count = 0;

    cout << "===============================" << endl;
    
    for(num; num <= 100; num++){
        if(num % 5 == 0){
            cout << num << " is divisible by 5." << endl;
            count ++;
        }
    }
    
    cout << "The number of integer that can be divisible by 5 is " << count << endl;
    cout << "===============================";

    return 0;
}