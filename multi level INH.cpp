//#include <iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//class student
//{
//protected:
//	int rno;
//	string name;
//public:
//	student()
//	{
//		rno = 0;
//		name = "\0";
//	}
//	student(int r, string n)
//	{
//		rno = r;
//		name = n;
//	}
//	void setdata(int r, string n)
//	{
//		rno = r;
//		name = n;
//	}
//	
//	int getrno() const
//	{
//		return rno;
//	}
//	string getname() const
//	{
//		return name;
//	}
//	~student()
//	{
//
//	}
//};
//class marks :public student
//{
//protected:
//	int psp, oop, dsa;
//public:
//	marks() 
//	{
//		//student()::student(); implicitly binded
//		// base class constructor should be the first statement and derived class 
//		// constructor should be the second statement
//		psp = oop = dsa = 0;
//	}
//	marks(int r, string n, int q, int w, int e)
//	{
//		student::student(r, n);
//		psp = q;
//		oop = w;
//		dsa = e;
//	}
//	 void setmarks(int r, string n, int q, int w, int e)
//	{
//		student::setdata(r, n);
//		psp = q;
//		oop = w;
//		dsa = e;
//	}
//	int getpsp() const
//	{
//		return psp;
//	}
//	int getoop() const
//	{
//		return oop;
//	}
//	int getdsa() const
//	{
//		return dsa;
//	}
//	~marks()
//	{
//		// base class distructor should be the first statement and
//		// derived class distructor should be the second statement
//	}
//};
//class result : public marks
//{
//protected:
//	int total;
//	int avg;
//public:
//	result()
//	{
//		//marks::marks(); binded implicitly
//		//executed upper to lower series
//		total = avg = 0;
//	}
//	result(int r, string n, int q, int w, int e ,int t, int av)
//	{
//		marks::marks(r, n, q, w, e);
//		total = t;
//		avg = av;
//	}
//	int gettotal()
//	{
//		total = psp + oop + dsa;
//		return total;
//	}
//	int getavg()
//	{
//		avg = (psp+oop+dsa)/ 3;
//		return avg;
//	}
//	void showdata()
//	{
//		cout << "roll no\t\tname\t\tpsp\t\toop\t\tdsa\t\ttotal\t\taverage" << endl;
//		cout << getrno()<<"\t\t"<<getname()<<"\t\t"<<getpsp()<<"\t\t"<<getoop()<<"\t\t"<<getdsa()<<"\t\t"<<gettotal()<<"\t\t"<<getavg()<<endl;
//	}
//	~result()
//	{
//		// base distructors binded implicitly 
//		// but executed in lower to upper series. 
//	}
//};
//int main()
//{
//	result r;
//	//r.setdata(12,"hamza");
//	r.setmarks(12,"hamza",89, 88, 77);
//	r.showdata();
///*
//	int rno, m1, m2, m3;
//	string n;
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		cout << "enter rno: ";
//		cin >> rno;
//		cout << "enter name: ";
//		cin >> n;
//		cout << "enter marks: ";
//		cin >> m1 >> m2 >> m3;
//		r.setmarks(rno, n, m1, m2, m3);
//	}
//	
//		r.showdata();
//*/
//	return 0;
//}