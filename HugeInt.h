//#ifdef HUGEINT_H
//#define HUGEINT_H
#include <iostream>
#include <string>

using namespace std;
class HugeInt{

public:
	HugeInt();
	HugeInt(int);//the constructor
	HugeInt(string);//the constructor for the string
	//http://www.programmer-club.com.tw/ShowSameTitleN/c/9555.html
	
	private:
		int Number;
		long front;
		long back;
};
//#endif

