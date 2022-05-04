// Q.5) Write a program to illustrate the use of string IO with files.
// create a function to print the contents into file and another function to read the contents from file.

#include <iostream>
#include <fstream>
using namespace std;


void print_file(string file_name)
{
	ofstream fout;
	fout.open(file_name);
	if(!fout)
	{
		cout<<"File not found"<<endl;
		return;
	}
	fout<<"Hello world!"<<endl;
	fout.close();
}

void read_file(string file_name)
{
	ifstream fin;
	fin.open(file_name);
	if(!fin)
	{
		cout<<"File not found"<<endl;
		return;
	}
	string str;
	while(!fin.eof())
	{
		getline(fin,str);
		cout<<str<<endl;
	}
	fin.close();
}

int main()
{
	string file_name;
	cout<<"Enter the file name: ";
	cin>>file_name;
	print_file(file_name);
	read_file(file_name);
	return 0;
}