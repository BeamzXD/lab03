// hello_world.cpp
// Простая программа для приветсвия пользователя

#inculde <iostream>

int main(){
	std::string name;
	std::cout << "Enter your name: "; // Запрос имени пользователя
	std::cin >> name; // Запись имени пользователя
	std::cout << "Hello world from " << name << "!" << std::endl; // Вывод на печать приветственного сообщения
	return 0;
}
