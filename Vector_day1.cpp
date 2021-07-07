#include <iostream>
#include<vector>
using namespace std;

int main() {
	// Create a vector 
	//vector<int> a={1,2,3,4,9};
	
	//Fill constructor- Here 10 elements -val= 7 
	vector<int>a(10,7); 
	//Size of vector - No of elements
	cout<<a.size()<<endl;
	
	//Capacity - how much memory allocated
	cout<<a.capacity()<<endl;
	
	
	//pop_back - To remove the last element.
	a.pop_back();
	
	//Push_Back - O(1)
	a.push_back(16);
	
	
	//Printing o/P
	for (int i=0;i<a.size();i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}
