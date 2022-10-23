#include "Dog.hpp"
#include "Cat.hpp"



int main( void )
{
	Brain brain;


	std::string ideas[100] = {
								"meowiing...",
								"eating...",
								"sleeping...",
								"thinking....(WHY NOT?!)",
								"scratching...",
								"Getting upset for no reason...",
								"sdjkhdsak",
								"SseDjNunpK",
								"YSWkdwjyIM",
								"JEvDeIUjRs",
								"GWFCKXQLVF",
								"ESZHTEsLUm",
								"ugbWVMwACy",
								"UTQoxqEFUM"
							};

	for (int i = 0; i < 14; i++){
		brain.setIdea(ideas[i]);
	}

	Animal **animals = new Animal*[4];

	for (int i = 0; i < 4; i++){
		if (i < 2){
			animals[i] = new Dog;
		} else{
			animals[i] = new Cat;
		}
	}

	for (int i = 0; i < 4; i++){
		if (i == 0){
			std::cout << "-------------------DOG's SOUND--------------------"<< std::endl;
		}else if (i == 2) {
			std::cout << "-------------------CAT's SOUND--------------------"<< std::endl;
		}
		animals[i]->makeSound();
	}


	// Animal _animal;

	for (int i = 0; i < 4; i++)
		delete animals[i];
	
	delete[] animals;
}