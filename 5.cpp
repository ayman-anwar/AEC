There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. If there are K other students who have already enrolled in the course, determine if it will still be possible for all the N friends to do so or not.
Input Format
	The first line contains a single integer T - the number of test cases. Then the test cases follow.
	Each test case consists of a single line containing three integers N, M and K - the size of the friend group, the capacity of the course and the number of students already registered for the course.
Output Format
For each test case, output Yes if it will be possible for all the N friends to register for the course. Otherwise output No.
You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).
Constraints
	1 ≤T ≤1000
	1 ≤N ≤M ≤100
	0 ≤K ≤M
Sample
Input
	Output

3
	
2 50 27	Yes
5 40 38	No
100 100 0	Yes

#include <iostream>
#include<string>
using namespace std;

int main() 
{
	int t,i,n,m,k,l;

	cout<<"Enter the no of test cases"<<endl;
	cin>>t;
	for(i=0;i<t;i++)
	{
	   cout<<"Enter the number of people in friends group"<<endl;
	   cin>>n;
	   cout<<"Enter the capacity of people for the course"<<endl;
	   cin>>m;
	   cout<<"Enter the number of people already registered for course"<<endl;
	   cin>>k;
	   l=m-k;
	   if(l>=n)
	   {
	       cout<<"YES"<<endl;
	   }
	   else
	   {
	      cout<<"NO"<<endl; 
	   }
	   
	}
}