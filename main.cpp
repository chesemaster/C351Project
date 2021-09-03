#include <iostream>
#include <cstdlib>

/* This function converts kilometers into miles
 * Precondition: Parameter kilometers is given
 * Postcondition: Returns the mile count as a double */
double kilometersToMiles (int kilometers){
    double x = kilometers;
    return x * 0.62137;
}

/* This function produces a chart of values
 * Precondition: Prompts user for input of number of rows
 * Postcondition: Prints out the proper values with the help of the kilometerToMiles function */
void valueChart (){
    int rows;
    std::cout << "Enter a number: " << std::flush;
    std::cin >> rows;

    std::cout << "km   miles" << std::endl;
    for (int i = 1; i <= rows; i++){
        std::cout << i << "    " << kilometersToMiles(i) << std::endl;
    }
}

/* This function gives a random number and analyzes it
 * Precondition: Uses rand() from the cstdlib file
 * Postcondition: Prints out output based on its multiples and evenness */
void randomNumberGenerator (){
    int x = rand() % 5000;
    std::cout << "Random Number: " << x << std::endl;

    if ((x % 5) == 0){
        std::cout << "Multiple of 5: " << -x << std::endl;
    }
    else if ((x % 123) == 0) {
        std::cout << "Multiple of 123: " << x << std::endl;
    }
    else if ((x % 2) != 0){
        int sumX = 0;
        while (x > 0){
            sumX += x--;
        }
        std::cout << "Odd: " << sumX << std::endl;
    }
    else{
        while (((x % 2) == 0) && (x != 0)){
            x = x / 2;
        }
        std::cout << "Even: " << x << std::endl;
    }
}

/* This function prompts the user with a menu of options to display the effects of the other functions
 * Precondition: Grabs menu choice with cin
 * Postcondition: Continues menu directory until exited */
int main() {
    int input;
    std::cout << "Enter Index of Item \n [1] Kilometers To Miles \n [2] Value Chart \n [3] Random Number Generator \n [4] Exit \n Input: " << std::flush;
    std::cin >> input;
    while (input != 4) {
        switch (input) {
            case 1:
                int kilometers;
                std::cout << "Enter an amount of kilometers: " << std::flush;
                std::cin >> kilometers;
                std::cout << kilometers << " kilometers is " << kilometersToMiles(kilometers) << " miles." << std::endl;
                break;
            case 2:
                valueChart();
                break;
            case 3:
                randomNumberGenerator();
                break;
            default:
                break;
        }
        std::cout << std::endl;
        std::cout << "Enter Index of Item \n [1] Kilometers To Miles \n [2] Value Chart \n [3] Random Number Generator \n [4] Exit \n Input: " << std::flush;
        std::cin >> input;
    }
    return 0;
}
