#include "Karen.hpp"

int main(void)
{
	std::string s1 = "DEBUG";
	std::string s2 = "INFO";
	std::string s3 = "WARNING";
	std::string s4 = "ERROR";
	std::string s5 = "NONE";
	Karen kar;

	kar.complain(s1);
	kar.complain(s2);
	kar.complain(s3);
	kar.complain(s4);
	kar.complain(s5);
}