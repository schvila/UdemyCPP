// StreamFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>

std::string GetModuleDirectory()
{
	char buffer[MAX_PATH];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	const std::string::size_type pos = std::string(buffer).find_last_of("\\/");

	return std::string(buffer).substr(0, pos);
}

int main(int argc, char* argv[])
{
	const std::string exe_dir{ GetModuleDirectory() };
	//auto my_file = exe_dir + "\\my.txt";
	//std::cout << exe_dir <<" , " << my_file << std::endl;
	//std::cout << "ss" << std::endl;
	//

	//std::ofstream out_file{ exe_dir+"\\output.txt" }; //, std::ios::app appends new line.
	//if(!out_file)
	//{
	//	std::cerr << "Error creating out file."<< std::endl;
	//	return 1;
	//}
	//std::string line;
	//std::cout << "Enter text to write to the file: ";
	//std::getline(std::cin, line);
	//out_file << line << std::endl;
	//out_file.close();

	std::ifstream in_file{ exe_dir + "\\poem.txt" };
	std::ofstream out_file{ exe_dir + "\\poem_out.txt" };
	if(!in_file)
	{
		std::cout << "Error in_file" << std::endl;
		return 1;
	}
	if (!out_file)
	{
		std::cout << "Error out_file" << std::endl;
		return 1;
	}
	std::string line;
	while(std::getline(in_file, line))
		out_file << line << std::endl;
	//unformatted version
	//char c;
	//while (in_file.get(c))
	//	out_file.put(c);

	
	std::cout << "File copied" << std::endl;

	in_file.close();
	out_file.close();

	return 0;

}

