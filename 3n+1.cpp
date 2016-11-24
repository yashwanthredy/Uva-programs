//********************************************************************************
//      Project 08 3n+1
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 09/12/2016
//      Question:- Uva (100)
//                 https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&page=show_problem&problem=36
//********************************************************************************
//                  Description
//                (input&output)
//The input consists of set of two numbers a & b and the output is to calculate the 
//cycle length of numbers between a & b including a,b the cyle length is calculate by algorithm
//as below 
//1. 		 input n
//2. 		 print n
//3. 		 if n = 1 then STOP
//4. 		 		 if n is odd then  tex2html_wrap_inline44
//5. 		 		 else  tex2html_wrap_inline46
//6. 		 GOTO 2
//and the maximum cycle length is derived from the cycle length set.
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************


//include library file
#include "iostream"
#include "vector"
#include "algorithm"
#include "cmath"

using namespace std;
int main()
{
	//varibles that used to read input
	int a,b,temp,temp1,temp2;
	while (cin >> a)
	{
		cin>>b;
		//to store orginal sequence of input
		temp1 = a; temp2 = b;
		
		//condition to make sure the first input value less than second
		if (a > b)
		{
			temp = a;
			a = b;
			b = temp;
		}

		// vector array that stores the cycle_length of numbers
		vector<int> cycle_length;
		int j = -1;

		//loop that travels for range between values a & b
		for (int i = a; i<=b; i++)
		{
			int count = 1;
			int val = i;

			//loops until val is 1
			while (val!=1)
			{
				//check if even
				if ((val%2) == 0)
				{
					val = (val/2);
					count++;
				}
				//if odd
				else
				{
					val = (3*val)+1;
					count++;
				}
			}
			//command that pushes count variable at the end of vector array
			cycle_length.push_back(count);
		}
		//command that returns maximum element in the vector array
		//with out (*) this will return iterator value of the max element 
		int max_number = *max_element(cycle_length.begin(), cycle_length.end());
		cout << temp1 << " " << temp2 << " " << max_number << endl;
	}
    return 0;
}

