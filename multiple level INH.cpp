//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class mango
//{
//protected:
//	int nofM;
//public:
//	mango()
//	{
//		nofM = 0;
//	}
//	mango(int m)
//	{
//		nofM = m;
//	}
//	void setMdata(int m)
//	{
//		nofM = m;
//	}
//	int getMdata() const
//	{
//		return nofM;
//	}
//};
//class apple
//{
//protected:
//	int nofA;
//public:
//	apple() :nofA(0) {}
//	apple(int no)
//	{
//		nofA = no;
//	}
//	void setAdata(int no)
//	{
//		nofA = no;
//	}
//	int getAdata() const
//	{
//		return nofA;
//	}
//};
//
//class fruit :public mango, public apple
//{
//private:
//	int total;
//public:
//	fruit() :total(0)
//	{
//		mango::mango();
//		apple::apple();
//	}
//	fruit(int nofM, int nofA)
//	{
//		mango::mango(nofM);
//		apple::apple(nofA);
//		
//	}
//	void  calculateFruit(int nofM, int nofA)
//	{
//		mango::setMdata(nofM);
//		apple::setAdata(nofA);
//	}
//	int getfruits() 
//	{
//		mango::getMdata();
//		apple::getAdata();
//		return total = getAdata() + getMdata();
//	}
//};
//int main()
//{
//	fruit f;
//	f.setMdata(14);
//	cout << "total no of mangos are :" << f.getMdata()<<endl;
//	
//	f.setAdata(12);
//	cout << "toal no of apples are : " << f.getAdata() << endl;	
//	
//	cout<<"total no of fruits in basket : "<<f.getfruits();
//}