#include <iostream> // for basic input and output operation 
#include <vector> 
#include <cmath>
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()

// int main(){ // invoking the main function
//     std :: cout << "I like pizza!" << std::endl; // ; tell the compiler the statement is done // endl = endline
//     std :: cout << "It's really good" << '\n'; //or add new line character 
//      // c character out = output //standard 
//     return 0; // return - mean no problem in your code, 1 mean have problem 

//     /* this is a multiline
//      comment 
//     */
// }

// int main () {
//     int x = 5 ;  //declaration
//     x = 5 ;  // assignnment
//     int y = 6 ;
//     int sum = x + y ;

//     std ::cout << x << '\n';
//     std ::cout << y << '\n';
//     std ::cout << sum << '\n';

//     return 0;
// }

// int main () {

//     //integer (whole number)
//     int age = 21;
//     int year = 2023;
//     int days = 7.5;

//     //double (number including decimal)
//     double price = 10.99;
//     double gpa = 2.5;
//     double temperature = 25.1;

//     // single character (only one)
//     char grade = 'A';
//     char initial = 'B';
//     char currency = '$';

//     //boolean (true or false)
//     bool student = false;
//     bool power = true; 
//     bool forSale = true; 

//     //string (objects that represetns the sequence of text)
//     std::string name = "Bro";
//     std::string day = "Friday";
//     std::string food = "pizza";
//     std::string address = "123 Fake St.";

//     std::cout<< name << '\n';
//     std::cout << days << '\n';
//     std::cout << price << '\n';
//     std::cout << initial << '\n';

//     std::cout << "Hello " << name << '\n';
//     std::cout << "You are " << age << " years old" ; 

//     return 0;
// }

// int main() {
//     // the const keyword specifies that a variable's value is constant 
//     // tells the compiler to prevent anything from modifying it 
//     // (read-only)

//     const double PI = 3.14159;  // const name must be upper case
//     const int LIGHT_SPEED = 299792458;
//     const int WIDTH = 1928; 
//     const int HEIGHT = 1989;

//     double radius = 10; 
//     double circumference = 2 * PI * radius; 

//     std::cout << circumference << "cm" << "\n";

//     return 0; 
// }

// namespace first{
//     int x = 1;
// }

// namespace second{
//     int x = 2;
// } // namespace is like one another container storing variables, they can have same name but must be 
// // inside different namepsace 

// int main() { 

//     // Namespace = provides a solution for preventing name conflicts 
//     // in a large project. Ench entity needs an unique name. 
//     // A namespace allows for identically named entitiles 
//     // as long as the namespace are different. 

//     // using namespace first; //if got this , no need add prefix  first:: = prefix 

//     // int x = 0; 

//     // std::cout << first::x << second::x ; //without namespace specified 
//     // std::cout<< x; // with unamespace specified 

//     // using namespace std;

//     // std::string name = "Bro";

//     // std::cout << "Hello " << name;

//     using std::cout;
//     using std::string;

//     string name = "Bro";

//     cout << "Hello" << name;

//     return 0;

// }

// typedef std::vector<std::pair<std::string,int>> pairlist_t; //new identifier to existing data type
// typedef std::string text_t; //want to use the identifier can use text_t instead of std::string
// typedef int number_t;
// using text_t = std::string; // alternative way // more popular 
// using number_t = int ;


// int main (){
//     // typedef = reserved keyword used to create an additional name 
//     // (alias) -additional_name - for another data type
//     // use it when there is a clear benefit 
//     // New identifier for an existing type
//     // helps with readability and reduce typos 

//     text_t firstName = "Bro";
//     number_t age = 21;
    
//     std::cout << firstName << '\n';
//     std::cout << age << '\n';

//     return 0;
// }


// int main(){

//     //arithmetic operators = return the result of a specific arithmetic operation (* + - /)
//     // parenthesis 
//     // multiplication & division 
//     // addition & substraction 

//     int students = 20; 
//     int remainder = students % 3 ; 
//     int newstudents = 6 - 5 + 4 * 3 / 2; 

