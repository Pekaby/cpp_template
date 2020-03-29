#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string myfile = argv[1];

	ofstream file;
	file.open(myfile);
	if (file.is_open())
	{
		file << "#include <iostream>\n\n";
		file << "using namespace std; \n \n";
		file << "int main(int argc, char *argv[])\n";
		file << "{\n\n";
		file << "	return 0; \n\n";
		file << "}";

	}
	file.close();

    return 0;
}