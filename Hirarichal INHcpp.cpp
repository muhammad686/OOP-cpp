//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class student
//{
//protected:
//	string name;
//public:
//	student()
//	{
//		name = "\0";	
//	}
//	student(string n)
//	{
//		name = n;
//	}
//	void setname(string n)
//	{
//		name = n;
//	}
//	string getname() const
//	{
//		return name;
//	}
//};
//// for matric class
//class matric:public student
//{
//private:
//	int age;double pctge;
//	string school;
//public:
//	matric():student()
//	{
//		age = 0;
//		pctge = 0.0;
//		school = "\0";
//	}
//	matric(string n, int a, double p, string s)
//	{
//		student::student(n);
//		age = a;
//		pctge = p;
//		school = s;
//	}
//	void setmatricdata(string n, int a, double p, string s)
//	{
//		student::setname(n);
//		age = a;
//		pctge = p;
//		school = s;
//	}
//	int getage() const
//	{
//		return age;
//	}
//	double getpercentage() const
//	{
//		return pctge;
//	}
//	string getschoolname() const
//	{
//		return school;
//	}
//	void showschooldata()
//	{
//		cout << "Name\t\tAge\t\tPercentage\t\tSchool Name" << endl;
//		cout << getname() << "\t\t" << getage() << "\t\t" << getpercentage() << "\t\t\t" << getschoolname() << endl;
//	}
//};
//// for fsc
//class fsc :public student
//{
//private:
//	int age; double pctge;
//	string college;
//public:
//	fsc() :student()
//	{
//		age = 0;
//		pctge = 0.0;
//		college = "\0";
//	}
//	fsc(string n, int a, double p, string c)
//	{
//		student::student(n);
//		age = a;
//		pctge = p;
//		college = c;
//	}
//	void setfscdata(string n, int a, double p, string c)
//	{
//		student::setname(n);
//		age = a;
//		pctge = p;
//		college = c;
//	}
//	int getfscage() const
//	{
//		return age;
//	}
//	double getfscpercentage() const
//	{
//		return pctge;
//	}
//	string getcollegename() const
//	{
//		return college;
//	}
//	void showscollegedata()
//	{
//		cout << "Name\t\tAge\t\tPercentage\t\tSchool Name" << endl;
//		cout << getname() << "\t\t" << getfscage() << "\t\t" << getfscpercentage() << "\t\t\t" << getcollegename() << endl;
//	}
//};
////for university
//class university :public student
//{
//private:
//	int age; double pctge;
//	string uni;
//public:
//	university() :student()
//	{
//		age = 0;
//		pctge = 0.0;
//		uni = "\0";
//	}
//	university(string n, int a, double p, string u)
//	{
//		student::student(n);
//		age = a;
//		pctge = p;
//		uni = u;
//	}
//	void setuniversitydata(string n, int a, double p, string u)
//	{
//		student::setname(n);
//		age = a;
//		pctge = p;
//		uni = u;
//	}
//	int getuniage() const
//	{
//		return age;
//	}
//	double getunipercentage() const
//	{
//		return pctge;
//	}
//	string getuniname() const
//	{
//		return uni;
//	}
//	void showsunidata()
//	{
//		cout << "Name\t\tAge\t\tPercentage\t\tSchool Name" << endl;
//		cout << getname() << "\t\t" << getuniage() << "\t\t" << getunipercentage() << "\t\t\t" << getuniname() << endl;
//	}
//};
//
//class middle :public student
//{
//private:
//	int age; double pctge;
//	string school;
//public:
//	middle() :student()
//	{
//		age = 0;
//		pctge = 0.0;
//		school = "\0";
//	}
//	middle(string n, int a, double p, string s)
//	{
//		student::student(n);
//		age = a;
//		pctge = p;
//		school = s;
//	}
//	void setmiddleschooldata(string n, int a, double p, string s)
//	{
//		student::setname(n);
//		age = a;
//		pctge = p;
//		school = s;
//	}
//	int getmiddleage() const
//	{
//		return age;
//	}
//	double getmiddlepercentage() const
//	{
//		return pctge;
//	}
//	string getmiddleschoolname() const
//	{
//		return school;
//	}
//	void showmiddleschooldata()
//	{
//		cout << "Name\t\tAge\t\tPercentage\t\tSchool Name" << endl;
//		cout << getname() << "\t\t" << getmiddleage() << "\t\t" << getmiddlepercentage() << "\t\t\t\t" << getmiddleschoolname() << endl;
//	}
//};
//int main()
//{
//	matric m;
//	m.setmatricdata("taha", 16, 94, "uswa school");
//	middle md;
//	md.setmiddleschooldata("taha", 14, 54, "career school");
//	fsc f;
//	f.setfscdata("taha", 18, 79, "WCCT");
//	university u;
//	u.setuniversitydata("taha", 22, 70, "QAU");
//	int op;
//		cout << "enter op: ";
//		cin >> op;
//		switch (op)
//		{
//		case 1: md.showmiddleschooldata(); break;
//		case 2:m.showschooldata(); break;
//		case 3: f.showscollegedata(); break;
//		case 4: u.showsunidata(); break;
//		default:cout << "no data found ";
//		}
//	
//}