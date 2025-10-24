#include<iostream> 
#include<cmath> 

using namespace std;

int main(){

    float mark;
    int best_index; 

    for(int i = 1 ; i <= 3 ; i++){
        float highest = 0.0f;
        cout << "Course #" << i << endl;
        for(int j = 1; j <= 5 ; j++){
            cout << "Student #" << j << ": "; 
            cin >> mark;
            if(mark > highest){
                highest = mark;
                best_index = j; // update best student index 
            }
        }
        cout << "The best student in this course is Student " << best_index << endl << '\n';
    }

    return 0;
}

// for each course find the best student