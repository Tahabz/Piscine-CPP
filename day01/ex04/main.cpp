#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Please enter exactly 4 args!" << std::endl;
		return 1;
	}
	std::string str;
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream ifs(filename);
	if (!ifs.is_open())
	{
		std::cerr << "Error while opening the file" << std::endl;
		return 1;
	}
	std::ofstream ofs(filename + ".replace");
	if (!ofs.is_open())
	{
		std::cerr << "Error while opening the file" << std::endl;
		return 1;
	}

	if (s1.empty() || s2.empty())
	{
		std::cerr << "Empty Arg" << std::endl;
		return 1;
	}

	while (ifs.good() && ofs.good())
	{
		std::getline(ifs, str);
		while (true)
		{
			size_t index = str.find(av[2]);
			if (index == std::string::npos)
				break;
			str = str.insert(index, s2).erase(index + s2.length(), s1.length());
		}
		ofs << str << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}