//     //students = students + 1 ;
//     //students++;
//     // students += 1;

//     //students--;
//     //students -= 1; 

//     // students = students * 2 
//     // students *= 2; 

//     students = students / 3 ; 
//     //students /= 2 

//     std::cout << students << '\n'; 
//     std::cout << remainder << '\n';
//     std::cout << newstudents << '\n';

//     return 0;
// }

// int main() { 

//     // type conversion = conversion of a value of one data type to another 
//     // implicit = automatic 
//     // explicit = precede value with new data type (int)

//     // double x = 3.14 ; //implicit 
//     // double x = (int) 3.14 ;  // explicit // make into integer and store as a double
//     // char x = 100; 

//     // std::cout << x << '\n'; 
//     // std::cout << char(101);

//     int correct = 8 ; 
//     int questions = 10;
//     double score = correct / (double)questions * 100; //make it double baru can x 100
//     std::cout <<score << "%";
//     return 0;
// }

// cout << (insertion operator)
// cin >> (extraction operator)

// int main(){

//     std::string name; 
//     int age; 

//     std::cout << "What's is your age: ";
//     std::cin >> age;   // supposed have new line character if got cin followed by a getline // we don't want

//     std::cout << "What's you full name: ";
//     // std::cin >> name; // cin = character input 
//     // if including name that have spaces , need to use getline functon 
//     std::getline(std::cin >> std::ws ,name); // ws = white space 


//     std::cout << "Hello " << name << '\n';
//     std::cout << "You are " << age << " years old";

//     return 0;
// }

// int main(){

//     double x = 3.99 ; 
//     double y = 4 ; 
//     double z;

//     // z = std::max(x,y);
//     // z = pow(2,4); // 2 power of 4 
//     // z = sqrt(9);
//     // z = abs(-3) //absolute value function // positive value of that number
//     // z = round(x);
//     // z = ceil(x);
//     z = floor(x);

//     std::cout << z;

//     return 0;
// }

// int main(){

//     double a ; 
//     double b ; 
//     double c ; 

//     std::cout << "Enter side A: ";
//     std::cin >> a ; 

//     std::cout << "Enter side B: ";
//     std::cin >> b ; 

//     a = pow(a,2);
//     b = pow(b,2);
//     c = sqrt(a+b);

//     // c = sqrt(pow(a,2) + pow(b,2));
//     std::cout << "Side C: " << c; 
//     return 0;
// }

// int main(){ 

//     // if statements = do something if a condition is true. 
//     // if not, then don't do it

//     int age; 

//     std::cout << "Enter your age: ";
//     std::cin >> age;

//     if(age >= 100){
//         std::cout << "You are too old to enter this site";
//     }
//     else if(age >= 18){
//         std::cout << "Welcome to the site!";
//     }
//     else if(age < 0){
//         std::cout << "You haven't been born yet" ; 
//     }
//     else{
//         std::cout << "You are not old enough to enter!";
//     }

//     return 0;
// }

// int main(){
//     // switch = alternative to using many 'else if' statements 
//     // compare one value against matching cases 

//     int month; 
//     std::cout << "Enter the month (1-12):";
//     std::cin >> month;

//     switch(month){
//         case 1: 
//             std::cout << "It is January";
//             break;
//         case 2: 
//             std::cout << "It is February";
//             break;
//         case 3: 
//             std::cout << "It is March";
//             break;
//         case 4: 
//             std::cout << "It is April";
//             break;
//         case 5: 
//             std::cout << "It is May";
//             break;
//         case 6: 
//             std::cout << "It is June";
//             break;
//         case 7: 
//             std::cout << "It is July";
//             break;
//         case 8: 
//             std::cout << "It is August";
//             break;
//         case 9: 
//             std::cout << "It is September";
//             break;
//         case 10: 
//             std::cout << "It is October";
//             break;
//         case 11: 
//             std::cout << "It is November";
//             break;
//         case 12: 
//             std::cout << "It is December";
//             break;
//         default: // like else statement, if no matching case, then use default one 
//             std::cout << "Please enter in only numbers (1-12): ";
//     }
// }

