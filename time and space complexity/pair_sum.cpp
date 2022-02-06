#include <iostream>
#include <algorithm>
using namespace std;

int pairSum(int *arr, int n, int num)
{   
    sort(arr,arr+n);

    int i=0,j=n-1;
    int count = 0;

    while(i<=j){
        
    }
	//Write your code here
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}