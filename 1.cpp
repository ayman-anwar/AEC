/*Agastya is currently standing at stair 00 and he wants to reach stair numbered XX.
Agastya can climb either YY steps or 11 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered XX.
Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing two space separated integers XX and YY denoting the number of stair Agastya wants to reach and the number of stairs he can climb in one move.
Output Format
For each test case, output the minimum number of moves required by him to reach exactly the stair numbered XX.
Constraints
1≤T≤500
1≤X,Y≤100
Sample:
Input
	Output

4	
4 2	2
8 3	4
3 4	3
2 1	2
Explanation:
Test case 1: Agastya can make 2 moves and climb 2 steps in each move to reach stair numbered 4.
Test case 2: Agastya can make a minimum of 4 moves. He can climb 3 steps in 2 of those moves and 1 step each in remaining 2 moves to reach stair numbered 8.
Test case 3: Agastya can make 3 moves and climb 1 step in each move to reach stair numbered 3.
Test case 4: Agastya can make 2 moves and climb 1 step in each move to reach stair numbered 2.*/

#include <iostream>
using namespace std;

int main()
{
    int i,t,x,y,ans,ch;
    cout<<"Enter the no of test cases"<<endl;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    
	    cout<<i<<"."<<"Enter the number of stair Agastya wants to reach "<<endl;
    	cin>>x;
    	cout<<"Enter the the number of stairs he can climb in one move. "<<endl;
    	cin>>y;
	
	    ans=x/y;
	    ans+=(x%y);

	    cout<<"Minimum number of moves required are"<<endl;
	    cout<<ans<<endl;
	    
	}
}