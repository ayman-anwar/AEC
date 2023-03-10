Bhuvan has a string S with him. Bhuvan is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels.
Determine whether Bhuvan is happy or not.
/*Note that, in English alphabet, vowels are a, e, i, o, and u.
Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a string S.
Output Format
For each test case, if Bhuvan is happy, print HAPPY else print SAD.
You may print each character of the string in uppercase or lowercase (for example, the strings hAppY, Happy, haPpY, and HAPPY will all be treated as identical).

Constraints
1 ≤T ≤1000 
3≤|S|≤1000, where |S| is the length of S.
S will only contain lowercase English letters.
Sample:
Input
	Output

4
	
aeiou	Happy
abxy	Sad
aebcdefghij	Sad
abcdeeafg	Happy
Explanation:
Test case 1: Since the string aeiou is a contiguous substring and consists of all vowels and has a length >2, Agastya is happy.
Test case 2: Since none of the contiguous substrings of the string consist of all vowels and have a length >2, Agastya is sad.
Test case 3: Since none of the contiguous substrings of the string consist of all vowels and have a length >2, Agastya is sad.
Test case 4: Since the string eea is a contiguous substring and consists of all vowels and has a length >2, Agastya is happy.
*/
#include <iostream>
#include<string>
using namespace std;

int main() 
{
	int t,j,i;
	string s;
	cout<<"Enter the no of test cases"<<endl;
	cin>>t;
	while(t--)
	{
	   cout<<"Enter the string"<<endl;
	   cin>>s;
	   int j,i;
	   int l=1;
	   for(j=0;j<s.length()-3;j++)
	   {
	       l=1;
	       for(i=j;i<j+3;i++)
	       {
	           
	           if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
	                 {
	                     l=0;
	                 }
	       }
	       if(l==1)
	          {
	           cout<<"HAPPY"<<endl;break;}
	   }
	   if(l==0)
	 cout<<"SAD"<<endl;
	}
	return 0;
}