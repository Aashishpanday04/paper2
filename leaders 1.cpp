#include<iostream>
using namespace std;
 
/*C++ Function to print leaders in an array */
void printLeaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] <=arr[j])
                break;
        }   
        if (j == size) // the loop didn't break
            cout << arr[i] << " ";
  }
}
 
/* Driver program to test above function */
int main()
{
    int n;
    cin>>n;
  
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    printLeaders(arr, n);
    return 0;
}
