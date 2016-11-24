//********************************************************************************
//      Project 0 Relational Operator
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 09/13/2016
//      Question:- Uva (11172)
//                https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&page=show_problem&problem=2113
//********************************************************************************
//                  Description
//                (input&output)
//The input consists of number of test cases followed by test data.It has two values which 
//and the output should give a relation between them like either > or < or =
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************


//include libraries
#include <iostream>

using namespace std;

int main()
{
	//variables to store incoming input 
	int n,n1,n2;
	
	//loops until the test case variable is available
	while(cin>>n)
	{
		//loops for number equal to test case variable
		for(int i=0;i<n;i++)
		{
			//input 1
			cin>>n1;
			//input 2
			cin>>n2;
			
			//if else condition for relation
			if(n1>n2)
				cout<<">"<<endl;
			else if(n1<n2)
				cout<<"<"<<endl;
			else
				cout<<"="<<endl;
		}
	}
	return 0;
}