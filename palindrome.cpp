//********************************************************************************
//		Project 4 Palindromes
//		Name    :- Yashwanth Reddy Muddireddy
//		Subject :- Programming Techniques
//		Date    :- 09/20/2016
//		Question:- https://uva.onlinejudge.org/index.php?option=com_onlinejudge&
//					Itemid=8&category=24&page=show_problem&problem=342
//********************************************************************************
//					Description
//				  (input&output)
//The input consists of stings one per line ,each of which will be either a palindrome,
//mirrored (e.g..EEE=333),a mirrored palindrome,or not a palindrome if none of these 
//satisfy. The output will print a string with one of this condition and one line space 
//next string so on.The input does not consists of any invalid characters like(, . / ..etc)
//**********************************************************************************
//I have written the entire program as turned in and have not copied this code, or parts of 
//this code from the internet or another student.                                                                                                                    
//															 Signature____________________
//***********************************************************************************


// Library includes
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"

using namespace std;

int main()
{
	// array of characters that has mirrored characters which looks similar
	char array[21] = { 'A','E','H','I','J','L','M','O','S','T','U','V','W'
						,'X','Y','Z','1','2','3','5','8' };
	
	//array of characters that represent mirror image for the above char array 
	//simultaneously
	char array1[21] = { 'A','3','H','I','L','J','M','O','2','T','U','V','W'
		,'X','Y','5','1','S','E','Z','8' };

	//variables
	string input_str, reverse_str, Mirror_str;
	
	//while loop to read string line by line and execute
	while(cin >> input_str)
	{
		//loops that checks each character of input string to obtain its mirrored character
		for (int i = 0; i < input_str.length(); i++)
		{
			for(int j=0;j<21;j++)
			{
				if (input_str[i] == array[j])
				{
					//expression that assigns mirror string for corresponding given string
					Mirror_str+= array1[j];
				}
				
			}
			
		}
		reverse_str = input_str;

		//reversing the input string 
		reverse(reverse_str.begin(), reverse_str.end());

		//reversing the mirrored string
		reverse(Mirror_str.begin(), Mirror_str.end());
		
		//if else condition to check the string is either palindrome,mirrored,both or none
		if (input_str==reverse_str)
		{
			if (input_str==Mirror_str)
			{
				cout << input_str << " -- is a mirrored palindrome." << endl;
			}
			else
			{
				cout << input_str << " -- is a regular palindrome." << endl;

			}
		}
		else
		{
			if (input_str == Mirror_str)
			{
				cout << input_str << " -- is a mirrored string." << endl;
			}
			else
			{
				cout << input_str << " -- is not a palindrome." << endl;
			}
		}
		cout << endl;

		//statements to clear all strings before using
		input_str.clear();
		reverse_str.clear();
		Mirror_str.clear();
	}
return 0;
}

