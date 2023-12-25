#include <iostream>
#include <cstdlib>
#include <ctime> //In the future we will link files and other whatevers. Tests where you include a cpp file with all of your varibles
#include <conio.h>
#include <istream>
#include <string>


int main(){

    std::srand(static_cast<unsigned int>(std::time(nullptr))); // is a time seeder so the srand fuction is being seeded by the time seen
    // as earth's universal time, and so what it does is assigins it's random mess into the unsigned to create chance.
    
     int result = std::rand() % 2; // this script makes the varible result the random number that is taken from the seeder and divides it.

 std::string name = "string";//your string has to have an std. XD
 char key; //handles all key inputs
 

 

 //orginization seperation
 std::cout << "Welcome to my first program, don't expect too much. I started coding three days ago.\n" <<std::endl;
 std::cout << "Here the hell we go, click your 'f' key to start\n";
 //
 
 key = _getch(); // getch manages user input basicly, key = user input. 

 if (key == 'f') //f should have these ''or else the censors think it's a varible.
 {
   std::cout << "hello, what is your name:\n"; std::getline(std::cin, name);

   if (name.empty()) 
   {
   std::cout << "Please enter your name..\n";
   }
   else
   {
    if (result == 0) {
        std::cout << "You have a stupid name.\n" << std::endl;
    } else {
        std::cout << "Nice name man.\n" << std::endl;
    }

   }
 }




  system("pause");
  return 0;
}