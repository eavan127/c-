#include <iostream> // for basic input and output operation 
#include <vector> 
#include <cmath>
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()
#include <iomanip>

// void happyBirthday(std::string birthday_girl, int age){ //function // must declare the local variable also by using the parameters
//     std::cout << "Happy Birthday To " << birthday_girl << '\n'; //name is undeclared because the name is a local variable
//     std::cout << "Happy Birthday to dear " << birthday_girl << '\n';
//     std::cout << "Happy Birthday To " << birthday_girl << '\n';
//     std::cout << "You are " << age << " years old!\n" ;
// } // mean after vraible cannot use \n but after the string literal u can add 

// int main(){
//     // function = a block of reusable code 
//     std::string name = "eavan";
//     int age = 21;
//     happyBirthday(name,age); // call the function // passing argument

//     return 0;
// }

// // from top to dowm, better place the function at top because the compiler can recognize it 
// // to solve 
// // void happyBithrday(); put this at front first before main function
// // then write our code here 

// double square(double length); //a function decoration
// double cube(double length);


// int main(){
//     // return keyword = is to return a value back to the spot
//     //                  when you call the encompassing function 

//     double length = 5.0;
//     double area = square(length); // returned value will come here // asigned as value inside area variable
//     double volume = cube(length);
//     // here no need specify data type only, only put what argument u want to pass
//     std::cout << "Area: " << area << "cm^2\n";
//     std::cout << "Volume: " << volume << "cm^3\n";

//     return 0;
// }

// double square(double length){
//     return (length * length);
// }

// double cube(double length){
//     return (length * length * length);
// }
// if returning a double data type value, then need to change the void to double 
// change the fucntion decoration as well 

// std::string concatStrings(std::string string1, std::string string2); // function decoration 
// // why use std::string because u want to return string in this time, just now double 

// int main(){

//     std::string firstName = "eavan";
//     std::string lastName = "tan";
//     std::string fullName = concatStrings(firstName, lastName); // call then function 
 
//     std::cout << "Hello " << fullName;

//     return 0;
// }

// std::string concatStrings(std::string string1, std::string string2){ 
//     // declare string1 and string2 baru can assign them to new variable 
//     return string1 + "  " + string2;
// }

// void bakePizza();
// void bakePizza(std::string topping1);
// void bakePizza(std::string topping1, std::string topping2);
// // here also need to add, how many functions then how many decorations 

// int main(){
//     bakePizza("peperoni"); 
//     // how many parameters, then compiler u know which fcuntion are u using, one parameer then will
//     // use then fcuntion that have only one parameter

//     return 0;
// }

// void bakePizza(){
//     std::cout << "Here is your pizza!\n";
// }
// void bakePizza(std::string topping1){
//     std::cout << "Here is your " << topping1 << " pizza!\n";
// }
// // can same function name, but must have different parameters to differentiate it 
// // function name + parameters are a functions' signatures 
// // void function is only se then no value to be returned

// void bakePizza(std::string topping1, std::string topping2){
//     std::cout << "Here is your " << topping1 << "and" << topping2 << " pizza!\n";
// }

// int myNum = 3; 
// // global variable 

// void printNum();

// int main(){
//     // local variables = declared inside a function or a block {}
//     // global variables = declared outside of all functions // declared at the top of the program
    
//     int myNum =1; // also a local variable 
//     printNum();
//     std::cout << ::myNum << '\n';
//     // :: scope resolution operator = instead of using local the compiler will use global variable

//     return 0;
// }

// void printNum(){ // here from one local pass to another local also need to declare
//    int myNum = 2; // local variable 
//    std::cout << myNum << '\n';
// }
// a function will use a narrower variable first, use local first

// void showBalance(double balance);
// double deposit();
// double withdraw(double balance);

// int main(){
//     double balance = 123.01; 
//     int choice =0 ;

//     do{
//         std::cout << "****************\n";
//         std::cout << "ENTER YOUR CHOICE: \n";
//         std::cout << "****************\n";
//         std::cout << "1. Show Balance\n";
//         std::cout << "2. Deposit Money\n";
//         std::cout << "3. Withdraw Money\n";
//         std::cout << "4. Exit\n";
//         std::cin >> choice; 

//         std::cin.clear();
//         //reset if fails to intepret input 
//         fflush(stdin); // clear the input buffer clear the standard input  

//         // if the user types a letter when your program expects a number, 
//         // cin goes into a fail state and won’t read more input until you call .clear().

//         switch(choice){
//             case 1: showBalance(balance);
//                     break;
//             case 2: balance += deposit();
//                     showBalance(balance);
//                     break;
//             case 3: balance -= withdraw(balance);
//                     showBalance(balance);
//                     break;
//             case 4: std::cout << "Thanks for visiting!";
//                     break;
//             default: std::cout << "Invalid choice"; // other than number then will got buffer
//         }
//     }while(choice != 4); // as long as the user didn't exit, then will continue the loop

//     return 0;
// }