// int main(){


//     char grade;

//     std::cout << "What letter grade: ";
//     std::cin >> grade;

//     switch(grade){
//         case 'A':
//             std::cout << "You did great!";
//             break;
//         case 'B':
//             std::cout << "You did good!";
//             break;
//         case 'C':
//             std::cout << "You did okay";
//             break;
//         case 'D':
//             std::cout << "You did not do good";
//             break; 
//         case 'F':
//             std::cout << "You FAILED!";
//             break;
//         default : 
//             std::cout<< "Please only enter in a letter grade (A-F): "; // here no need break because it is alr last 
//     }
//     return 0;
// }

// int main() {
//     char op;
//     double num1;
//     double num2;
//     double result;

//     std::cout << "***************** CALCULATOR *************\n";

//     std::cout << "Enter either (+ - * /): ";
//     std::cin >> op;

//     std:: cout << "Enter #1: ";
//     std:: cin >> num1;

//     std:: cout << "Enter #2: ";
//     std:: cin >> num2;

//     switch(op){
//         case '+':
//             result = num1 + num2 ; 
//             std::cout << "result: " << result << '\n';
//             break;

//         case '-':
//             result = num1 - num2 ; 
//             std::cout << "result: " << result << '\n';
//             break;

//         case '*':
//             result = num1 * num2 ; 
//             std::cout << "result: " << result << '\n';
//             break;

//         case '/':
//             result = num1 / num2 ; 
//             std::cout << "result: " << result << '\n';
//             break;
        
//         default: 
//             std::cout << "That wasn't a valid operator\n";
//             break;
//         }

//     std::cout << "******************************************\n";

//     return 0;
// }

// int main() { 

    //ternary operator ?: = replacement for an if/else statement 
    // condition ? expression1 : expression2;
    //               true           false 

    // int grade = 75; 
    // grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";
    // int number = 9;

    // number % 2 == 1 ? std::cout << "odd" : std::cout << "even";

    // bool hungry = true; 
    // hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    // // can just hungry ? mean to test alr true or false because your hungry ori alr is a boolean
//     std::cout << (hungry ? "You are hungry" : "You are full"); // determine boolean value then print the boolean value 

//     return 0;
// }

// int main(){

//     // && = check if two conditions are true 
//     // || = check if at least one of the two conditions is true 
//     // !  = reverses the logical state of the operand

//     int temp;
//     bool sunny = true;
    
//     std::cout << "Enter the temperature: ";
//     std::cin >> temp;

//     if(temp <= 0 || temp >= 30){
//         std::cout << "The temperature is good\n";
//     }
//     else{
//         std::cout << "The temperature is bad\n";
//     }

//     if(sunny){
//         std::cout << "It is sunny outside\n";
//     }
//     else{
//         std::cout << "It is cloudy outside\n";
//     }

//     return 0;
// }

// int main()
// {
//     double temp;
//     char unit;

//     std::cout << "**** TEMPERATURE COBVERSION ****\n";
//     std::cout << "F = Fahrenheit\n";
//     std::cout << "C = Celsius\n";
//     std::cout << "What unit would you like to convert to: ";
//     std::cin >> unit; 

//     if (unit == 'F' || unit == 'f'){
//         std::cout << "Enter the temperature in Celsius: ";
//         std::cin >> temp;

//         temp = (1.8 * temp) + 32.0;
//         std::cout << "Temperature is: " << temp << "F\n";
//     }
//     else if (unit == 'C' || unit == 'c'){
//         std::cout << "Enter your temperature in Fahrenheit: ";
//         std::cin >> temp;

//         temp = (temp -32) / 1.8;
//         std::cout << "Temperature is: " << temp << "C\n";
//     }
//     else{
//         std::cout << "Please enter in only C or F\n";
//     }

