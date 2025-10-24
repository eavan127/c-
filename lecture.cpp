#include<iostream> // input/output stream
#include<cmath> // C++ mathematics library 
#include<iomanip>

using namespace std;

int main(){ //main function

    float height,weight;

    std::cout << "Height(m): " ; // end of the line 
    cin >> height;
    std::cout << "Weight(kg): " ; // to display hello in the output screen 
    cin >> weight;

    float bmi = weight / pow(height,2);
    std::cout << "You BMI is " <<fixed<<setprecision(2) << bmi << "\n" ;

    std::string category;

    if(bmi <= 18) category = "underweight";
    else if(bmi <=  24.9) category = "normal";
    else if(bmi <= 39.9) category = "overweight";
    else category = "obese";

    std::cout << "You category is: " << category << '\n';

    return 0; // value 0 will be returned if the program successfully compiled 
}

// if up alr using name space std; then down no need to type again std for each variable 

// int main(){

//     float mark; 

//     cout << "Marks: " ; 
//     cin >> mark;

//     if(mark < 40){
//         cout << "Fail"<< endl;
//         cout << "See your lecturer";
//     // how many semicolon then mean the end of a statement 
//     } // give boolean value 
//     else{cout << "Pass";} //like this one single statement // actually this statement if only one no need semicolom
//     // also can 
//     //if it is compund statement, then need to use { }

//     return 0;
// }

// int main() {

//     float mark; 
//     char grade; 
//     float attd;

//     cout << "Marks: "; 
//     cin >> mark;
//     cout << "Attendance: ";
//     cin >> attd;   // <-- add semicolon here

//     if (mark > 100){
//         cout << "Invalid mark";
//         return 0;
//     }
//     if (attd > 100){
//         cout << "Invalid attendance";
//         return 0;
//     }

//     if (mark >= 80){
//         if(attd >= 80) grade = 'A';
//         else grade = 'B';
//     }
//     else if(mark >=70){
//         if(attd >= 70) grade = 'B'; // if mark(>= 70) && (mark < 80)
//         else grade = 'C';
//     }
//     else if(mark >=60) grade ='C';
//     else if(mark >=0) grade = 'F';
//     else {
//         cout << "Invalid mark.";
//         return 0;
//     }

//     cout << "Your grade is: " << grade;

//     return 0;
// }

// int main(){

//     int option;

//     cout << "Welcome to Hotlink!" << endl;
//     cout << "Press 1 to Topup" << endl;
//     cout << "Press 2 to Check Point" << endl;
//     cout << "Press 3 to Redeem Point" << endl;
//     cout << "Press 4 to Check Balance " <<endl;

//     cout << "Your option: " ; cin >> option;

//     switch(option){
//         case 1 : cout<< "Hello";
//                  break;
//         case 2 : cout<<"Topup";
//                 break;
//         case 3 : cout<<"Check point";
//                 break;
//         case 4 : cout<<"Redeem Point";
//                 break;
//         case 5 : cout<<"check balance";
//                 break;
//     }

//     return 0;
// }

// int main(){

//     int usage;
//     int left_usage;
//     float rate;
//     float price;

//     cout << "Please enter your monthly electricity usage: ";
//     cin >> usage;

//     if (usage <= 200){
//         price = usage * 21.80;
//     }
//     else if(usage <= 300){
//         price =  (200 * 21.80) + ((usage-200) * 33.40);
//     }
//     else if(usage <= 600){
//         price =  (200 * 21.80) + (100* 33.40) + ((usage-300) * 51.60);
//     }
//     else if(usage <= 900){
//         price =  (200 * 21.80) + (100* 33.40) + (300 * 51.60) + ((usage-300) * 54.60);
//     }
//     else{
//         price =  (200 * 21.80) + (100* 33.40) + (300 * 51.60) + (300 * 54.60) + ((usage-900) * 57.10);

//     }

//     price = price /100;
//     cout << "Your monthly bill is RM " << fixed << setprecision(2) << price;

//     return 0;
// }


// int main() {

//     int usage;
//     float bill = 0.0;

//     cout << "Please enter your monthly electricity usage: ";
//     cin >> usage;

//     int remaining = usage;

//     // first 200 kWh
//     int block = min(remaining, 200);
//     bill += block * 21.80;
//     remaining -= block;

//     // next 100 kWh (201–300)
//     if (remaining > 0) {
//         block = min(remaining, 100);
//         bill += block * 33.40;
//         remaining -= block;
//     }

