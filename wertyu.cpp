//********************************************************************************
//      Project 03 WERTYU
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 09/21/2016
//      Question:- Uva(10082)
//					https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&category=24&page=show_problem&problem=1023va (10082)
//                 
//********************************************************************************
//                  Description
//                (input&output)
//The input consists of lines of text ,by reading in the each line the characters in a line
//will be uppercase alphabets,digits,symbols (except Q, A, Z), or punctuation shown above
//[except back - quote(‘)].Keys labelled with words[Tab, BackSp,Control, etc.] are not 
//represented in the input.In the input the characters are mistyped like W as Q,M as N
//miss typed character can be known from keyboard.The output should contained orginal sequence
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************


//include library files
#include "iostream"
#include "string"


using namespace std;
int main()
{
	//string variables that are used to compare input characters
	//and to obtain output string
	string string1 = "WERTYUIOP[]\\SDFGHJKL;,'XCVBNM,./1234567890-=";
	string string2 = "QWERTYUIOP[]ASDFGHJKLM;ZXCVBNM,.`1234567890-";
	string str,real_str;
	
	//reads in each line from file till end of file
	while (getline(cin, str))
	{
		//loop that travels through each character of input
		for (int i = 0; i < str.length(); i++)
		{
			//loop that uses a character from above and forms it corresponding character
			for (int j = 0; j < string1.length(); j++)
			{
				//condition that find its equivalent character in string1
				if (str[i] == string1[j])
				{
					//concatinating charater(from string2) to string
					real_str+= string2[j];
					j = string1.length();
				}
				//checks if the input character is space
				if(isspace(str[i]))
				{
					real_str += ' ';
					j = string1.length();
				}
				
			}
		}
		cout << real_str << endl;
		//clears the string after each while loop
		real_str.clear();
	}
	return 0;
}

