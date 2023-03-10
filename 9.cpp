/*There are N students in a class, where the i-th student has a score of Ai.
The i-th student will boast if and only if the number of students scoring less than or equal to Ai is greater than the number of students scoring greater than Ai.
Find the number of students who will boast.
Input Format
•	The first line contains T - the number of test cases. Then the test cases follow.
•	The first line of each test case contains a single integer N - the number of students.
•	The second line of each test case contains N integers 1,2,…,A1,A2,…,AN - the scores of the students.
Output Format
For each test case, output in a single line the number of students who will boast.



Constraints
•	1≤T≤1000
•	1≤N≤100
•	0≤Ai≤100

Input
	Output

3	
3	
100 100 100	3
3	
2 1 3	2
4	
30 1 30 30	3
Explanation:
Test case1: All three students got the highest score. So all three of them will boast.
Test case2: Only the student with score 1 will not be able to boast.
Test case 3: Only the student with score 1 will not be able to boast.
*/









#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the test cases"<<endl;
    cin>>n;
    while (n--)
    {
        int a;
        cout<<"Enter the number of students"<<endl;
        cin>>a;
        int arr[a];
        int sum=0;
        cout<<"Enter the student marks"<<endl;
        for (int i = 0; i < a; i++)
        {
            
            cin>>arr[i];
        }
        for (int i = 0; i < a; i++)
        {
        int count=0;
           for (int j = 0; j < a; j++)
           {
               if (arr[i]<arr[j])
                   count++;
               }
               if (count<a-count)
                sum++;
   }
        cout<<sum<<endl;
    }
    return 0;
}