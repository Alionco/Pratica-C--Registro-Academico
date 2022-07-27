#include <iostream>

#include "ProfessorEngenheiro.hpp"
#include "Professor.hpp"
#include "Engenheiro.hpp"

int main(){
	ProfessorEngenheiro pe{"Maria", 11111111111,85, 40, 1234};

	std::cout << "Salario de Professor: " << pe.Professor::getSalario() << std::endl;
	std::cout << "Salario de Engenheiro: " << pe.Engenheiro::getSalario() << std::endl;
	std::cout << "Salario do ProfessorEngenheiro: " << pe.getSalario() << std::endl;

	return 0;
}