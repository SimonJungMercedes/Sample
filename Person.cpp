#include <iostream>
#include <string>
using namespace std;

class Person
	{
		public:
			string name, adress;
			char gender;
			int mobileNumber, age;
	
		public:
		string get_name(){return name;}
			
		public:
		int get_age(){return age;}
			
		public:
		char get_gender(){return gender;}
			
		public:
		int get_mobileNumber(){return mobileNumber;}
		
		public:
		string get_adress(){return adress;}
		
		public:
		string set_name(){name=newName;}
			
		public:
		int set_age(){age=newAge;}
			
		public:
		char set_gender(){gender=newGender;}
			
		public:
		int set_mobileNumber(){mobileNumber=newMobileNumber;}
		
		public:
		string set_adress(){adress=newAdress;}
				
	}