// void showBalance(double balance){
//     std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n' ;
// }

// double deposit(){
//     double amount = 0 ;
//     std::cout << "Enter amount to be deposited: " ; 
//     std::cin >> amount;

//     if (amount > 0){
//         return amount; // return to be plus with balance
//     }
//     else{
//         std::cout << "That's not a valid amount: ";
//         return 0;
//     }
// }

// double withdraw(double balance){
//     double amount = 0 ; 

//     std::cout << "Enter amount to be withdrawn: ";
//     std::cin >> amount ;

//     if(amount > balance){
//         std::cout << "Insufficient funds\n";
//         return 0; //return the balance is zero, make it back to ori balanace only, nothing to be minus
//     }
//     else if (amount < 0){
//         std::cout << "That's not a valid amount\n";
//         return 0; // every result must have a return
//     }
//     else{
//         return amount;
//     }
// }

// char getUserChoice();
// char getComputerChoice();
// void showChoice(char choice);
// void chooseWinner(char player, char computer);

// int main(){
//     char player; 
//     char computer; 

//     player = getUserChoice();
//     std::cout << "Your choice: ";
//     showChoice(player); // r / p/ s

//     computer = getComputerChoice();
//     std::cout << "Computer's choice: "; // no line break so will have display right beside 
//     showChoice(computer);

//     chooseWinner(player,computer);
//     return 0;
// }

// char getUserChoice(){
//     char player ; // just use same name but diferent insdie the main function one
//     std::cout << "Rock-Paper-Scissors Game!\n";

//     do{
//         std::cout << "Choose one of the following\n";
//         std::cout << "*************************\n";
//         std::cout << "'r' for rock\n";
//         std::cout << "'p' for paper\n";
//         std::cout << "'s' for scissors\n";
//         std::cin >> player ;
//     }while(player != 'r' && player != 'p' && player != 's');

//     return player;
// }

// char getComputerChoice(){
//     srand(time(NULL)); // or 0 also can
//     int num = (rand() % 3) + 1;

//     switch(num){
//         case 1 : return 'r'; // no need to break because once we return we alr break
//         case 2 : return 'p';
//         case 3 : return 's';
//     }
//     return 'r'; //safe net
// }

// void showChoice(char choice){
//     switch(choice){
//         case 'r' : std::cout << "Rock\n";
//         break;
//         case 'p' : std::cout << "Paper\n";
//         break;
//         case 's' : std::cout << "Scissors\n";
//         break;
//     }
// }

// void chooseWinner(char player, char computer){
//     switch(player){
//         case 'r':   if(computer == 'r'){
//                         std::cout << "It's a tie!\n";
//                     }
//                     else if (computer == 'p'){
//                         std::cout << "You lose!\n";
//                     }
//                     else{
//                         std::cout << "You win!\n";
//                     }
//                     break;
//         case 'p':   if(computer == 'p'){
//                         std::cout << "It's a tie!\n";
//                     }
//                     else if (computer == 's'){
//                         std::cout << "You lose!\n";
//                     }
//                     else{
//                         std::cout << "You win!\n";
//                     }
//                     break;
//         case 's':   if(computer == 's'){
//                         std::cout << "It's a tie!\n";
//                     }
//                     else if (computer == 'r'){
//                         std::cout << "You lose!\n";
//                     }
//                     else{
//                         std::cout << "You win!\n";
//                     }
//                     break;    
//     }        
// }

// int main(){
//     //array = a data structure that can hold multiple values 
//     //        values are accessed by an index number 
//     //        "kind of like a variable that holds multiple values"

//     // std::string cars[] = {"Corvette", "Mustang" , "Camry"};

//     std::string cars[3];

//     cars[0] = "Camero";
//     cars[1] = "Mustang";
//     cars[2] = "Camry";

//     std::cout << cars[0] << '\n'; // will display memory address, have to access through index number
//     std::cout << cars[1] << '\n';
//     std::cout << cars[2] << '\n';

//     return 0;
// }

// int main(){

//     double prices[] = {5.00,7.50,9.99,15.00};

//     std::cout << prices[0] << '\n';
//     std::cout << prices[1] << '\n';
//     std::cout << prices[2] << '\n';
//     std::cout << prices[3] << '\n';

//     return 0;
// } // u can decide to create an array variable then after assign it later

// int main(){
//     // sizeof() = determines the size in bytes of a: 
//     //            variables, data type, class, objects, etc.

//     std::string name = "Bro Code is aweseome"; 
//     double gpa = 2.5; 
//     char grade = 'F';
//     bool student = true;
//     char grades[] = {'A','B','C','D','E','F'};
//     std::string students[] = {"Spongebob","Patrick","Squidward"};


//     std::cout << sizeof(gpa) << "bytes\n";
//     std::cout << sizeof(name) << "bytes\n";
//     std::cout << sizeof(grade) << "bytes\n";
//     std::cout << sizeof(student) << "bytes\n";
//     std::cout << sizeof(grades) << "bytes\n";
//     std::cout << sizeof(grades)/sizeof(char) << "elements\n";
//     std::cout << sizeof(students) / sizeof(std::string) << "elements\n";

