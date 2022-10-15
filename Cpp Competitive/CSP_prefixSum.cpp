/*
Problem
There are NN planets numbered 11 to NN. You are a space merchant who earns by selling goods on these planets. 
Traveling to each planet requires you to pay for the fuel. The difficulty of traveling to ii-th planet is D_iD 
i
​
 . You need to plan your trip by choosing a consecutive sub segment of planets.

Your earning of the trip is calculated as follows -

You earn AA coins for every planet you visit.
For each planet ii you visit, you have to pay C_iC 
i
​
  coins for the fuel.
If you visit every planet with indices LL to RR, you also have to pay gap(L,R)gap(L,R) coins where
gap(L,R) = max [ (D_r - D_l)^2]gap(L,R)=max[(D 
r
​
 −D 
l
​
 ) 
2
 ] for L<=l<=r<=RforL<=l<=r<=R
Calculate the maximum profit you can earn by traveling to a consecutive segment of planets. 
Note that if you travel to no planet at all, your net profit will be zero.

Input:
First line will contain TT, number of testcases. Then the testcases follow.
For each testcase, the first line contains two integers NN and AA
The next NN lines contains two integers C_i, D_iC 
i
​
 ,D 
i
​
 
Output:
For each testcase, output a single integer denoting the maximum profit you can earn.

Constraints
1 \leq T \leq 101≤T≤10
1 \leq N \leq 30001≤N≤3000
1 \leq A \leq 10^61≤A≤10 
6
 
1 \leq D_i, C_i \leq 10^61≤D 
i
​
 ,C 
i
​
 ≤10 
6
 
Sample Input:
1
3 10
1 3
3 1
2 2
Sample Output:
20
### EXPLANATION:
For L = 1 and R = 3, we have profit = (3 - 1 + 1) * 10 - (1 + 3 + 2) - (3 - 1)*(3 - 1) = 20. 
This is the maximum possible profit for any sub-segment.

*/