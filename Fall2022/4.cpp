#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
	int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
				count++;
            }
        }
        
    }
	printf("%d\n",count);
   
     
  
    
}
int main()
{
    int arr[100];
    int n;
    scanf("%d",&n);
    //input the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //call the bubble sort
    bubblesort(arr,n);

    return 0;
    
}