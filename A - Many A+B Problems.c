/* You are given 
N pairs of integers: 
(A 
1
​
 ,B 
1
​
 ),(A 
2
​
 ,B 
2
​
 ),…,(A 
N
​
 ,B 
N
​
 ). For each 
i=1,2,…,N, print 
A 
i
​
 +B 
i
​
 .

Constraints
1≤N≤1000
−10 
9
 ≤A 
i
​
 ,B 
i
​
 ≤10 
9
 
All values in the input are integers.
Input
The input is given from Standard Input in the following format:

N
A 
1
​
  
B 
1
​
 
A 
2
​
  
B 
2
​
 
⋮
A 
N
​
  
B 
N
​
 
Output
Print 
N lines. For 
i=1,2,…,N, the 
i-th line should contain 
A 
i
​
 +B 
i
​
 .

Sample Input 1

4
3 5
2 -6
-5 0
314159265 123456789
Sample Output 1

8
-4
-5
437616054
The first line should contain 
A 
1
​
 +B 
1
​
 =3+5=8.
The second line should contain 
A 
2
​
 +B 
2
​
 =2+(−6)=−4.
The third line should contain 
A 
3
​
 +B 
3
​
 =(−5)+0=−5.
The fourth line should contain 
A 
4
​
 +B 
4
​
 =314159265+123456789=437616054.  */


#include<stdio.h>
int main()
{
  int n;
  long long int a,b;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%lld %lld",&a,&b);
    
    printf("%lld\n",a+b);
  }
  return 0;

}
