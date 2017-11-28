#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
	//Declare output/input streams
	ifstream inStream;
	ofstream outStream;

	//Declare variables
	int first, second, third, fourth;
	double next,sum=0;
	
string name;
	//Check to see if File is able to open
	
	
	//Read in the Grades
	inStream.open("C:/Users/smoon5/Desktop/test.txt");


	if (inStream.fail())
	{
		cout << "File open failed. " << endl;
	}

	inStream >> name;

	while (inStream >> next)
	{
		sum = sum + next;
	}
	inStream.close();

	//Open output stream
	outStream.open("C:/Users/smoon5/Desktop/outfile.txt");

	//Output grades to output file
	outStream<< "Sum: " << sum << endl;
	/*outStream << "Original Grades: " << endl<< first << endl
		<< second << endl << third<<endl<< fourth << endl;
	outStream<< "Curved Grades: " << first +30 << endl
		<< second+30 << endl << third+30 << endl << fourth+30 << endl;*/
	outStream.close();

	//Open output stream for input file
	outStream.open("C:/Users/smoon5/Desktop/test.txt",ios::app);

	//output Grades to input file
	outStream << "Sum: " << sum << endl;/*
	outStream << "Original Grades: " << endl << first << endl
		<< second << endl << third << endl << fourth << endl;
	outStream << "Curved Grades: " << first + 30 << endl
		<< second + 30 << endl << third + 30 << endl << fourth + 30 << endl;*/
	outStream.close();






	//output to the command window
	cout << "Sum: "<<sum<<endl;
	/*cout<< "Original Grades: "<< endl << first << endl
		<< second << endl << third << endl << fourth << endl;
	cout<< "Curved Grades: " <<endl << first + 30 << endl
		<< second + 30 << endl << third + 30 << endl << fourth + 30 << endl;
		*/

return 0;
}