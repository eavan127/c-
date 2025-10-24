#include<iostream> // input/output stream
#include<cmath> // C++ mathematics library 
#include<iomanip>

using namespace std;

// int main(){
//     int x; 
//     int y;

//     cin >> x >> y;
//     if(x > 3 && x <= 10){
//         cout << x + y << endl;  // fixed here
//         x = x * y ;  // mean x alr become 70 because x = 10 * 7 = 70
//     }
//     cout << x << " " << y++ << endl; //display 70 then display 10, baru increase if ++y mean display 11
//     return 0;
// }

// int main()
// {
//     int x ;
//     int y ;

//     cin >> x >> y ; 
//     if(x >3){
//         if(y > x){
//             cout << x + y << endl;
//         }
//         else{
//             cout << x * y++ << endl; // ++y become 6 so 10 * 6 = 60 
//             // y++ post increment, ++y pre increment
//             // so if y++ then mean times first baru increase 
//             // if ++y then increase first baru times 
//             cout << x << " " << y << endl;
//         }
//     }
//     else{
//         cout << x << " " << y % x << endl;
//     }

//     if(x > 5){
//         cout << x + y + 3 << endl; // 10 > 5 then 10 + 6 + 3 
//     }
// }

// int main(){
//     int a,b,c ; 

//     cin >> a >> b;
//     if(a > b){
//         cin >> c;
//         if(a < c){
//             a = b + c;
//             cout << a << " " << b << " " << c << " " << endl;
//         }
//         else{
//             cout << a << " " << b << " " << endl;
//         }
//     }
//     else{
//         c = a * b;
//         b = a/b + c;
//         cout << a << " " << b << " " << c << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     cin >> a >> b;
//     if (a > b)
//     {
//         cin >> c;
//         if (a < c)
//         {
//             a = b + c;
//             cout << a << " " << b << " " << c << endl;
//         }
//         else
//         {
//             cout << a << " " << b << endl;
//         }
//     }
//     else
//     {
//         c = a * b;
//         b = a / b + c;
//         cout << a << b << c;
//     }
//     return 0;
// }

// int main(){
//     int x; 
//     cin >> x ;
//     switch(x){
//         case 1: x += 2 ; 
//                 cout << x << endl;
//                 break;
//         case 2: break;
//         case 3: x * 3;
//                 break;
//         case 4: x = x/2 * 5 ; 
//                 cout << x << endl;
//                 break;
//         default: 
//                 cout << x << endl;
//     }

//     return 0;
// }

// int main(){

//     int model, weight, weight_cls;
//     double fee; 

//     cout << "Please enter the model: ";
//     cin >> model;
//     cout << "Please enter the weight(lbs): ";
//     cin >> weight;

//     if(model <= 1970){
//         if(weight < 2700){
//             weight_cls = 1;
//             fee = 16.50;
//         }
//         else if(weight < 3800){
//             weight_cls = 2;
//             fee = 25.50;
//         }
//         else{
//             weight_cls = 3;
//             fee = 46.50;
//         }
//     }
//     else if(model <= 1979){
//         if(weight < 2700){
//             weight_cls = 4;
//             fee = 27.00;
//         }
//         else if(weight < 3800){
//             weight_cls = 5;
//             fee = 30.50;
//         }
//         else{
//             weight_cls = 6;
//             fee = 52.50;
//         }
//     }
//     else{
//         if(weight < 3500){
//             weight_cls = 7;
//             fee = 19.50;
//         }
//         else{
//             weight_cls = 8;
//             fee = 52.50;
//         }
//     }

//     cout << "Your car's weight class is " << weight_cls << '\n';
//     cout << "Your car's registration fee is RM " << fixed << setprecision(2) << fee;

//     return 0;
// }

// int main(){

//     int month,days;
//     std::string name;

//     cout << "Enter a month: ";
//     cin >> month;

