//********************************************************************************
//      Project 09 Ecological Premium
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 09/10/2016
//      Question:- Uva (10300)
//                 https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&category=24&page=show_problem&problem=1241
//********************************************************************************
//                  Description
//                (input&output)
//The first line of input contains a single positive integer n (< 20), the number of test cases. Each test
//case starts with a line containing a single integer f(0 < f < 20), the number of farmers in the test
//case.This line is followed by one line per farmer containing three positive integers each : the size of
//the farmyard in square meters(s), the number of animals he owns(a) and the integer value that expresses the
//farmers environment - friendliness(d).Input is terminated by end of file.No integer in the input is greater
//than 100000 or less than .The output is final premium=premium per animal*number of animals(s/a*d*a)=(s*d)
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************



//include libraries
#include "iostream"
#include "string"
#include "sstream"

using namespace std;
int main()
{
	//varibles to read input
	int N, f, s, a, d;
	//variable for ouput
	long long value;
	//reads number of testcases from input
	cin >> N;
	//loop that travels through number of testcases
	for (int i = 0;i < N;i++)
	{
		value = 0;
		//number of farmers
		cin >> f;
		for (int j = 0;j < f;j++)
		{
			s = 0;a = 0;d = 0;
			//s=size of farmyard,a=animals he owns,d=farmer environment friendliness
			cin >> s;cin >> a;cin >> d;
			//final premium=premium per animal*number of animals(s/a*d*a)=(s*d)
			value = value + ((long long) s*d);
		}
		cout << value << endl;
		
	}
    return 0;
}

