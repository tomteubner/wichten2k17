#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct data{
	std::vector<std::string> ln;
	std::vector<std::string> fn;
	std::vector<int> ln_h;
	std::vector<int> fn_h;
	std::vector<int> ln_s;
	std::vector<int> fn_s;
	std::vector<bool> check;
};

unsigned short int hashIt(std::string str)
{
	std::hash<std::string> func;
	unsigned short int hash = func(str);
	return hash;
}

int main() 
{
	bool ifOne = true;
	data data;
	data.fn.push_back("Tom-Joseph");
	data.ln.push_back("Teubner");
	data.fn.push_back("Amelie Zoe");
	data.ln.push_back("Osbeck");
	data.fn.push_back("Lara");
	data.ln.push_back("Bauerfeind");
	data.fn.push_back("Cäcilla");
	data.ln.push_back("Hoffmann1");
	data.fn.push_back("Anna");
	data.ln.push_back("Dessin");
	data.fn.push_back("Martha");
	data.ln.push_back("Fingerle1");
	data.fn.push_back("Jonas Philemon");
	data.ln.push_back("Jaursch");
	data.fn.push_back("Aaron");
	data.ln.push_back("Hoffmann2");
	data.fn.push_back("Dario");
	data.ln.push_back("Burkhardt");
	data.fn.push_back("Lilli");
	data.ln.push_back("Jakobi");
	data.fn.push_back("Max");
	data.ln.push_back("Fingerle2");
	data.fn.push_back("Jonas Simion");
	data.ln.push_back("Menzel");
	data.fn.push_back("Janina");
	data.ln.push_back("Unger");
	data.fn.push_back("Lukas");
	data.ln.push_back("Hoffmann3");
	if (data.ln.size() == data.fn.size())
	{
		for (int i = 0; i < data.ln.size(); i++)
		{
			data.ln_h.push_back(hashIt(data.ln[i]));
			data.fn_h.push_back(hashIt(data.fn[i]));
		}
		
		for (int i = 0; i < data.ln.size(); i++)
		{
			int counter = 0;
			for (int ii = 0; ii < data.ln.size(); ii++)
			{
				if (data.ln[i] > data.ln[ii])
					counter++;
			}
			data.ln_s.push_back(counter);
		}
		for (int i = 0; i < data.ln.size(); i++)
		{
			int counter = 0;
			for (int ii = 0; ii < data.fn.size(); ii++)
			{
				if (data.fn[i] > data.fn[ii])
					counter++;
			}
			data.fn_s.push_back(counter);
		}
		
		for (int i = 0; i < data.ln.size(); i++)
		{
			if (data.fn[i] != data.ln[i])
			{
				std::cout << data.fn[i] << ": " << data.fn[data.ln_s[i]] << std::endl;

			}
		}
		/*for (int i = 0; i < data.ln.size(); i++)
		{

		}*/
	}
	return 0;
}