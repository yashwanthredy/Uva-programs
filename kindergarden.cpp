//********************************************************************************
//      Project 06 kidergarten
//      Name    :- Yashwanth Reddy Muddireddy
//      Subject :- Programming Techniques
//      Date    :- 09/19/2016
//      Question:- Uva (494)
//                 https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&category=24&page=show_problem&problem=435
//********************************************************************************
//                  Description
//                (input&output)
//The input consists of group of stings or simply a line ,by reading in the whole line
//the output will give a number of words per line (words are a group of characters)
//words are not only seperated by space but also by characters
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************


//include library
#include "iostream"
#include "string"
#include "sstream"
#include "cctype"


using namespace std;
int main()
{
	string text;
	
	//loops until end of input file by getting each line per iteration
	while(getline(cin, text))
	{
		int count = 0,i=0,j=0;

		//loops untill end of line
		for (i=0;i < text.length();i++)
		{
			//check if the element is alphabet
			if (isalpha(text[i])) 
			{
				j=i+1;
				//checks the next element is a alphabet and loops untill 
				//a non-alphabet is found
				while (isalpha(text[j])&& j<text.length())
				{
					j++;
					
				}
				i = j;

				//counts the number of words
				count++;
			}
		}
	cout << count << endl;
	}
	
    return 0;
}

