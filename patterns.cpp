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


ackCBS 2.0, a legacy being carried forward by students of SSCBS aims to collaborate the intellects of programmers, designers, application developers, tech-geeks and newbies in the world of programming for the intensive development of a hack. At hackCBS 2.0, we want to help you turn your ideas into reality. These ideas can generally be in the form of websites, applications, projects or posters. You’ll have all the freedom to create a product, learn new techniques for your future, or just have fun working on a project with friends. Moreover, we’ll offer you a chance to network with other creators & professionals. You will never learn faster than you will at a hackathon.From basic app building to making your own IoT device,

hackCBS 2.0 will have it all. If you haven’t participated in any hackathon before and if you’re looking out for the opportunity to do so, you’re in the right place. We welcome all newcomers and veterans alike. You are about to witness a series of events which will enlighten as well as enhance your CS skills. Our previous edition hackCBS witnessed a grand footfall of over 100 teams, fighting it all out to their position at the top while generating over 15,000 lines of code in the process of 24 hours, requiring more than 3000 cups of coffee to fuel the developers’ brains (Coffee’s on the house). But this time it’s gonna be different, ‘coz this time it’s going to be even grander.




