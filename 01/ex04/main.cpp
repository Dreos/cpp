#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{
	if(argc == 4)
	{
		int i = 0;
		std::string outfile;
		outfile = (std::string)argv[1] + ".replace";
	
		std::string s = argv[2];
		std::string s2 = argv[3];
	
		std::ifstream is;
		std::ofstream os;

		is.open(argv[1]);
		os.open(outfile.c_str());
		if (is)
		{	
			char * c = new char [1];
			while (is.read(c,1))
			{
				if (s[i] == c[0])
					i++;
				else if ( i != 0)
				{
					is.seekg((int)is.tellg() - i);
					os.write(s.c_str(),1);
					i = 0;
				}
				else
					os.write(c,1);
				if (i == (int)s.size())
				{
					os.write(s2.c_str(),s2.size());
					i = 0;
				}	
			}
			delete[] c;
		}
	}
	return 0;
}
