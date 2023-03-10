/*You will be given an array of N integers and you have to print the integers in the reverse order.
Input Format
The first line of the input contains N ,where N  is the number of integers. The next line contains  N space-separated integers.
Constraints
1≤N≤1000
1≤A[i]≤10000 where A[i] is the ith integer in the array.
Sample: 
Input
	Output

4	
1   4   3   2	2   3   4   1
*/
#include <iostream>
using namespace std;

int main()
{
    int i,j,n,a[10],temp;
    cout<<"Enter the no of elements in array"<<endl;
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	for(i=0;i<n;i++)
	{
    	cin>>a[i];
	}	
	for ( i = 0, j = n- 1; i < n/2; i++, j--)  
    {     
        temp = a[i];  
        a[i] = a[j];  
        a[j] = temp;  
    }  
   
    for ( i = 0; i < n; i++)  
    {  
        cout << a[i] << " ";  
    }  
		
			
	}
