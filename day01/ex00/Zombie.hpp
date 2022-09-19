#pragma once
# include <iostream>


class Zombie{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie(std::string ZombieName);
		~Zombie();
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );
