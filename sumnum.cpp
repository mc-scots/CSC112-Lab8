// This program gets a number, n, and then adds all numbers from 1 to end
#include<iostream>

using namespace std;

int main()
{
  int sum;
  int n;

  //get the upper limit
  cout << "n=";
  cin >> n;

  //add up all the numbers from 1 to n.
  sum=1;
  for(int i=0; i<n; i++) {
    sum+i;
    i++;
  }
  
  //print the results
  cout << "The sum of 1 thru " << n << " is " << sum << endl;

  return 0;
}
