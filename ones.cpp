//********************************************************************************
//      Project 16 Ones
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 10/04/2016
//      Question:- Uva (10127)
//                 https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&category=24&page=show_problem&problem=1068
//********************************************************************************
//                  Description
//                (input&output)
//The input consists of integers. and for each input there exists a integer b
//such that (input integer*b)=1 or 11 or 111 or 1111 or 11111...........
//the output should be a count of number of one's in 11111111111111..... for the one 
//it satisfies.
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************


//include library
#include "iostream"
 
using namespace std;
int main()
{
	int N;
	//reads the inputs till end of file
	while (cin>>N)
	{
		long long int x = 1;
		int i=1;
		//loop until moduls is 0
		while ((x%N) != 0)
		{
				//insted of makking number bigger it can be reduced by modulos
				x = x%N;
				x = (10*x + 1);
				i++;
		}
		//output
		cout << i << endl;

	}
    return 0;
}

