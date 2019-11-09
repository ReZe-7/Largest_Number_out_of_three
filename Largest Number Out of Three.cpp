#include <iostream>

using namespace std;



// program for finding greater number in three number.

// main() function

int main()

{

	float a,b,c;                   //variables

	cout<<"Largest No. out of Three \n\n";

	cout<<"\nENTER FIRST NO. :";

	cin>>a;

	cout<<"ENTER SECOND NO. :";

	cin>>b;

	cout<<"ENTER THIRD NO. :";

	cin>>c;

	if(a>b)                       // logic using if-else

	{

		if(a>c)



			{

				cout<<"Largest NO. :"<<a;

			}

        else

		    {

                cout<<"Largest NO. :"<<c;

		    }



	}

	else

	{

          if(b>c)



			{

				cout<<"Largest NO. :"<<b;

			}

		   else

		   {

				cout<<"Largest NO. :"<<c;

		   }

	}

	return 0;

}
