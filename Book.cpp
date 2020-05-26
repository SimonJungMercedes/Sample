#include <iostream>
#include <string>
using namespace std;

class Book
	{
		public:
			string name, author;
			int serialNumber, pages;
			double prize;
			
		public:
		string get_name(){return name;}
			
		public:
		int get_serialNumber(){return serialNumber;}
			
		public:
		int get_pages(){return pages;}
		
		public:
		string get_author(){return author;}
			
		public:
		double get_Prize(){return author;}
		
		public:
		string set_name(){name=newName;}
		
		public:
		string set_author(){author=newAuthor;}
			
		public:
		int set_serialNumber(){serialNumber=newserialNumber;}
				
		public:
		int set_pages(){pages=newPages;}
		
		public:
		double set_prize(){prize=newPrize;}		
			
	}
