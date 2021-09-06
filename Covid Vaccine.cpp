/*
Finally, Doctor's found COVID vaccine and has been notified the government and the government has asked a team of doctors to form a plan to distribute it to the public as soon as possible. There are a total of N people with ages a1,a2,…,aN.

It is only possible to vaccinate up to D people per day. Anyone whose age is ≥80 or ≤9 is considered to be at risk. So, government has asked to vacinate first the people who falls under this age range. Find the smallest number of days needed to vaccinate these people among the given people.

Input Format

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.

The first line of each test case contains two space-separated integers N and D.

The second line contains N space-separated integers a1,a2,…,aN.

Constraints

1≤ T ≤10

1≤ N ≤10^4

1≤ D ≤10^5

1≤ ai ≤100 for each valid i

Output Format

For each test case, print a single line containing one integer ― the smallest required number of days.

Sample Input 0

2
10 1
12 45 23 6 89 5 81 80 36 3
5 2
2 56 96 9 45
Sample Output 0

6
2
Explanation 0

In first case, there are 6 people whose age is **≥**80 or **≤**9 . And each day only one person can be vaccinated. So total minimum days to vaccinate 6 people is 6 days.

In second case, there are 3 people whose age is **≥**80 or **≤**9 . And each day 2 person can be vaccinated. So total minimum days to vaccinate 3 people is 2 days.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q,n,i,j,count=0;
    float d;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>n>>d;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if((a[j]>=80) || (a[j]<=9))
            {
                count++;
            }
        }
    float day=0;
    day=count/d;
    cout<<round(day)<<endl;
    count=0;
    }
    return 0;
}
