#include<iostream>

using namespace std;

class student
{
private:
	char name[100],add[20];
	int roll,zip;
public:
	void input()
	{
		std::cout<<"\n Enter Student Name :";
		std::cin>>name;
		std::cout<<"\n Enter Address :";
		std::cin>>add;
		std::cout<<"\n Enter Roll No :";
		std::cin>>roll;
		std::cout<<"\n Enter zip :";
		std::cin>>zip;

	}
	void output()
	{
		std::cout<<"\nStudent Name :"<<name;
		std::cout<<"\n Student Address :"<<add;
		std::cout<<"\n Student Roll No :"<<roll;
		std::cout<<"\n Student Zip Code :"<<zip;

	}
	void update()
	{
		std::cout<<"\n\n++++++++++++++++++++++++++++++++++++++++ |Update Information|++++++++++++++++++++++++++++++";
		std::cout<<"\n Enter Student Name :";
		std::cin>>name;
		std::cout<<"\n Enter Address :";
		std::cin>>add;
		std::cout<<"\n Enter Roll No :";
		std::cin>>roll;
		std::cout<<"\n Enter zip :";
		std::cin>>zip;

	}
};

int main()
{
	student s;
	while(1)
	{
		std::cout<<"\n\n+++++++++++++++++++++++++|CHOOSE|+++++++++++++++++++++++++++++++++";
		std::cout<<"\nPress 1 to insert record of student";
		std::cout<<"\nPress 2 to update Record";
		std::cout<<"\nPress 3 to display";
		std::cout<<"\nPress 4 to exit";
		std::cout<<"\n\n Enter Choice:";

		int ch;

		std::cin>>ch;

		switch(ch)
		{
			case 1:
			s.input();
			break;

			case 2:
			s.update();
			break;

			case 3:
			s.output();
			break;

			case 4:
			goto out;

			default:
			std::cout<<"\n\n++++++++++++++++++++|Invalid Choice|++++++++++++++++++++++";
		}
	}
out:
return 0;

}
