//#include<iostream>
//#include <string>
//
//using namespace std;
//
//class student
//{
//protected:
//	string name;
//	int rno;
//public:
//	student()
//	{
//		name = "\0";
//		rno = 0;
//	}
//	student(int rno,string name)
//	{
//		name = this->name;
//		rno = this->rno;
//	}
//	void setdata(int rno,string name)
//	{
//		name = this->name;
//		rno = this->rno;
//	}
//	string getname() const
//	{
//		return name;
//	}
//	int getrno() const
//	{
//		return rno;
//	}
//};
//class marks :public student
//{
//protected:
//	int psp, oop, dsa;
//public:
//	marks() :student()
//	{
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
//};
//class result : public marks
//{
//protected:
//	int total;
//	int avg;
//public:
//	result():marks()
//	{
//		//marks::marks();
//		total = avg = 0;
//	}
//	result(int r, string n, int q, int w, int e ,int t, int av)
//	{
//		marks::marks(r,n,q,w,e);
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
//		cout << "ROLL NO\t\tNAME\t\tPSP\t\tOOP\t\tDSA\t\tTOTAL\t\tAVERAGE" << endl;
//		cout << getrno()<<"\t\t"<<getname()<<"\t\t"<<getpsp()<<"\t\t"<<getoop()<<"\t\t"<<getdsa()<<"\t\t"<<gettotal()<<"\t\t"<<getavg()<<endl;
//	}
//};
//class sports
//{
//protected:
//	int stype;
//	int points;
//public:
//	sports()
//	{
//		stype = points = 0;
//	}
//	sports(int s, int p)
//	{
//		stype = s;
//		points = p;
//	}
//	void setsports(int s, int p)
//	{
//		stype = s;
//		points = p;
//	}
//	int getpoints()
//	{
//		points = stype * 5;
//		return points;
//	}
//};
//class aggregate :public result, public sports
//{
//protected:
//	double ag;
//public:
//	aggregate() :result()
//	{
//		sports::sports();
//		ag = 0;
//
//	}
//	aggregate(int r, string n, int q, int w, int e, int t, int av,int s,int p, double ag)
//	{
//		result::result(r,n,q,w,e,t,av);
//		sports::sports(s,p);
//		ag = 0;
//	}
//	void setaggregate( int r, string n, int q, int w, int e, int t, int av, int s, int p, double ag)
//	{
//		result::result(r, n, q, w, e, t, av);
//		sports::sports(s, p);
//		ag =this->ag ;
//	}
//	int calculateaggregate()
//	{
//		result::gettotal();
//		sports::getpoints();
//		ag = total + points;
//		return ag;
//	}
//};
//int main()
//{
//	aggregate a;
//	cout<<"total aggregate is: "<<a.calculateaggregate();
//}
