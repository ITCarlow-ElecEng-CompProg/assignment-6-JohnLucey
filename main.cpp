/*
Decimal / Binary Numbering Systems Conversion Calculator
Author John Lucey
Created on 2/10/17
Last Edited on 9/10/17
*/

//Pre-processor directives
#include <math.h>
#include <iostream>
using namespace std;

//Function Prototypes
 int bin_2_dec(long int);
 int dec_2_bin(long int);

//Variable declared
char minput;
int n;

//Main Function
int main()
{
    //Explains program to user
    cout << "Binary Numbering Systems Conversion Calculator \n\n" << endl;

    //Do while loop to ensure the user is looped until 'q' is selected
    do
    {
        //Menu options displayed to user & input prompted
        cout<<"\n Choose from the following options: \n" <<
              "\n Press b to convert a number from binary to decimal\n"<<
              "\n Press d to convert a number from decimal to binary\n"<<
              "\n Press q to quit\n\n"<<endl;
              cin>>minput;

        //Switch case statement to invoke functions or exit loop
      switch (minput)
      {
          case 'b': cout<<"Enter binary number : \n\n";
                    cin>>n;
                    int bin_2_dec(long int n);
                    cout<<" The binary number " << n << " is " << bin_2_dec(n) << " in decimal\n\n";
                    break;
          case 'd': cout<<" Enter decimal number : \n\n";
                    cin>>n;
                    int dec_bin(long int n);
                    cout<<" The decimal number " << n << " is " << dec_2_bin(n) << " in binary\n\n ";
                    break;
          case 'q': cout<<" Goodbye!!!!!!!!! "<<endl;
                    break;
          default : cout<<" Please try again"<<endl;

      }



      }

      //Do while loop condition
      while (minput != 'q');
    //nil return of main function
    return 0;
}

        //binary to decimal calculation function
       int bin_2_dec(long int n)
      {
          //variables declared
        int decimal = 0, i = 0, remainder;
        //loop to increment calculation
        while(n!=0)
        {
            remainder = n%10;
            n/=10;
            decimal +=remainder * pow(2, i);
            ++i;
        }
        //value returned to main function
        return decimal;

      }

        //decimal to binary calulation function
      int dec_2_bin(long int n)

      {
          //variables declared
            long long bin = 0;
            int remainder, i = 1;

            while(n!=0)
            {
                //loop to increment calculation
                remainder = n%2;
                n/=2;
                bin += remainder * i;
                i *= 10;
            }
            //Value returned to main function
            return bin;
      }
