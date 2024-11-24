#include <iostream>
#include <locale.h>

int main (int argc, char** argv){
setlocale(LC_ALL, "portuguese");
	
	std::cout << "Olá, mundo!\n";
	
	system("pause");
	
	return 0;	
}
