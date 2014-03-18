// This program would read a pi number file
// then align 100 character per line.

#include<iostream>
#include<fstream>

using namespace std;
void getFileName(string, string&);

int main()
{
  ifstream input;
  ofstream output;
  string fileName;
  char ch;
  int charPerLine = 100, count = 0, charCount = 10000;
 
  getFileName( "input", fileName);
  input.open(fileName.c_str() );
  getFileName( "output", fileName);
  output.open(fileName.c_str() );
  
  while( input )
    {
      if( charCount != 1)
	{
	  input >> ch;
	  if( ch  >= '0' || ch <= '9' || ch == '.' )
	    {
	      output << ch;
	      count++;
	      if( count == 101 )
		{
		  output << endl;
		  count = 0;
		}
	    }
	  charCount--;
	}
      else
	break;
    }
  input.close();
  output.close();

  return 0;
}

void getFileName(string fileType, string& fileName)
{
  cout << "Enter name of the " << fileType << " file\n";
  cin >> fileName;
}
