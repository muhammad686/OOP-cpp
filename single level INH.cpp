//#include <iostream>
//#include<string>
//using namespace std;
//
//class House
//{
//private:
//	int aptno;
//	string address;
//public:
//	House()
//	{
//		aptno = 0;
//		address = "\0";
//	}
//	House(int an, string ad)
//	{
//		aptno = an;
//		address = ad;
//	}
//	void setdata(int an,string ad)
//	{
//		aptno=an;
//		address =ad;
//	}
//	int getaptno() const
//	{
//		return aptno;
//	}
//	string getaddress() 
//	{
//		return address;
//	}
//	void getdata() 
//	{
//		cout<<"the apartment No is: "<<this->getaptno()<<endl;
//		cout << "the apartment address is: " << this->getaddress() << endl;
//	}
//};
//class SonA : private House
//{
//private:
//	string on;
//	int nof;
//	int fm;
//public:
//	SonA()
//	{
//		House::House();
//		on = "\0";
//		nof = fm = 0;
//	}
//	SonA(int an, string ad, string o, int n, int f)
//	{
//		House::House(an, ad);
//		on = o;
//		nof = n;
//		fm = f;
//	}
//	void setAdata(int a, string ad, string o, int n, int f)
//	{
//		House::setdata(a,ad);
//		on =o;
//		nof = n;
//		fm = f;
//	}
//	string getAname() const
//	{
//		return on;
//	}
//	int getAFloor() const
//	{
//		return nof;
//	}
//	int getAfm( ) const
//	{
//		return fm;
//	}
//	void getAdata()
//	{
//		House::getdata();
//		cout<<"owner name is:"<<this->getAname() << endl;
//		cout << "No of Floors are:" << this->getAFloor() << endl;
//		cout << "Family memebers are:" << this->getAfm() << endl;
//	 }
//	
//};
//class SonB :private House
//{
//private:
//	string on;
//	int nof;
//	int fm;
//public:
//	SonB()
//	{
//		House::House();
//		on = "\0";
//		nof = fm = 0;
//	}
//	SonB(int an, string ad, string o, int n, int f)
//	{
//		House::House(an, ad);
//		on = o;
//		nof = n;
//		fm = f;
//	}
//	void setBdata(int a, string ad, string o, int n, int f)
//	{
//		House::setdata(a, ad);
//		on = o;
//		nof = n;
//		fm = f;
//	}
//	string getBname() const
//	{
//		return on;
//	}
//	int getBFloor() const
//	{
//		return nof;
//	}
//	int getBfm() const
//	{
//		return fm;
//	}
//	void getBdata()
//	{
//		House::getdata();
//		cout << "owner name is:" << this->getBname() << endl;
//		cout << "No of Floors are:" << this->getBFloor() << endl;
//		cout << "Family memebers are:" << this->getBfm() << endl;
//	}
//
//};
//int main()
//{
//	House h;
//	h.setdata(12, "Islamabad");
//	h.getdata();
//	cout << endl;
//	SonA a;
//	a.setAdata(2,"Rawalpindi","taha", 4, 5);
//	a.getAdata();
//	cout << endl;
//	SonB b;
//	b.setBdata(2, "Rawalpindi", "taha", 4, 5);
//	b.getBdata();
//	cout << endl;
//}