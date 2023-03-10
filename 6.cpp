/*Chetan is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.
There are X levels remaining in the game, and each level takes Chetan Y minutes to complete. To protect against eye strain, Chetan also decides that every time he completes 3 levels, he will take a Z minute break from playing. Note that there is no need to take this break if the game has been completed.
How much time (in minutes) will it take Chetan to complete the game?
Input Format
•	The first line of input will contain a single integer T, denoting the number of test cases.
•	The first and only line of input will contain three space-separated integers X, Y, and Z.
Output Format
For each test case, output on a new line the answer — the length of Chetan’s gaming session.
Constraints
•	1≤T≤100
•	1≤X≤100
•	5≤Y≤100
•	5≤Z≤15
Input	Output
45	
2 12 10	24
3 12 10	36
7 20 8	156
24 45 15	1185

*/
#include <iostream>
#include<string>
using namespace std;

int main() 
{
	int t,i,x,y,z,d,ld,time;

	cout<<"Enter the no of test cases"<<endl;
	cin>>t;
	for(i=0;i<t;i++)
	{
	   cout<<"Enter the number of levels"<<endl;
	   cin>>x;
	   cout<<"Enter the time to complete 1 level"<<endl;
	   cin>>y;
	   cout<<"Enter break after each level"<<endl;
	   cin>>z;

	   if(x<=3)
	   {
	   time=y*x;
	   }
	   else
	   {
	       ld=x%3;
	       d=x/3;
	       if(ld!=0)
	       {
	            time=(ld*y)+(d*3*y)+(d*z);
	            
	       }
	        else
	         {
	            time=(d*3*y)+((d-1)*z);
	         }
	   }
	         cout<<"Time required = "<<time<<"min"<<endl;
	        
	   } 
	}