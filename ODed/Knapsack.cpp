#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
	if (n == 0 || W == 0)
		return 0;

	if (wt[n-1] > W)
	  	return knapSack(W, wt, val, n-1);
	else
		  return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1) , knapSack(W, wt, val, n-1));
      
	/* if we want to repeat items  just dont decrese the picking items make it 
			return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n) ,
			knapSack(W, wt, val, n-1));*/
}

int main()
{
	int val[] = { 60, 800, 120 ,800};
	int wt[] = { 10, 20, 30 ,25};
	int W = 100;
	int n = sizeof(val) / sizeof(val[0]);
	cout << knapSack(W, wt, val, n);
	return 0;
}

