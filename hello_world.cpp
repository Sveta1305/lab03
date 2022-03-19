#include <iostream>

int main(){
char[200] name; // Имя пользователя,сделанный в гитхабе
std::cout << "Enter name user: " << std::endl;
std::cin >> name; // имя пользователя на сайте гитхаб
std::cout << "Hello world from " << name << " !" << std::endl;
return 0;
}
