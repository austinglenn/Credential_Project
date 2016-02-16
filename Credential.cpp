//Crodential Project
//2016
//Clifton Kimber, Jaydon ---, Wiatt Giles, ----- ----,


#include <iostream>
#include <iomanip>

using namespace std;



void addApplicant(int applicants[], int &applicant_num );

int main() {
	
	int applicants [] = {0,1,0,0,0,0};
	
	int applicant_num = 0;
	applicant_num = sizeof( applicants ) / sizeof( applicants[ 0 ] );
	
	if (applicant_num <= 0){
		
		addApplicant(applicants, applicant_num);
		
	}
	cout << "number of applicants: " << applicant_num;
	
	
	return 0;
}


void addApplicant(int applicants[], int &applicant_num ){
	
	string app_name_ = "";
	
	applicant_num += 1; 
}