#include <iostream>
#include <fstream>

using namespace std;

int main()
{
fstream file;
//Open file to write content to it
file.open("my_file.txt", ios::out );
int i=100;
char buff[100];
string str;

//cin.ignore();
while(file)
{
	cout << "I am here\n";
	// Read a line from std input to string str
	getline(cin,str);
	//REad until -1 is entered
	if(str=="-1")
		break;
	// Keep writing str to file along with a new line
	file<<str << endl;
}
cout << "Out of it\n";
// Done writing close the file
file.close();

return 0;
}
