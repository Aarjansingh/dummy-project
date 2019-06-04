#include<iostream>
using namespace std;
#include<string>
int main() 
{
char s[50];
cout<<"Enter a string:"<<endl;
cin_getline(s,50);
find_length(s);
return 0;
}
void find_length(char a[])
{
	int i=0,l;
	int num_of_character=0;
	while(a[i]!='\0')
	{num_of_character++;
	i++;
	
	}
	cout<<"Length of string="<<num_of_character<<endl;
	
}