//     switch(month){
//         case 1: days = 31;
//                 name = "January";
//                 break; //switch case only can be used in integer, char or enum
//         case 2: days = 28;
//                 name = "Febraury";
//                 break;
//         case 3: days = 31;
//                 name = "March";
//                 break;
//         case 4: days = 30;
//                 name = "April";
//                 break;
//         case 5: days = 31;
//                 name = "May";
//                 break;
//         case 6: days = 30;
//                 name = "June";
//                 break;
//         case 7: days = 31;
//                 name = "July";
//                 break;
//         case 8: days = 31;
//                 name = "August";
//                 break;
//         case 9: days = 30;
//                 name = "September";
//                 break;
//         case 10: days = 31;
//                 name = "October";
//                 break;
//         case 11: days = 30;
//                 name = "November";
//                 break;
//         default: days = 31;
//                  name = "December";
//                  break;  
//     }
//     cout << name << " has " << days << " days";

//     return 0;
// }

// int main(){
//     int x;
//     cin >> x; 
//     while(x > 3 && x <= 10){
//         cout << x << " " << x+2 << endl;
//         cin >> x;
//     }
//     cout << x << endl;

//     return 0;
// }

// int main(){
//     int x ; 
//     cin >> x; 
//     while(x % 2 == 1){
//         x = x + 2; 
//         if(x > 6){
//             cout << x << endl;
//             x = x + 1; 
//         }
//         cout << x << endl; //print 8 
//     } //loop back 

//     return 0;
// }

// int main(){
//     int a,b,c;

//     cout << "Enter a= " ;
//     cin >> a; 
//     cout << "Enter b= " ;
//     cin >> b; 

//     while(a < b){
//         cout << "Enter c= " ;
//         cin >> c; 
//         if(a < c){
//             a = b + c; 
//             cout << a << " " << b << " " << c << endl;
//         }
//         else{
//             cout << a << " " << b << endl;
//         }
//         a = a + 1;
//     }

//     c = a * b; //4 * 4 = 16
//     b = a/b + c; // 4 / 4 = 1 + 16 = 17 
//     cout << a << " " << b << " " << c << endl; // 4 17 16

//     return 0;
// }

// int main(){
//     int i = 1, code, quantity; 
//     double price,total;


//     while(i <= 2){
//         cout << fixed << setprecision(2) ; 
//         cout << "Product code for item " << (i) << " : ";
//         cin >> code; 
//         cout << "Quantity of product sold for item " << (i) << " : ";
//         cin >> quantity; 
//         cout << "Total price for item " << (i) << " (RM): ";
//         cin >> total; 

//         cout << "======================================" << endl; 
//         cout << "Product code: " << code << '\n'; 
//         cout << "Quantity: " << quantity << '\n'; 
//         cout << "Total price (RM): " << total << '\n'; 
        
//         if(quantity > 1){
//             price = total / quantity; 
//             cout << "Price per item: RM " << price << '\n'; 
//         }
//         i += 1;
//         cout << "======================================" << endl; 
//     }
//     return 0;
// }

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
//     int num1, num2, total= 0;

//     cout << "Please enter the first number: "; 
//     cin >> num1; 
//     cout << "PLease enter the second number: ";
//     cin >> num2;

//     int i = num1;

//     while(i <= num2){
//         total += num1;
//         num1 += 1;
//         i += 1;
//     }
//     cout << "The sume of numbers between is: " << total << endl;

//     return 0;
// }

// int main(){
//     int time = 0, g = 32;
//     double distance, total = 0.0;
//     int const G = 32;


//     cout << left << setw(10) << "Time" << setw(33) << "Distance in current interval" << setw(30) << "Total distance" << endl;
//     // setw = set width 
//     // Each word takes up 10 character spaces.
//     // If the text is shorter, it’s padded with spaces on the left.

//     cout << string(60, '-') << endl;

//     cout << fixed << setprecision(2); 

//     while(time <= 10){
//         distance = 0.5 * G * pow(time,2);
//         total += distance;
        
//         cout << left << setw(10) << time << setw(33) << distance << setw(19) << total << endl;
//         // all word, count + 5 spacing 

//         time ++;
//     }
//     return 0;
// }



