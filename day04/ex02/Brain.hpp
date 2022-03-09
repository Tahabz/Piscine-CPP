#if !defined(BRAIN_CPP)
#define BRAIN_CPP

#include <iostream>

class Brain
{
private:
	std::string _ideas[100];

public:
	Brain();
	~Brain();
	Brain(const Brain &src);
	Brain &operator=(const Brain &src);

private:
};

#endif // BRAIN_CPP
