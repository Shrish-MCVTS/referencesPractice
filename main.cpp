#include <iostream>
#include <random>
#include <vector>

void multiply(int& a);
void lower(std::string& s);
double randamize(double b);
void addele(std::vector<int>& c);


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

    std::vector<int> v = {1,2,3};
    for(int i:v) std::cout << i << std::endl;
    addele(v);
    for(int i:v) std::cout << i << std::endl;

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

void addele(std::vector<int>& c){
    c.push_back(1);
    c.push_back(1);
    c.push_back(1);
}
