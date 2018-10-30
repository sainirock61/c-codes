#include<iostream>
using namespace std;
void matrixadd(int a[100][100],int b[100][100],int c[100][100],int n,int m)
{

    for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 c[i][j]=a[i][j]+b[i][j];
             }
         }
}
void matrixsub(int a[100][100],int b[100][100],int c[100][100],int n,int m)
{

    for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 c[i][j]=a[i][j]-b[i][j];
             }
         }
}
void matrixsub1(int a[100][100],int b[100][100],int c[100][100],int n,int m)
{

    for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 c[i][j]=b[i][j]-a[i][j];
             }
         }
}
void matrixmul(int a[100][100],int b[100][100],int c[100][100],int n1,int m1,int n2,int m2)
{
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            int sum=0;
            for(int k=0;k<m1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

}

int main()
{
   int x;
   cout<<"      ===========================================\n";
   cout<<"        MENU DRIVEN PROGRAM - MATRIX OPERATIONS\n";
   cout<<"      ===========================================\n";
   cout<<"\n\n\t 1. ADDITION OF TWO MATRICES\n";
   cout<<"\t 2. SUBTRATION OF TWO MATRICES\n";
   cout<<"\t 3. MULTIPLICATION OF TWO MATRICES\n";
   cout<<"\n\n\t Enter the program you want to run : ";
   while(!(cin>>x)|| x<=0)
   {
       cin.clear();
       cin.ignore(100,'\n');
       cout<<"\n\t INVALID INPUT !! ENTER A POSITIVE NUMBER : ";
   }
   switch(x)
   {

   case 1:

   cout<<"\n   ________________________________________________________________________________\n";
   int a[100][100],b[100][100],c[100][100],i,j,n,m,arr[100][100];
         cout<<"\n\n\t NOTE : FOR ADDITION AND SUBTRACTION OF TWO MATRICES, DIMENSION OF BOTH MATRICES SHOULD BE SAME. ";
         cout<<"\n\n\t Enter the number of rows(n) :";
         cin>>n;
         cout<<"\n\t Enter the number of columns(m) :";
         cin>>m;
         cout<<"\n\t Enter "<<n*m<<" elements of the first matrix : ";
         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
                 cin>>a[i][j];
             }
         }
         cout<<"\n\t THE FIRST MATRIX YOU ENTERED IS : \n";
         cout<<"\n";
         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
                 cout<<a[i][j]<<"   ";;
             }
             cout<<"\n";
         }
         cout<<"\n\t Enter "<<n*m<<" elements of the second matrix : ";
         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
                 cin>>b[i][j];
             }
         }
         cout<<"\n\t THE SECOND MATRIX YOU ENTERED IS : \n";
         cout<<"\n";
         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
                 cout<<b[i][j]<<"   ";;
             }
             cout<<"\n";
         }
         matrixadd(a,b,c,n,m);

         cout<<"\n\t RESULT : THE SUM OF TWO MATRICES IS : \n";
         for(i=0;i<n;i++)
         {
             cout<<"\n\t\t\t\t";
             for(j=0;j<m;j++)
             {
                 cout<<c[i][j]<<"   ";
             }
             cout<<"\n";

         }
         break;

    case 2:

       cout<<"\n   ________________________________________________________________________________\n";
         cout<<"\n\n\t NOTE : FOR ADDITION AND SUBTRACTION OF TWO MATRICES, DIMENSION OF BOTH MATRICES SHOULD BE SAME. ";
         cout<<"\n\n\t Enter the number of rows(n) :";
         cin>>n;
         cout<<"\n\t Enter the number of columns(m) :";
         cin>>m;
         cout<<"\n\t Enter "<<n*m<<" elements of the first matrix (A) : ";
         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
                 cin>>a[i][j];
             }
         }
         cout<<"\n\t THE FIRST MATRIX YOU ENTERED IS : \n";
         cout<<"\n";
         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
                 cout<<a[i][j]<<"   ";
             }
             cout<<"\n";
         }
         cout<<"\n\t Enter "<<n*m<<" elements of the second matrix (B) : ";
         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
                 cin>>b[i][j];

             }

         }
         cout<<"\n\t THE SECOND MATRIX YOU ENTERED IS : \n";
         cout<<"\n";
         for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
             {
                 cout<<b[i][j]<<"   ";

             }
             cout<<"\n";
         }

         int no;
         cout<<"\n\t What you want to do :- \n";
         cout<<"\t   1.  A-B\n";
         cout<<"\t   2.  B-A";
         cout<<"\n";
         cin>>no;
         switch(no)
         {
           case 1:

          matrixsub(a,b,c,n,m);

         cout<<"\n\t RESULT : THE DIFFERENCE OF TWO MATRICES IS : \n";
         for(i=0;i<n;i++)
         {
             cout<<"\n\t\t\t\t";
             for(j=0;j<m;j++)
             {
                 cout<<c[i][j]<<"   ";
             }
             cout<<"\n";
         }
         break;

           case 2:
          matrixsub1(a,b,c,n,m);

         cout<<"\n\t RESULT : THE DIFFERENCE OF TWO MATRICES IS : \n";
         for(i=0;i<n;i++)
         {
             cout<<"\n\t\t\t\t";
             for(j=0;j<m;j++)
             {
                 cout<<c[i][j]<<"   ";
             }
             cout<<"\n";
         }
         break;
         }
        break;

         case 3:
             int n1,m1,n2,m2;
             cout<<"\n   ________________________________________________________________________________\n";
             cout<<"\n\t Enter the rows(n1) of first matrix(A) : ";
             cin>>n1;
             cout<<"\n\t Enter the columns(m1) of the first matrix : ";
             cin>>m1;
             cout<<"\n\t NOTE : TO MULTIPLY TWO MATRICES, m1 MUST BE EQUAL TO n2 ";
             cout<<"\n\t Enter the rows(n2) of the second matrix(B) : ";
             while(!(cin>>n2)|| n2!=m1)
             {
                 cin.clear();
                 cin.ignore(100,'\n');
                 cout<<"\n\t INVALID INPUT !! m1 not matched with n2 !! ENTER AGAIN : ";
             }
             cout<<" \n\t Enter the columns(m2) of the second matrix : ";
             cin>>m2;
             cout<<"\n\n\t Enter "<<n1*m1<<" elements of first matrix(A) : ";
             for(i=0;i<n1;i++)
           {
             for(j=0;j<m1;j++)
             {
                 cin>>a[i][j];
             }

           }
           cout<<"\n\t THE FIRST MATRIX YOU ENTERED IS : \n";
         cout<<"\n";
           for(i=0;i<n1;i++)
           {
             for(j=0;j<m1;j++)
             {
                 cout<<a[i][j]<<"   ";
             }
             cout<<"\n";
           }

           cout<<"\n\n\t Enter "<<n2*m2<<" elements of second matrix(B) : ";
             for(i=0;i<n2;i++)
           {
             for(j=0;j<m2;j++)
             {
                 cin>>b[i][j];
             }

           }
           cout<<"\n\t THE SECOND MATRIX YOU ENTERED IS : \n";
         cout<<"\n";

              for(i=0;i<n2;i++)
           {
             for(j=0;j<m2;j++)
             {
                 cout<<b[i][j]<<"   ";
             }
             cout<<"\n";
           }
            matrixmul(a,b,c,n1,m1,n2,m2);
            cout<<"   _______________________________________________________________________________\n";
            cout<<"\n";
            cout<<"\n\t RESULT : PRODUCT OF TWO MATRIX IS : \n";
            cout<<"\n";
            for(i=0;i<n1;i++)
         {
             cout<<"\n\t\t\t\t";
             for(j=0;j<m2;j++)
             {
                 cout<<c[i][j]<<"   ";
             }
             cout<<"\n";
         }

         break;

         default :
            cout<<"\n\t INVALID INPUT !! ENTER AGAIN : ";
            break;


   }

}
