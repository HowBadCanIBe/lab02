// Объявляю библиотеки
#include <iostream>
#include <string>
// Функция main
int
main()
{
  // Ввод имени
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  // Печать hello world
  std::cout << "Hello, World! from " << name << std::endl;
  return 0;
}
