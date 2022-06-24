#ifndef BRAIN_H
#define BRAIN_H

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const &src);
		Brain &operator=(Brain const &src);
		~Brain();

	private:

	protected:
		std::string _ideas[100];

};

#endif
