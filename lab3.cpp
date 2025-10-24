#include<iostream> // input/output stream
#include<cmath> // C++ mathematics library 
#include<iomanip>

using namespace std;

// int main(){
//     int i = 1, num, count1 = 0, count2 = 0, count3 = 0, count4 = 0; 

//     while(i <= 15){
//         cout << "Enter numbers in range of [1 to 200]: " ;
//         cin >> num; 
//         if (num <= 50){
//             count1 += 1;  
//         }
//         else if (num <= 100){
//             count2 += 1; 
//         }
//         else if (num <= 150){
//             count3 += 1; 
//         }
//         else{
//             count4 += 1;
//         }
//         i += 1;
//     }
    
//     cout << "Total number in range of [1,50]: " << count1 << endl;
//     cout << "Total number in range of [51,100]: " << count2 << endl;
//     cout << "Total number in range of [101,150]: " << count3 << endl;
//     cout << "Total number in range of [151,200]: " << count4 << endl;

//     return 0;
// }

// int main(){
//     int n;

//     cin >> n;
//     for (int i =1; i <= n; i++){
//         for (int  j = 1; j <= i; j++){
//             cout << n;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int main(){
//     int n; 

//     cin >> n; 
//     for(int i = 1; i <=n ; i++){
//         for(int j = i; j <= n ; j++){
//             cout << " ";
//         }
//         for(int j = i; j <= n; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){

//     double result, average, total;

//     cout << fixed << setprecision(2);

//     for(int i = 1; i <=4 ; i++){
//         cout << "Enter " << i << " experiement result: " << endl;
//         for(int j = 1; j <= 6; j++){
//             cin >> result; 
//             total += result; 
//         }
//         average = total / 6; 
//         cout << "The total of result is " << total << endl;
//         cout << "The average of result is " << average << "\n\n"; 
//         //if more than one character then need use double " " not ' '
//     }
//     return 0;
// }

// int main(){

//     cout << left; // makes all subsequent setw() fields left-aligned
//     cout << setw(10) << "X" 
//          << setw(10) <<  "X/2" 
//          << setw(10) << "X+3"  
//          << setw(10) << "X*4"  << "\n\n" ; 
         
//     for(double i = 2; i <= 14 ; i+=3){
//         cout << setw(10) << i 
//          << setw(10) << fixed << setprecision(1) << i/2.0
//         // cout.unsetf(ios::fixed); 
//         // // reset back to default (no fixed or limited precision)
//          << setw(10) << fixed << setprecision(0) << i+3 // or u reset back to no decimal place
//          << setw(10) << i*4  << "\n" ; 
//     }

//     return 0;
// }

// int main(){

//     int n ; 
//     cout << "Enter n: " ;
//     cin >> n; 

//     cout << "Pattern produced: " << endl; 
//     for(int i = 1; i <= 4; i++){
//         for(int j = 1; j <= i; j++){
//             cout << " ";
//         }
//         for(int j = i; j <= n ; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){

//     int n ; 
//     cout << "Enter n: " ;
//     cin >> n; 

//     cout << "Pattern produced: " << endl; 
//     for(int i = 1; i <= 4; i++){
//         for(int j = 1; j <= i; j++){
//             cout << " ";
//         }
//         for(int j = i; j <= n ; j++){
//             cout << j;
//         }
//         for(int j = n ; j >= i; j--){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int StudentAge[5] = {24,29,18,23,12};
// double StudentMarks[200]; // default values are zeros 
// char StudentGrades[5]= {'c','c','c','c','c'}; //like this baru can 5 thing 0,1,2,3,4
// char StudentGrades [6] = "ccccc"; // here only 4 but need plus one more O/ null value so total 5 

// int main(){
//     char myArray1[5] = {'h','l','o','o','l'};
//     char myArray2[5] = {'e','l','w','r','d'};
//     char myArray3[10];
//     for(int i = 0 ; i <= 10; i = i + 2){
//         myArray3[i] = myArray1[i/2];
//         myArray3[i+1] = myArray2[i/2];
//     }
//     for(int i = 0 ; i < 10; i = i+1){
//         cout << myArray3[i];
//     }
//     return 0;
// }

// int main() {
//     float temp[7];           // Store temperatures in Celsius
//     float highest;           // Store the highest temperature

//     cout << fixed << setprecision(2);

//     // Input temperatures
//     for (int i = 0; i < 7; i++) {
//         cout << "Please enter the temperature for Day " << (i + 1) << " (Celcius): ";
//         cin >> temp[i];
//     }

//     cout << "\nDay\tCelsius\t\tFahrenheit\n";
//     cout << "---------------------------------\n";

//     // Initialize highest as the first temperature
//     highest = temp[0];

//     // Display each day's Celsius & Fahrenheit, and find highest
//     for (int i = 0; i < 7; i++) {
//         float fahrenheit = (temp[i] * 9/5) + 32;
//         cout << (i + 1) << "\t" << temp[i] << "\t\t" << fahrenheit << endl;

//         if (temp[i] > highest) {
//             highest = temp[i];
//         }
//     }

//     // Convert highest to Fahrenheit for display
//     float highestF = (highest * 9/5) + 32;

//     cout << "\n---------------------------------\n";
//     cout << "Highest Temperature: " << highest << " Celcius = " << highestF << " Fahrenheit" << endl;

//     return 0;
// }

int main(){

    int id[10];
    float gross[10];
    float commission[10];

    cout << fixed << setprecision(2);

        
    for(int i = 0; i <= 9; i++){
            cout << "Person " << (i+1) << endl;
        cout << "Enter your id: ";
        cin >> id[i];
        float gross_sales, comm;
        cout << "Please enter your gross sales: ";
        cin >> gross[i];

        gross_sales = gross[i];
        if(gross_sales < 1000.00){
            comm = 100.00;
        }
        else if(gross_sales >= 1000.00 && gross_sales <= 5000.00){
            comm = (gross_sales * 5) / 100.00;
        }
        else{
            comm = 200.00 + ((gross_sales*7)/100.00);
        }
        commission[i] = comm; 
    }
    for(int i = 0; i <= 9 ; i++){
        cout << "Person "<< (i+1) << endl 
        << "ID: " << id[i] << endl 
        << "Gross sales: " << gross[i] << endl 
        <<"Commission " << commission[i] << endl << "---------------" << endl;
    }
    return 0;
}