//     std::cout << "********************************";

//     return 0;
// }

// int main()
// {
//     std::string name;


//     while(1==1){ //infinite loop 1 always == 1 // while condition u stated remains true, it will execute
//         std::cout << "Enter your name: ";
//         std::getline( std::cin,name);
//     }

//     std::cout << "Hello " << name;

//     return 0;
// }

// int main(){

    // do while loop = do some block of code first 
    // THEN repeat again if condition is true 

    // int number;

    
    // std::cout << "The # is: " << number;
    // std::cin >> number; 

    // while(number < 0){ // haven't assigned value yet, it is defaulting and it just 0 , condition false 
    //     std::cout << "Enter a positive #: ";
    //     std::cin >> number; 
    // }

    //OR 

//     do{
//         std::cout << "Enter a positive # : ";
//         std::cin >> number;
//     }while(number < 0);
//     // do the the block first then if the statement at the bottom true, then will loop again 
//     std::cout << "The # is : " << number;

//     return 0;
// }

// int main(){

//     for(int i = 10; i >= 0; i-=1){ // do untik i >=0, mean if < 0 then will not loop
//         std::cout << i << '\n';
//     }

//     std::cout << "HAPPY NEW YEAR!\n";
//     // once skip the for loop, execute this 

//     return 0;
// }

// int main(){
//     // break = break out of a loop
//     // continue = skip current iteration 
//     // loop != iteration

//     for(int i = 0; i <= 20; i++){
//         if(i == 13){
//             continue;
//         }
//         if( i == 19){
//             break;
//         }
//         std::cout << i << '\n';
//     }
//     //skip number 13 

//     return 0;
// }

// nestled loop

// int main(){

//     int rows; 
//     int columns; 
//     char symbol;

//     std::cout << "How many rows?: ";
//     std::cin >> rows;

//     std::cout << "Hpw many columns: ";
//     std::cin >> columns;

//     std::cout << "Enter a symbol to use: ";
//     std::cin >> symbol;

//     for(int i = 1; i <= rows ;i++){
//         for(int j = 1;  j <= columns; j++){
//         std::cout << symbol << ' ';
//         }
//         std::cout << '\n';
//     }
//     return 0;
// }

// int main(){
//     // pseudo-random = NOT truly random (but close)

//     srand(time(NULL));

//     int num1 = (rand() % 6) + 1; // modulus range of number < range so need plus one 
//     // the numbers divded by six then take the remainder // 
//     // random number from 0 - 32767
//     int num2 = (rand() % 6) + 1;
//     int num3 = (rand() % 6) + 1;

//     std::cout << num1 << '\n';
//     std::cout << num2 << '\n';
//     std::cout << num3 << '\n';

//     return 0;
// }

// int main(){
//     srand(time(0));
//     int randNum = rand() % 5 + 1 ;

//     switch(randNum){
//         case 1: std::cout << "You win a bumper sticker!\n";
//                 break;
//         case 2: std::cout << "You win a tshirt!\n";
//                 break;
//         case 3: std::cout << "You win a free lunch!\n";
//                 break;
//         case 4: std::cout << "You win a gift card!\n";
//                 break;
//         case 5: std::cout << "You win a concert ticket!\n";
//                 break;
//     }
//     return 0;
// }

// int main(){

//     int num;
//     int guess; 
//     int tries = 0;

//     srand(time(NULL));
//     num = (rand() % 10) + 1;

//     std::cout << "************ NUMBER GUESSING GAME *************\n";

//     do{ 
//         std::cout << "Enter a guess between 1 -10: ";
//         std::cin >> guess;
//         tries++;

//         if(guess > num){
//             std::cout << "Too high" << '\n';
//         }
//         else if (guess < num){
//             std::cout << "Too low" << '\n';
//         }
//         else{
//             std::cout << "CORRECT! # of tries: " << tries << '\n';
//         }
//         // run here all once

//     }while(guess!=num);

//     std::cout << "*******************************\n";
//     return 0;
// }