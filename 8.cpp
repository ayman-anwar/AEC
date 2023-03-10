/*There is a frog initially placed at the origin of the coordinate plane. In exactly 1 second, the frog can either move up 1 unit, move right 1 unit, or stay still. In other words, from position (x,y), the frog can spend 1 second to move to:
•	(x+1,y)
•	(x,y+1)
•	(x,y)
After T seconds, a villager who sees the frog reports that the frog lies on or inside a square of side-length s with coordinates (X,Y), (X+s,Y), (X,Y+s), (X+s,Y+s). Calculate how many points with integer coordinates on or inside this square could be the frog's position after exactly T seconds
Input Format:
The first and only line of input contains four space-separated integers: X, Y, s, and T.
Output Format:
Print the number of points with integer coordinates that could be the frog's position after T seconds.
Constraints:
0≤X,Y≤100
1≤s≤100
0≤T≤400
Note that the Expected Output Feature for Custom Invocation is not supported for this contest. 
Input
	Output

2 2 3 6	6

The points shown are the points on or in the specified square, and those that are white are the points that the frog could be at after 6 seconds.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,s,t,count=0,points;
    cout<<"Enter the values of x,y,s,t"<<endl;
    cin>>x>>y>>s>>t;
    for(int i=x;i<=x+s;i++)
    {
        for(int j=y;j<=y+s;j++)
        {
            if(i+j<=t)
            count++;
        }
    }cout<<"Frogs position after "<<t<<" seconds:"<<count<<endl;
}
