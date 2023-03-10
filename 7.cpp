/*Dhruv is very fond of horses. He enjoys watching them race. As expected, he has a stable full of horses. He, along with his friends, goes to his stable during the weekends to watch a few of these horses race. Agastya wants his friends to enjoy the race and so he wants the race to be close. This can happen only if the horses are comparable on their skill i.e. the difference in their skills is less.
There are N horses in the stable. The skill of the horse i is represented by an integer S[i]. Dhruv needs to pick 2 horses for the race such that the difference in their skills is minimum. This way, he would be able to host a very interesting race. Your task is to help him do this and report the minimum difference that is possible between 2 horses in the race.
Input:
First line of the input file contains a single integer T, the number of test cases.
Every test case starts with a line containing the integer N.
The next line contains N space separated integers where the i-th integer is S[i].
Output:
For each test case, output a single line containing the minimum difference that is possible.
Constraints:
1 ≤ T ≤ 10
2 ≤ N ≤ 5000
1 ≤ S[i] ≤ 1000000000
Sample 1:
Input	Output
1	
5	
4 9 1 32 13	3
Explanation:
The minimum difference can be achieved if we pick horses with skills 1 and 4 for the race.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
 // your code goes here
 int t;
 cout<<"Enter the numebr of testcases:";
 cin>>t;
 while(t--){
 int n;
 cout<<"Enter no of horses:";
 cin>>n;
int arr[n];
 cout<<"Enter the skill:";
 for(int i=0;i<n;++i){
 cin>>arr[i];
 }
 int min_diff=INT_MAX;
 sort(arr,arr+n);
 for(int i=1;i<n;++i){
 int d=arr[i]-arr[i-1];
 if(d<min_diff){
 min_diff=d;
 }
 }
 cout<<min_diff<<endl;
 }
 return 0;
}