//     // next 300 kWh (301–600)
//     if (remaining > 0) {
//         block = min(remaining, 300);
//         bill += block * 51.60;
//         remaining -= block;
//     }

//     // next 300 kWh (601–900)
//     if (remaining > 0) {
//         block = min(remaining, 300);
//         bill += block * 54.60;
//         remaining -= block;
//     }

//     // above 900 kWh
//     if (remaining > 0) {
//         bill += remaining * 57.10;
//     }

//     // convert sen to RM
//     bill /= 100.0;

//     cout << fixed << setprecision(2);
//     cout << "Your monthly bill is RM " << bill << endl;

//     return 0;
// }

// int main(){

//     int i = 0 ; // initializer

//     while(i < 10){ //condition // while loop = pre test loop 
//         cout << "Hello" << endl;
//         i = i + 1;  // if no this line then endless loop// infinite loop
//     }

//     return 0;

//     do while loop = post test loop

//     int j = 1 ; // the initializer only works once 

//     do{
//         cout << "Hello" << endl;
//         j = j + 1;  
//     }while(j <= 10);

//     for(int i = 1 ; i <= 5 ; i++){
//         cout << "Hello" << endl; //only one single statement 
//     }
// }

// int main(){
//     int num = 1 ;
//     int count = 0 ;

//     while(num <= 100){
//         if(num % 5 == 0){
//             count ++;
//             cout << num << endl;
//         }
//         num ++;
//     }
//     cout << "There is " << count << " number of integer that is divisible by 5" << endl;

//     return 0;
// }

// int main(){

//     int i = 1;
//     float mark, highest = 0, lowest = 100, total = 0; // only can declare one time // then 
//     // don't declare again will have error;
//     float avg;

//     for (i; i <= 5; i++){
//         cout << "Student #" << i << " : " ;
//         cin >> mark;
//         total += mark; // total = total + mark; 

//         if(mark > highest){
//             highest = mark;
//         }
//         if(mark < lowest){
//             lowest = mark;
//         } 
//     }

//     avg = total/(i-1); // because the i stop at 6 after running dircet +1 = 6 if fail baru exit loop
//     // so it stops when i = 6 
//     cout << "The total mark is " << fixed << setprecision(2) << total << endl ; 
//     cout << "The average of mark is " << fixed << setprecision(2) << avg << endl; 
//     cout << "Highest: " << highest << endl;
//     cout << "Lowest: " << lowest << endl;

//     // i is only recognized in for loop if u declare it in the for loop

//     return 0;
// }

// int main(){
//     int i = 0; 
//     float mark, total = 0.0f;
//     const int SENTINEL = 111;

//     do{
//         cout << "Student # " << (i+1) << ": "; 
//         cin >> mark;
//         i++;
//         total += mark;
//     }while(mark != 111); // sentinel value will be determined based on the mark range 
//     // run when it is not 111, so until 111 it will stop
//     // so the sentinel value is 111 

//     cout << "Total: " <<  (total-SENTINEL) << endl;
//     float average = total / (i-1) ; // need to minus 1 because the index alr become 6
//     cout << "Average: " << fixed << setprecision(2) <<  average << endl;

//     return 0;
//     // Here you increment i even when mark == 111, so you counted the sentinel once. 
//     // That’s why you then divide by (i - 1) 
//     // (to undo that extra count). It works but is easy to get wrong.
//     // 111 being entered first and add alr i , baru they check it is false which mean 
//     // it equals to 111 so need to minus the false condition that alr add the i 
// }

// int main() {
//     int i = 0;
//     float mark, total = 0.0f;
//     const int SENTINEL = 111;

//     do {
//         cout << "Student # " << (i + 1) << ": ";
//         cin >> mark;

//         if (mark != SENTINEL) {   // only count real marks
//             total += mark;
//             i++;
//         }

//     } while (mark != SENTINEL);

//     cout << "Total: " << total << endl;

//     if (i > 0) {
//         float average = total / i;
//         cout << "Average: " << fixed << setprecision(2) << average << endl;
//     } else {
//         cout << "No marks entered." << endl;
//     }

//     return 0;
// }


// int main(){

//     float mark;

//     for(int i = 1 ; i <= 3 ; i++){
//         cout << "Course #" << i << endl;
//         for(int j = 1; j <= 5 ; j++){
//             cout << "Student #" << j << ": "; 
//             cin >> mark;
//         }
//     }

//     return 0;
// }
