#include <iostream>
#include <random>

void multiply(int& a);
void lower(std::string& s);
double randamize(double b);


int main(){

    std::string userString;
    std::cout << "Enter a string" << std::endl;
    std::cin >> userString;
    lower(userString);
    std::cout << userString << std::endl;

    int userInt;
    std:: cout << "Enter an int" << std::endl;
    std:: cin >> userInt;
    multiply(userInt);
    std:: cout << userInt << std::endl;

    double random;
    double randamizedNum;
    std:: cout << "Enter a number" << std::endl;
    std:: cin >> random;
    randamizedNum = randamize(random);
    std::cout << random << std::endl;
    std::cout << randamizedNum << std::endl;


    return 0;
}


double randamize(double b){
    b += rand()% 100 + 1;
    return b;
}
void multiply(int& a){
    a*=2;
}

void lower(std::string& s){
       for (char& c : s) {
        c = std::tolower(static_cast<unsigned char>(c));
    }
}
