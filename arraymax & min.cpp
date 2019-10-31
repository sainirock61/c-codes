#include<iostream>
using namespace std;
int main()
{
  int i,j,n1,arr1[500],loc1,min1;
  cout<<"\n";
  cout<<"          ==========================================================================\n";
  cout<<"           PROGRAM TO MERGE TWO DIFFERENT ARRAYS INTO A SINGLE THIRD ARRAY AND SORT\n";
  cout<<"          ==========================================================================\n";
  cout<<"\n\n";
  cout<<"    Enter the size of first array : ";
  while(!(cin>>n1)|| n1<=0)
 {
        cin.clear();
        cin.ignore(100,'\n');

        cout<<"\n     INVALID INPUT !! ENTER A POSITIVE NUMBER : ";
}
  cout<<"    Enter the sorted elements of first array : ";
  for(i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  cout<<"\n";

  int n2,arr2[500];
  cout<<"    Enter the size of second array : ";
  while(!(cin>>n2)|| n2<=0)
 {
        cin.clear();
        cin.ignore(100,'\n');

        cout<<"\n     INVALID INPUT !! ENTER A POSITIVE NUMBER : ";
}
  cout<<"    Enter the sorted elements of second array : ";
  for(i=0;i<n2;i++)
  {
    cin>>arr2[i];
  }
   cout<<"    __________________________________________________________________________\n";
  cout<<"\n";
  cout<<"     RESULT : THE FIRST ORIGINAL ARRAY IS : ";
  for(i=0;i<n1;i++)
  {
    cout<<arr1[i]<<" ";
  }
  cout<<"\n";
  cout<<"              THE SECOND ORIGINAL ARRAY IS : ";
  for(j=0;j<n2;j++)
  {
    cout<<arr2[j]<<" ";
  }
cout<<"\n\n";
 cout<<"            => THE FINAL MERGED SORTED ARRAY IS : ";



// MERGING & SORTING TWO ARRAYS INTO A THIRD ARRAY

 int arr3[500],k=0;
 i=0,j=0;
 while(i<n1 && j<n2)
 {
     if(arr1[i]<arr2[j])
     {
         arr3[k]=arr1[i];
         i++;k++;
     }
     else
     {
         arr3[k]=arr2[j];
         j++;k++;
     }
 }

  for(k=0;k<(n1+n2);k++)
  {
    cout<<arr3[k]<<" ";
  }
  cout<<"\n";

}
