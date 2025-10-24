#include<iostream> // input/output stream
#include<cmath> // C++ mathematics library 
#include<iomanip>

using namespace std;

int main(){

    char answers[100][40];
    char scheme[40];
    double percentage[100];
    int index_highest = 0;
    double highest = 0.00;

    cout << "Student's Answers:" << endl;

    for(int i = 0 ; i < 100; i++){ // input answers students by students 
        cout << "Student " <<(i+1) << " : " ; 
        for(int j = 0 ; j < 40 ; j++){
            cin >> answers[i][j];
        }
    }
    cout << endl;
    
    
    cout << "Answer Scheme: "; 
    for(int i = 0 ; i < 40; i++){
        cin >> scheme[i]; //input answer scheme
    }

    cout << endl;
    cout << fixed << setprecision(2);

    for(int i = 0 ; i < 100; i++){
        int correct_count = 0;
        for(int j = 0 ; j < 40 ; j++){
            if(answers[i][j] == scheme[j]){
                correct_count ++;  // count the number of correct answer
            }
        }
        percentage[i] = (correct_count / 40.0) * 100.0; // calculate percentage of each students 
        cout << "Student " << (i+1) << " : " << percentage[i] << " %" << '\n'; 
        if(percentage[i] > highest){
            index_highest = i;
            highest = percentage[i];
        }
    }

    cout << endl << "Highest: ";
    bool first = true;
    for(int i = 0; i < 100; i++){
        if(percentage[i] == highest){
            if(!first){
                cout << ", ";
            }
            cout << "Student " << (i+1);
            first = false;
        }
    }
    cout << ", " << highest << "%";
    // print all highest mark students // prevent missing of another highest mark student

    return 0;
}