#include <iostream>

 using namespace std;

int main() {

printf("Hello ASCII \n");	

  cout<< (int)	'a' <<endl;
  cout<< int ('a')	<<endl;
  cout<< int ('A')	<<endl;
  cout<<char (65)	<<endl;
  
  char c1,c2,c3,c4,c5;
  cout<<"Enter 5 letters : ";
  cin>>c1>>c2>>c3>>c4>>c5 ;
  cout<<"ASCII message : " << int (c1) <<	" " << int (c2)
   << " " << int (c3) << " " <<int(c4) << " " << int (c5)<<endl ;
   
   int q1,q2,q3,q4,q5;
   cout<<"Enter 5 numbers :  ";
   cin>>q1>>q2>>q3>>q4>>q5;
   cout<<"Message   " <<char(q1)<<char(q2)<<char(q3)<<char(q4)<<char(q5)<<endl;
	
	system("pause>0");
}