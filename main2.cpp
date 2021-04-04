#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Stack.h"
using namespace std;

int main(){
	double dVal;
	string strVal;
	LinkedList<double> dList;
	Stack<double> dStack;
	LinkedList<string> strList;
	dList.Insert(3.14);
	dList.Insert(123456);
	dList.Insert(-0.987654);
	dList.Print();
	dList.Delete(dVal);
	cout<<"삭제된 마지막 원소:"<<dVal<<endl;
	dList.Print();
	dStack.Insert(3.14);
	dStack.Insert(123456);
	dStack.Insert(-0.987654);
	dStack.Print();
	dStack.Delete(dVal);
	cout<<"삭제된 마지막 원소:"<<dVal<<endl;
	dStack.Print();

	strList.Insert("This");
	strList.Insert("is a");
	strList.Insert("Example");
	strList.Print();
	strList.Delete(strVal);
	strList.Print();

	return 0;
}