//     return 0;
// }

// int main(){

//     // std::string students [] = {"Spongebob","Patrick","Squidward","Sandy"};
//     char grades[] = {'A','B','C','D','F'};

//     // std::cout << students[0] << '\n'; 
//     // std::cout << students[1] << '\n'; 
//     // std::cout << students[2] << '\n'; 

//     for(int i = 0; i < sizeof(grades)/sizeof(char); i++){ // bytes of the array / data type byte
//         std::cout << grades[i] <<'\n';
//     }
//     return 0;
// }


// int main(){
//     //foreach loop = loop that eases the travelsal over an iterable data set
    
//     // std::string students[] = {"Spongebob","Patrick","Squidward","Sandy"};
//     int grades[] = {65,72,81,93};

//     // for(std::string student : students){ //data set, what name u want, your variable name
//     //     std::cout << student << '\n';
//     // }

//     for(int grade : grades){
//         std::cout << grade << '\n'; // for every grade in grades 
//     }
//     return 0;
// }

// double getTotal(double prices[], int size);

// int main(){

//     double prices[] = {49.99,15.05,75,9.99};
//     int size = sizeof(prices)/sizeof(prices[0]);
//     double total = getTotal(prices,size); // here argument no need []

//     std::cout << "$" << total;

//     return 0;
// }

// double getTotal(double prices[],int size){ //here need []
//     double total = 0;

//     for(int i = 0; i < size; i++){
//         total += prices[i];
//     }
//     return total;
// }

// int searchArray(std::string foods[], int size, std::string element);

// int main(){

//     // int numbers[] = {1,2,3,4,5,6,7,8,9,10};
//     std::string foods[] = {"pizza","hamburger","hotdog"};
//     int size = sizeof(foods)/sizeof(foods[0]);
//     int index; 
//     std::string myFood;

//     std::cout << "Enter element to search for: " << '\n';
//     std::getline(std::cin, myFood);

//     index = searchArray(foods, size, myFood);

//     if(index != -1){
//         std::cout << myFood << " is at index " << index;
//     }
//     else{
//         std::cout << myFood << " is not in the array";
//     }

//     return 0;
// }
// int searchArray(std::string foods[], int size, std::string element){ // change name alr 
//     for(int i = 0; i < size; i++){ // not int == 0 only when to comapre baru use == 
//         if(foods[i] == element){
//             return i;
//         }
//     }
//     return -1; // if -1 mean smtg is not found 
// }

// void sort(int array[], int size);

// int main(){
//     int array[] = {10,1,9,2,8,3,7,4,6,5};
//     int size = sizeof(array) / sizeof(array[0]);

//     sort(array, size);

//     for(int element : array){
//         std::cout << element << " "; 
//     }

//     return 0;


// }
// void sort(int array[], int size){
//     int temp; 
//     for(int i = 0; i < size - 1 ; i++){ // because we dont need to compare the smallest number
//         for(int j = 0 ; j < size -i -1 ; j++){ // no need to compare the number we alr compare 
//             if (array[j] > array[j+1]){
//                 temp = array[j]; //larger number = temp
//                 array[j] = array[j+1];
//                 array[j+1] = temp ; // move the larger number to right // move the next number to left to be 
//                 //compared with another number 
//             }
//         }
//     }
// }

// int main(){
    // fill() = Fills a range of elements with a specified value 
    //        = fill(begin,end,value);

    // std::string foods[10];

    // fill(foods, foods + 10, "pizza"); //beginning address of data structure, the array name + the size of array 

    // for(std::string food : foods){
    //     std::cout << food << '\n';
    // }

//     const int SIZE = 9;
//     std::string foods[SIZE];

//     fill(foods, foods + (SIZE/3), "pizza"); //beginning address of data structure, the array name + the size of array 
//     fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburgers"); //begin from the left we have // where to end // what to fill
//     fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog"); //where to start // where to end 

//     for(std::string food : foods){
//         std::cout << food << '\n';
//     }
//     return 0;
// }

// int main(){

//     std::string foods[5]; //we can change size but the max size is five // this is a static array 
//     int size = sizeof(foods)/sizeof(foods[0]);
//     std::string temp;

//     for(int i = 0; i < size; i++){
//         std::cout << "Enter a food you like or 'q' to quit: " << i << ": ";
//         std::getline(std::cin, temp);
//         if(temp == "q"){
//             break;
//         }
//         else{
//             foods[i] = temp; // only assign the input into the food array after tested 
//         }
//     }
//     std::cout << "You like the following food:\n";

//     for(int i = 0; !foods[i].empty(); i++){ // will continue as long as the food is not empty 
//         // the second statement is to make decision true or false 
//         std::cout << foods[i] << '\n';
//     }
//     return 0;
// }

// int main(){

