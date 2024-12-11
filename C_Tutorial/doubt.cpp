#include<iostream>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(){
int n;
cin>>n;
int ar[n][n];
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		cin>>ar[i][j];
		
	}
}
int sum1=0;
for (int i = 0; i < n; i++)
{
	for (int j = i;  j++;)
	{
		cout<<ar[i][j]<<" ";
	}
}
return 0;

}