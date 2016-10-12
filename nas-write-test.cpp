#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	ofstream outFile(argv[1]);
	for(int i = 0; i < 1000000; i++)
	{
		outFile << "Line #" << i << endl;	
	}

	outFile.flush();
	outFile.close();
	return 0;
}