//     std::string cars[][3] = {{"Mustang","Escape","F-150"}, // row then column, two sqaure bracket indicate 2 dimensions array
//                             {"Corvette","Equinox","Silverado"},
//                             {"Challenger,Durango","Ram 1500"}};
    
    // std::cout << cars[0][0] << " ";
    // std::cout << cars[0][1] << " ";
    // std::cout << cars[0][2] << "\n";

    // std::cout << cars[1][0] << " ";
    // std::cout << cars[1][1] << " ";
    // std::cout << cars[1][2] << "\n";

    // std::cout << cars[2][0] << " ";
    // std::cout << cars[2][1] << " ";
    // std::cout << cars[2][2] << "\n";

//     int rows = sizeof(cars) / sizeof(cars[0]); // size of array / size of the rows 
//     int columns = sizeof(cars[0]) / sizeof(cars[0][0]); // size of one row / size of one of the elements in that row 

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < columns ; j++){
//             std::cout << cars[i][j] << " ";
//         }
//         std::cout << '\n';
//     }
//     return 0;
// }

// int main(){
//      std::string questions[] = {
//         "1. What year was C++ created?: ",
//         "2. Who invented C++?: ",
//         "3. What is the predecessor of C++?: ",
//         "4. Is the Earth flat?: "
//     };

//     std::string options[][4] = {
//         {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
//         {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John", "D. 2"},
//         {"A. C", "B. C+", "C. C--", "D. B++"},
//         {"A. yes", "B. no", "C. sometimes", "D. what's Earth"}
//     };

//     char answerKey[] = {'C','B','A','B'};

//     int size = sizeof(questions)/sizeof(questions[0]);
//     char guess; 
//     int score =0; 

//     for(int i = 0; i < size ; i++){
//         std::cout << "******************\n";
//         std::cout << questions[i] << '\n';
//         std::cout << "******************\n";

//         for(int j = 0 ; j < sizeof(options[i])/ sizeof(options[i][0]); j ++){
//             std::cout << options [i][j] << '\n';
//         }
//         std::cin >> guess ; 
//         guess = toupper(guess); //convert to uppercase 

//         if(guess == answerKey[i]){
//             std::cout << "CORRECT\n";
//             score ++;
//         }
//         else{
//             std::cout << "WRONG!\n";
//             std::cout << "Answer: " << answerKey[i] << '\n';
//         }
//     }
//     std::cout << "******************\n";
//     std::cout << "RESULTS\n";
//     std::cout << "******************\n";
//     std::cout << "CORRECT GUESSES: " << score << '\n';
//     std::cout << "# of questions: " << size << '\n';
//     std::cout << "SCORE: " << (score/(double)size)*100 << "%" ; //change the size to double baru can make it 
//     //perform in decimal points after divided by score 

//     return 0;
// }

// int main(){

//     //memory addresss = a location in memory where data is stored 
//     //a memory address can accessed with & (address-of-operator)

//     std::string name = "Bro";
//     int age = 21; 
//     bool student = true;

//     std::cout << &name << '\n'; // put & then u can print the memory address  # all in hexadecimal 
//     std::cout << &age << '\n';
//     std::cout << &student << '\n';

//     return 0;
// }

// void swap(std::string &x , std::string &y);

// int main(){

//     std::string x = "Kool-Aid";
//     std::string y = "Water";
    
//     swap(x,y);

//     std::cout << "X: " << &x << '\n';
//     std::cout << "Y: " << &y << "\n\n"; // '\n' can use single if "\n\n" multi line need to use double
//     std::cout << "X: " << x << '\n';
//     std::cout << "Y: " << y << '\n';
    
//     return 0;
// }
// void swap(std::string &x , std::string &y){
//     std::string temp;

//     temp = x ; 
//     x = y ; 
//     y = temp;
//     //here we are switching two copy, not the original value 
//     // if want change the ori, then u need to pass by reference, 
//     // default is pass by value 
    
//     std::cout << "X: " << &x << '\n';
//     std::cout << "Y: " << &y << "\n\n";
// }

// int main(){

//     // const parameter = parameter that is effectively read-only; 
//     // code is more secure & converys intent 
//     // useful for references and pointers 

//     std::string name = "Bro";
//     int age = 21;

//     return 0;
// }
// void printInfo(const std::string &name, const int &age){ //make these paraeters read only // more secured, and 
//     // ask people dont change it // cannot change the address as well. 
//     name = " ";
//     age = 0; // dont give anyone to modified the variable 
//     std::cout << name << '\n';
//     std::cout << age << '\n';
// }

// Luhn algorithm 
// 1. Double ebery second digit from right to left 
// if doubled number is 2 digits, split them;
// 2. ad all single digits from step 1 
// 3. add all odd numbered didgits from right to left 
//4. sum results from steps 2 and 3 
// if step 4 is divisible by 10, # is valid

// int getDigit(const int number);
// int sumOddDigits(const std::string cardNumber);
// int sumEvenDigits(const std::string cardNumber);
// int main(){
    
//     std::string cardNumber; 
//     int result = 0; 

//     std::cout << "Enter a credit card #: ";
//     std::cin >> cardNumber;

//     result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

//     if(result % 10 == 0){
//         std::cout << cardNumber << " is valid";
//     }
//     else{
//         std::cout << cardNumber << " is not valid";
//     }

//     return 0;

// }
// int getDigit(const int number){
//     return number % 10 +(number / 10 % 10);
// }
// int sumOddDigits(const std::string cardNumber){
//     int sum = 0;
//     for(int i = cardNumber.size() - 1; i >= 0 ; i -=2){
//         sum += getDigit(cardNumber[i]);
//     }

//     return sum;
// }
// int sumEvenDigits(const std::string cardNumber){
//     int sum = 0;
//     for(int i = cardNumber.size() - 2; i >= 0 ; i -=2){
//         sum += getDigit((cardNumber[i] -'0')* 2 ); // card char is in form of char, so we need to convert it from ASCII code to single int 
//     }

//     return sum;
// }

// int main(){
//     // pointers = variable that stores a memory address of another variable 
//     // sometimes it's easier to work with an address 

//     // & address-of operator 
//     // * dereference operator 

//     std::string name = "Bro";
//     int age = 21;
//     std::string freePizzas[5] = {"Pizza1","pizza2","pizza3","pizza4","pizza5"};

//     std::string *pName = &name; 
//     int *pAge = &age;
//     // std::string pFreePizzas = &freePizzas; no need because array is alr an address, no need assign it an address and display it by changing it // dereference
//     // back to the ori code 

//     std::cout << *pName << '\n'; //dereference mean to display it back to ori 
//     std::cout << *pAge << '\n';
//     std::cout << freePizzas << '\n';

//     return 0;
// }

// int main(){

//     // NUll value = a special value that means something has no value
//     // when a pointer is holding a null value, 
//     // that pointer is not pointing at anything( null pointer);

//     // nullptr = keyword represents a null pointer literal

//     // nullptrs are helpful when determining if an address 
//     // was sccessfully assigned to a pointer

//     // When using pointers, be careful that your code isn't 
//     // dereferencing nullptr or pointing to free memory 
//     // this will cause undefined behavior 

//     int *pointer = nullptr; // no pointer
//     int x = 123;

//     //if null value, then if u dereference then will have error 

//     pointer = &x; // we have pointer pointer to address of x 

//     if(pointer == nullptr){
//         std::cout << "address is not assigned!\n";
//     }
//     else{
//         std::cout << "address was assigned!\n";
//         std::cout << *pointer;
//     }
//     return 0;
// }

// void drawBoard(char *spaces);
// void playerMove(char *spaces, char player);
// void computerMove(char *spaces, char computer);
// bool checkWinner(char *spaces, char player, char computer);
// bool checkTie(char *spaces);

// int main() {
//     std::srand(static_cast<unsigned>(std::time(nullptr)));

//     char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
//     char player = 'X';
//     char computer = 'O';
//     bool running = true;

//     drawBoard(spaces);

//     while (running) {
//         // Player turn
//         playerMove(spaces, player);
//         drawBoard(spaces);
//         if (checkWinner(spaces, player, computer)) break;
//         if (checkTie(spaces)) break;

//         // Computer turn
//         computerMove(spaces, computer);
//         drawBoard(spaces);
//         if (checkWinner(spaces, player, computer)) break;
//         if (checkTie(spaces)) break;
//     }

//     return 0;
// }

// void drawBoard(char *spaces) {
//     // indices: 0 1 2
//     //          3 4 5
//     //          6 7 8
//     std::cout << "\n"
//               << "     |     |     \n"
//               << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "\n"
//               << "_____|_____|_____\n"
//               << "     |     |     \n"
//               << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "\n"
//               << "_____|_____|_____\n"
//               << "     |     |     \n"
//               << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "\n"
//               << "     |     |     \n\n";
// }

// void playerMove(char *spaces, char player) {
//     int number;
//     while (true) {
//         std::cout << "Enter a position (1-9): ";
//         if (!(std::cin >> number)) {
//             std::cin.clear();
//             std::cin.ignore(1'000'000, '\n');
//             std::cout << "Invalid input. Please enter a number 1-9.\n";
//             continue;
//         }
//         if (number < 1 || number > 9) {
//             std::cout << "Out of range. Choose 1-9.\n";
//             continue;
//         }
//         int idx = number - 1;  // map 1-9 to indices 0-8
//         if (spaces[idx] == ' ') {
//             spaces[idx] = player;
//             break;
//         } else {
//             std::cout << "That spot is taken. Try again.\n";
//         }
//     }
// }

// void computerMove(char *spaces, char computer) {
//     // simple random AI: pick a free spot at random
//     int idx;
//     if (checkTie(spaces)) return; // no move possible
//     do {
//         idx = std::rand() % 9;
//     } while (spaces[idx] != ' ');
//     spaces[idx] = computer;
//     std::cout << "Computer chose position " << (idx + 1) << ".\n";
// }

// bool checkWinner(char *spaces, char player, char computer) {
//     int wins[8][3] = {
//         {0,1,2},{3,4,5},{6,7,8}, // rows
//         {0,3,6},{1,4,7},{2,5,8}, // cols
//         {0,4,8},{2,4,6}          // diagonals
//     };

//     for (auto &line : wins) {
//         char a = spaces[line[0]], b = spaces[line[1]], c = spaces[line[2]];
//         if (a != ' ' && a == b && b == c) {
//             if (a == player) {
//                 std::cout << "You win! 🎉\n";
//             } else if (a == computer) {
//                 std::cout << "Computer wins! 🤖\n";
//             }
//             return true;
//         }
//     }
//     return false;
// }

// bool checkTie(char *spaces) {
//     for (int i = 0; i < 9; ++i)
//         if (spaces[i] == ' ')
//             return false;
//     std::cout << "It's a tie! 🤝\n";
//     return true;
// }

// int main(){

//     // dynamic memory = Memory that is allocated after the program 
//     // is already compiled and running 
//     // use the 'new' operator to allocate
//     // memory in the heap rather than the stack 

//     // useful when we don't knnow how much memory 
//     // we will neeed. makes our programs much more flexible; 
//     // especially when accepting user input 

//     int *pNum = NULL;

//     pNum = new int;  // ltr u can store the int 

//     *pNum = 21; // store 21 into the new int address // in a dereference form // like a normal variable 

//     std::cout << "address: " << pNum << '\n'; // without * act like the address memory 
//     std::cout << "value: " << *pNum << '\n'; // act like a variable

//     delete pNum;

//     return 0;
// }

// int main(){

//     char *pGrades = NULL;
//     int size;

//     std::cout << "How many grades to enter in?: " ; 
//     std::cin >> size;

//     pGrades = new char[size]; // can assigned to any data type, int, char in array also can 
    
//     for(int i = 0; i < size; i++){
//         std::cout << "Enter grade # " << i + 1 << ": ";
//         std::cin >> pGrades[i];
//     }

//     for(int i = 0; i < size ; i ++){
//         std::cout << pGrades[i] << " ";
//     }

//     delete[] pGrades; // can delete the pointer memory so can save space especially getting large user input 

//     return 0;
// }

// void walk(int steps);
// int main(){

//     //recursion = a programming technique where a function invokes itself from within 
//     // break a complex content into a repeateable single step

//     //(iterative vx recursive)
//     // advantages = less code and is cleaner 
//     // useful for sorting and searching algorithms 

//     // disadvantages = uses more memory 
//     //                 slower 

//     walk(100);
    

//     return 0;
// }
// void walk(int steps){
//     if(steps > 0){
//         std::cout << "You take a step!\n";
//         walk(steps-1); // revoke the walk function within itself ziji jiao ziji // use more memory 
//         // if we don't minus, it will have stack over flow, when your stack is over loaded
//     }
// }

// int factorial(int num);
// int main(){

//     std::cout << factorial(10);

//     return 0;
// }
// // int factorial(int num){
// //     int result = 1; 
// //     for(int i = 1; i <= num; i ++){
// //         result = result * i;
// //     }
// //     return result;
// // }
// int factorial(int num){
//     if(num > 1){
//         return num * factorial(num-1);
//     }
//     else{
//         return 1;
//     }
// }

// int max(int x, int y){
//     return (x > y) ? x : y; // if x > y ? if so return x , else return y
// }
// //over loaded function 
// double max(double x, double y){
//     return (x > y) ? x : y; // if x > y ? if so return x , else return y
// }
// char max(char x, char y){
//     return (x > y) ? x : y; // if x > y ? if so return x , else return y
// } //not efficient 

//function template // all data type also can use 
// template <typename T, typename U> //tell compiler what T means //decoration
// auto max(T x, U y){ // imagine T = Thing  // change one to U so it can receive up to two data types 
//     //auto is the keyword tell compile to use which data types is supposed to be printed, then jiu use that
//     return (x > y) ? x : y;
// }

// int main(){

//     // function template = describes what a function looks like 
//     // can be used to generate as many overloaded fucntions
//     // as needed, each using different data types

//     std::cout << max(1.1,2.2) << '\n'; //will choose which function to be used 

//     return 0;
// }

// struct student{
//     std::string name;
//     double gpa;
//     bool enrolled; // variable in here is called members and can be accessed by using '.'
// };

// int main(){

//     //struct = A structure that group related variables under one name 
//     // structs can contain many differents data types(string,int etc)
//     // variables in a struct are known as "members"
//     //members can be access with. "Class Member Access "

//     student student1; 
//     student1.name = "Spongebob";
//     student1.gpa = 3.2;
//     student1.enrolled = true;

//     std::cout << student1.name << '\n';
//     std::cout << student1.gpa << '\n';
//     std::cout << student1.enrolled << '\n'; //enrolled is true, so display 1 

//     student student2;
//     student2.name = "Patrick";
//     student2.gpa = 2.1;
//     student2.enrolled = true; 

//     std::cout << student2.name << '\n';
//     std::cout << student2.gpa << '\n';
//     std::cout << student2.enrolled << '\n'; //enrolled is true, so display 1 

//     student student3;
//     student3.name = "Squidward";
//     student3.gpa = 3.5;
//     student3.enrolled = false; 

//     std::cout << student3.name << '\n';
//     std::cout << student3.gpa << '\n';
//     std::cout << student3.enrolled << '\n'; //enrolled is true, so display 1 

//     return 0;
// }

// struct Car{
//     std::string model;
//     int year;
//     std::string color;
// };

// void printCar(Car &car);
// void paintCar(Car &car, std::string color);

// int main(){
//     Car car1;
//     Car car2;

//     car1.model = "Mustang";
//     car1.year = 2023;
//     car1.color = "red";
    
//     car2.model = "Corvette";
//     car2.year = 2024;
//     car2.color = "blue";

//     paintCar(car1, "silver");
//     paintCar(car2, "gold");

//     std::cout << &car1 << '\n';
//     printCar(car1);
//     std::cout << '\n';
//     printCar(car2);

//     return 0;

// }
// void printCar(Car &car){ //now become variable car pass by reference
//     std::cout << &car << '\n';
//     std::cout << car.model << '\n';
//     std::cout << car.year << '\n';
//     std::cout << car.color << '\n';
// }
// void paintCar(Car &car, std::string color){ // by refrence so change the ori color 
//     car.color = color;
// }

// enum Day {sunday = 0, monday =1, tuesday =2, wednesday =3, thursday =4, friday= 5, saturday=6}; 
// // make the string as like a int 
// // make compiler know their index 

// // enum Flavor {vanilla, chocolate, strawberry, mint};

// int main(){
//     //enums = a user-defined data type that consists 
//     //of paried named-integer constants.
//     // GREAT if you have a set of potential options 

//     Day today = friday; // access the enum first baru assign the variable need to be compared in switch case 
//     // it is chengxian as int so no need use string 

//     switch(today){
//         case sunday: std::cout << "It is Sunday!\n";
//                        break;
//         case monday: std::cout << "It is Monday!\n";
//                        break;
//         case tuesday: std::cout << "It is Tuesday!\n";
//                        break;
//         case wednesday: std::cout << "It is Wednesday!\n";
//                        break;
//         case thursday: std::cout << "It is Thursday!\n";
//                        break;
//         case friday: std::cout << "It is Friday!\n";
//                        break;
//         case saturday: std::cout << "It is Saturday!\n";
//                        break;
//     }
//     return 0;
// }

// class Human{
//     public:
//         std::string name = "Rick"; 
//         std::string occupation = "scientist"; 
//         int age = 70 ;
//      // public access modifier 

//         void eat(){
//             std::cout << "This person is eating\n";
//         }
//         void drink(){
//             std::cout << "This person is drinking\n";
//         }
//         void sleep(){
//             std::cout << "This person is sleeping\n";
//         }
// }; // rmb to put ; here 

// int main(){

//     // object = A collection of attributes nd methods 
//     // They can have characteristics and could perform actions 
//     // can be used to mimic real world items (ex. Phone, Book)
//     // Created from a class which acts as a "blue-print"

//     Human human1;
//     Human human2;

//     std::cout << human1.name << '\n';
//     std::cout << human1.occupation << '\n';
//     std::cout << human1.age << '\n';
//     std::cout << human2.name << '\n';
//     std::cout << human2.occupation << '\n';
//     std::cout << human2.age << '\n';

//     human1.eat();
//     human1.drink();
//     human1.sleep();

//     return 0;
// }

// class Car{
//     public:
//         std::string make;
//         std::string model;
//         int year;
//         std::string color;

//         void accelerate(){
//             std::cout << "You step on the gas!\n";
//         }
//         void brake(){
//             std::cout << "You step on the brakes!\n";
//         }
// };

// int main(){

//     Car car1;

//     car1.make = "Ford";
//     car1.model = "Mustang";
//     car1.year - 2023;
//     car1.color = "silver";

//     std::cout << car1.make << '\n';
//     std::cout << car1.model << '\n';
//     std::cout << car1.year << '\n';
//     std::cout << car1.color << '\n';

//     car1.accelerate();
//     car1.brake();
// }

// class Student{
//     public: 
//         std::string name;
//         int age;
//         double gpa;

//     //constructor have the same name as the class 
//     Student(std::string name,int age, double gpa){
//         this->name = name;
//         this->age = age ; 
//         this->gpa = gpa; 

//         // name = x 
//         // age = y 
//         // gpa = z
//     }
// };


// int main(){

//     //constructor = special method that is automatically called when an object is instantiated 
//     //useful for assigning values to attributes as arguments 

//     Student student1("Spongebob",25,3.2); 
//     Student student2("Patrick",40,1.5);
//     Student student3("Sandy",21,4.0);
//     // with constructor we no need to assign one by one like students3.name

//     std::cout << student1.name << '\n';
//     std::cout << student1.age << '\n';
//     std::cout << student1.gpa << '\n';

//     return 0;
// }

// class Car{
//     public:
//         std::string make;
//         std::string model;
//         int year;
//         std::string color;

//         Car(std::string make,std::string model,int year,std::string color){ // wth constructor 
//             // u can assign the argument to the attributes of the class 
//             this->make = make;
//             this->model = model;
//             this->year = year;
//             this->color = color; 
//         }
// };

// int main(){
//     Car car1("Chevy","Vorvette",2022,"blue");
//     Car car2("Ford","Mustang",2023,"Red");

//     std::cout << car1.make << '\n';
//     std::cout << car1.model << '\n';
//     std::cout << car1.year << '\n';
//     std::cout << car1.color << '\n';

//     return 0;
// }

// class Pizza{
//     public:
//         std::string topping1; 
//         std::string topping2;

//     Pizza(std::string topping1){
//         this->topping1 = topping1;
//     }
//     Pizza(std::string topping1,std::string topping2){
//         this->topping1 = topping1;
//         this->topping2 = topping2;
//     }
//     Pizza(){
//     }
// };

// int main(){
//     //overloaded constructor = multiple constructors w/ same name but different parameters
//     //                         allows for varying arguments when instantiating object;

//     Pizza pizza1("peperoni");
//     Pizza pizza2("mushroom","peppers");
//     Pizza pizza3; // must match with the parameters in the constructor at up 

//     std::cout << pizza1.topping1 << '\n';
//     return 0;
// }

// class Stove {
// private:
//     int temperature = 0;  // private variable (hidden from outside)

// public:
//     // Constructor: called when you create a Stove object
//     Stove(int temperature) {
//         setTemperature(temperature);  // use the setter to validate input
//     }

//     // Getter: makes private variable READABLE
//     int getTemperature() {
//         return temperature; // return the private variable that has been modified by the setter 
//         //this can access the private variable , but cannot modify 
//     }

//     // Setter: makes private variable WRITEABLE (with rules)
//     //this can modify the private variable 
//     void setTemperature(int temp) {
//         if (temp < 0) {
//             this->temperature = 0;
//         }
//         else if (temp >= 10) {
//             this->temperature = 10;
//         }
//         else {
//             this->temperature = temp;
//         }
//     }
// };


// int main(){
//     // abstraction = hiding unnecessary data from outside a class;
//     // getter = function that makes a private attributes READABLE;
//     // setter = function that mmakes a private attributes WRITEABLE;

//     Stove stove(5);

//     //stove.setTemperature(-3);

//     std::cout << "The temperature setting is: " << stove.getTemperature();
//     return 0;
// }


// class Animal{
//     public: 
//         bool alive = true; 
//     void eat(){
//         std::cout << "NOM NOM NOM\n";
//     }
// };

// class Dog : public Animal{
//     public: 

//     void bark(){
//         std::cout << "The dog goes woof!\n";
//     }
// }; // dog inherit from the animal class

// class Cat : public Animal{
//     public : 

//     void meow(){
//         std::cout << "The cat goes meow!\n";
//     }
// };

// int main(){
//     // inheritance = A class can receive attributes and method from another class
//     // Children classes inherit from a Parent class 
//     // Helps to reuse similiar code found within multiple classes 

//     Dog dog; 
//     Cat cat;
    
//     std::cout << dog.alive << '\n'; // return 1 because it is true 
//     cat.eat();
    
//     return 0;
// }

// class Shape{
//     public: 
//         double area;
//         double volume;
// };

// class Cube : public Shape{
//     public:
//         double side;
//     Cube(double side){
//         this->side = side;
//         this->area = side * side * 6; //also can use area because parent class got 
//         this->volume = side * side * side;
//     }

// };

// class Sphere : public Shape{
//     public:
//         double radius;
//     Sphere(double radius){
//         this->radius = radius;
//         this->area = 4 * 3.142 *(radius * radius);
//         this->volume = (4/3.0)*3.142*(radius* radius *radius);
//     }

// };

// int main(){
//     Cube cube(10);
//     Sphere sphere(5);

//     std::cout << "Area: " << cube.area << "cm\n";
//     std::cout << "Volume: " << cube.volume << "cm\n\n";

//     std::cout << "Area: " << sphere.area << "cm\n";
//     std::cout << "Volume: " << sphere.volume << "cm\n";

//     return 0;
// }


// int main(){
//     int x; 
//     int y;

//     std::cin >> x >> y;
//     if(x > 3 && x <= 10){
//         std::cout << x + y << std::endl;  // fixed here
//         x = x * y; 
//     }
//     std::cout << x << " " << y++ ;
//     return 0;
// }

