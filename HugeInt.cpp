#include "HugeInt.h"
#include <iostream>
#include <sstream>

using namespace std;

//default constructor create an object for operating hugeint operation
HugeInt::HugeInt(){
	
}

HugeInt::HugeInt(int i){
		Number=i;
		//test correctly initialize
		cout<<Number<<endl;
}
HugeInt::HugeInt(string str){
	//http://www.cplusplus.com/reference/sstream/istringstream/
	istringstream is(str);
	//the range of int is -2147483648~2147483647(10 digit)
	is>>back;//
	is>>front;
	cout<<front<<back<<endl;
}

