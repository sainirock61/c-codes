#include<iostream>
using namespace std;
int main()
{
   cout<<"                                                      =======================\n";
   cout<<"                                                          PATTERN PROGRAMS \n";
   cout<<"                                                      =======================\n";
   cout<<"\n";
   int no,n;

   cout<<"\n";
   cout<<"                                 1.        *"<<"                                 2.        *\n";
   cout<<"                                           **"<<"                                         **\n";
   cout<<"                                           ***"<<"                                       ***\n";
   cout<<"                                           ****"<<"                                     ****\n";
   cout<<"\n";
   cout<<"                                 3.          *"<<"                               4.     A\n";
   cout<<"                                            ***"<<"                                     AB\n";
   cout<<"                                           *****"<<"                                    ABC\n";
   cout<<"                                          *******"<<"                                   ABCD\n";
   cout<<"\n";
   cout<<"                                 5.           A"<<"                              6.       *\n";
   cout<<"                                             AB"<<"                                      ***\n";
   cout<<"                                            ABC"<<"                                     *****\n";
   cout<<"                                           ABCD"<<"                                      ***\n";
   cout<<"                                                                                      *\n";
   cout<<"\n";
   cout<<"                               ENTER THE NUMBER OF PROGRAM WHICH YOU WANT TO RUN : ";



   while(!(cin>>no)|| (no!=1 && no!=2 && no!=3 && no!=4 && no!=5 && no!=6))
    {


       cin.clear();
       cin.ignore(100,'\n');
       cout<<"                                OOPS !! WRONG INPUT !! ENTER AGAIN : ";
    }

   cout<<"\n";
   cout<<"\n";

cout<<"                __________________________________________________________________________________________________________________\n";

   switch(no)
   {
   case 1:
    int i,j,n,space;
    cout<<"\n";
    cout<<"                             Enter the number of rows : ";
    cin>>n;
    cout<<"\n";

  for(i=1;i<=n;i++)
     {
           cout<<"                                ";
         for(j=1;j<=i;j++)
     {
          cout<<"*";

    }
      cout<<"\n";
    }
    cout<<"\n";
    break;

   case 2:

    cout<<"\n";
   cout<<"                               Enter the number of rows : ";
    cin>>n;
   cout<<"\n";


     for(i=1;i<=n;i++)
     {
            cout<<"                                  ";
           for(space=1;space<=(n-i);space++)
           {
                 cout<<" ";
            }

      for(j=1;j<=i;j++)
      {

          cout<<"*";

      }
      cout<<"\n";
      }
      cout<<"\n";
      break;

   case 3:

   cout<<"\n";
   cout<<"                                Enter the number of rows : ";
    cin>>n;
    cout<<"\n";

   for(i=1;i<=n;i++)
     {
          cout<<"                                 ";
          for(space=1;space<=(n-i);space++)
             {
                   cout<<" ";
              }

      for(j=1;j<=(2*i-1);j++)
      {

          cout<<"*";

      }
      cout<<"\n";
      }
      cout<<"\n";
      break;

   case 4:

     char d;
     cout<<"\n";
     cout<<"                               Enter the number of rows : ";
     cin>>n;
     cout<<"\n";

   for(i=1;i<=n;i++)
   {
    cout<<"                                         ";
    d='A';
    for(j=1;j<=i;j++)
    {

        cout<<d;
        d++;

     }

    cout<<"\n";
    }
    cout<<"\n";
    break;

   case 5:
    cout<<"\n";
   cout<<"                                  Enter the number of rows : ";
   cin>>n;
   cout<<"\n";

  for(i=1;i<=n;i++)
  {
    cout<<"                                         ";
    for(space=1;space<=(n-i);space++)
       {
         cout<<" ";
       }

    d='A';
    for(j=1;j<=i;j++)
    {

        cout<<d;
        d++;


    }

    cout<<"\n";
      }
      cout<<"\n";
      break;

   case 6:
    cout<<"\n";
   cout<<"                                   Enter the number of rows : ";
    cin>>n;
    cout<<"\n";

    for(i=1;i<=n;i++)
       {
              cout<<"                                        ";
          for(space=1;space<=(n-i);space++)
             {
                   cout<<" ";
              }

      for(j=1;j<=(2*i-1);j++)
      {

          cout<<"*";

      }
      cout<<"\n";
 }


  for(i=n-1;i>=1;i--)
  {
      cout<<"                                        ";
          for(space=1;space<=(n-i);space++)
             {
                   cout<<" ";
              }

      for(j=1;j<=2*i-1;j++)
      {

          cout<<"*";

      }
      cout<<"\n";
 }
 cout<<"\n";
 break;




}

}







