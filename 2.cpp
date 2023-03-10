/*You are given the height H (in metres) and mass M (in kilograms). The Body Mass Index (BMI) of a person is computed as M/H^2 .
Report the category into which a person falls, based on his BMI:
	Category 1: Underweight if BMI ≤18
	Category 2: Normal weight ifBMI ∈\{19, 20,…, 24\}
	Category 3: Overweight if BMI ∈\{25, 26,…, 29\}
	Category 4: Obesity if BMI ≥30


Input:
The first line of input will contain an integer, TT, which denotes the number of testcases. Then the testcases follow.
Each testcase contains a single line of input, with two space separated integers, M, HM,H, which denote the mass and height of Agastya respectively.
Output:
 For each testcase, output in a single line, 1, 2, 31,2,3 or 44, based on the category in which Agastya falls.
Constraints
 1≤T≤2*10^4
1 ≤ M ≤ 10^4  
1≤H≤10^2 
It is guaranteed that H^2 divides M.
Sample 
Input
	Output

3	
72      2	1
80      2	2
120    2	4
Explanation:
Case 1: Since M/H^2 =72/2^2 =18, therefore person falls in category 1.
Case 2: Since M/H^2 =80/2^2 =20, therefore person falls in category 2.
Case 3: Since M/H^2 =120/2^2 ==30, therefore person falls in category 4.*/

#include <iostream>
using namespace std;

int main()
{
    int i,t,M,H,BMI;
    cout<<"Enter the no of test cases"<<endl;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    
	    cout<<"Test case:"<<i<<endl;
	    cout<<"Enter the mass"<<endl;
    	cin>>M;
    	cout<<"Enter the height"<<endl;
    	cin>>H;
	
	    BMI=M/(H*H);
	    if(BMI<=18)
	    {
	        cout<<" Category 1:UNDERWEIGHT"<<endl;
	    }
	    else if(BMI>=19 && BMI<=24)
	    {
	        cout<<"Category 2:NORMAL WEIGHT"<<endl;
	    }
	    else if(BMI>=25 && BMI<=29)
	    {
	        cout<<"Category 3:OVER WEIGHT"<<endl;
	    }
         else
         
         {
             cout<<"Category 4:OBESITY"<<endl;
         }
	   
	    
	}
}

