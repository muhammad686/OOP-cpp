//#include "Header1.h"
//
//employee::employee() :enu(0)
//{
//	name = NULL;
//	salary = 0;
//	desg = NULL;
//	num++;
//}
//employee::employee(int en, const char* aname, int s, const char* dg) :enu(en)
//{
//	name = new char[strlen(aname) + 1];
//	strcpy(name, aname);
//	salary = s;
//	desg = new char[strlen(dg) + 1];
//	strcpy(desg, dg);
//	num++;
//}
//employee::employee(const employee& e) :enu(e.enu)
//{
//	name = new char[strlen(e.name) + 1];
//	strcpy(name, e.name);
//	salary = e.salary;
//	desg = new char[strlen(e.desg) + 1];
//	strcpy(desg, e.desg);
//}
//void employee::setname(const char* aname)
//{
//	name = new char[strlen(aname) + 1];
//	strcpy(name, aname);
//}
//void employee::setsalary(int s)
//{
//	salary = s;
//}
//void employee::setdeg(const char* dg)
//{
//	desg = new char[strlen(dg) + 1];
//	strcpy(desg, dg);
//}
//int employee::geten() const
//{
//	return enu;
//}
//char* employee::getname() const
//{
//	return name;
//}
//int employee::getsalary() const
//{
//	return salary;
//}
//char* employee::getdesg() const
//{
//	return desg;
//}
//employee employee::cascade()
//{
//	return *this;
//}
//employee::~employee()
//{
//	delete name;
//	delete desg;
//	num--;
//}
//int employee::num = 0;