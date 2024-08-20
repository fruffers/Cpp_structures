#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

void print_info();

int main(int argc, char **argv)
{
	printf("hello world\n");
	print_info();
	printf("Please give your name:\n");
	
	// Read user input
	string str_name;
	getline (cin, str_name);
	
	cout << "Name: " << str_name << endl;
	
	return 0;
}
