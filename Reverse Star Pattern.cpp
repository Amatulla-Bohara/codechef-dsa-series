/*
question link : https://www.codechef.com/CCSTART2/problems/REVSTRPT

Reverse Star Pattern Problem Code: REVSTRPT
You're given a number N. Print the first N lines of the below-given pattern.

    *
   **
  ***
 ****
*****
Input:
First-line will contain the number N.
Output:
Print the first N lines of the given pattern.

Constraints
1≤N≤200
Sample Input 1:
4
Sample Output 1:
   *
  **
 ***
****
Sample Input 2:
2
Sample Output 2:
 *
**
EXPLANATION:
In the first example, we'll print the first 4 lines of the given pattern.
In the second example, we'll print the first 2 lines of the given pattern

*/



#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
for(int i=n; i>0; i--)
    {
      for(int j=0; j<=n; j++) //looping columns
      {
        if (j>=i)
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }
	return 0;
}
