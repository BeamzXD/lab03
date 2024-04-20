// hello_world.cpp
// Простая программа для приветсвия пользователя

#inculde < iostream>

int
main()
{
  std::string name;
  std::cout << "Enter your name: "; // Prompting user for name
  std::cin >> name;                 // Taking input from user
  std::cout << "Hello world from " << name << "!"
            << std::endl; // Printing greeting message
  return 0;
