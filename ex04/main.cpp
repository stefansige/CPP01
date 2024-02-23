#include <string>
#include <iostream>
#include <fstream>
#include <cstddef>

void	replace(std::string s1, std::string s2, std::ifstream &inputFile, std::ofstream &outputFile)
{
	std::string line;
	while (getline(inputFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		outputFile << line << std::endl;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments." << "Usage: <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Failed to open file: " << filename << std::endl;
		return 1;
	}
	if (inputFile.peek() == std::ifstream::traits_type::eof())
	{
        std::cerr << "File is empty" << std::endl;
		inputFile.close();
		return 1;
	}
	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Failed to create replace file" << std::endl;
		inputFile.close();
		return 1;
	}
	replace(s1, s2, inputFile, outputFile);
	inputFile.close();
	outputFile.close();
}
