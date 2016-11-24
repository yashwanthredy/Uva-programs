//********************************************************************************
//      Project 05 Group Reverse
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 09/09/2016
//      Question:- Uva (11192)
//                 https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&category=24&page=show_problem&problem=2133
//********************************************************************************
//                  Description
//                (input&output)
//The input file contains at most 101 lines of inputs. Each line contains at integer G (G < 10) which
//denotes the number of groups followed by a string whose length is a multiple of G.The length of the
//string is not greater than 100. The string contains only alpha numerals.Input is terminated by a line
//containing a single zero.The output consists of group reverse string of group size G
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************


//include libraries
#include "iostream"
#include "string"
#include "algorithm"

using namespace std;
int main()
{
	//variable to get the input & output
	string text, ss, result;
	int N, l, g, k = 0, m;
	
	//reads in integer the number of group to be reversed
	cin >> N;
	while (N != 0)
	{
		//extracts input each line once
		getline(cin, text);
		l = text.length();
		//each group length
		g = (l - 1) / N;
		//loop that travels through each group
		for (int i = 1; i <= N; i++)
		{
			//command substr that extracts a certain length of string from a 
			//particular string
			ss = text.substr((k + 1), g);

			//reverse command that reverses the given string
			reverse(ss.begin(), ss.end());
			
			//concatinating the obtained reversed string to the output string
			result += ss;
			//value that says begining of next group string
			k = i*g;
		}

		cout << result << endl;
		//clears the string that has to be used for next iteration
		result.clear();
		k = 0;
		cin >> N;
	}
}


