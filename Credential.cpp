#include <iostream>
#include <string>
#include <fstream>
#include <string.h>
using namespace std;

void addName();
void readName(string FULLNAME);

int main ()
{
	/*string fullname;
	
	cout << "Full name: ";
	cin >> fullname;
	
	readName(fullname);*/
	addName();
	
	 

 return 0;
}


void addName(){
	string line;
	fstream File("scores.txt");
	while ( getline (File,line) ){
		if (line == " "){
			string FULLNAME; // Student's name
			float S1, S2, S3;  // Three test scores
			

			cout << "Enter the student\'s full name: ";
			getline(cin,FULLNAME);
			cout << "Enter three test scores (separated by spaces): ";
			cin >> S1 >> S2 >> S3;

			cout << "Writing student record to disk..." << endl;
			File << endl << FULLNAME << ' '<< S1 << ' ' << S2  << ' ' << S3 << endl;
			
			File.close();
			cout << "Student record written to disk file: scores.txt" << endl;
		}
		else{
			cout << "next line..";
		}
	}
}

void readName(string FULLNAME){
	string line;
	float S1, S2, S3;  // Three test scores
	cout << "Reading student record from disk file: scores.txt" << endl <<endl;

	ifstream inputFile("scores.txt");
	while ( getline (inputFile,line) )
	{
		if (line == FULLNAME){
			inputFile >> S1 >> S2 >>S3;
			inputFile.close();
		}
	}

	

	cout << "Student\'s name: " << FULLNAME << endl;
	cout << "Score 1: " << S1 << endl;
	cout << "Score 2: " << S2 << endl;
	cout << "Score 3: " << S3 << endl;
	
}

