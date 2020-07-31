#include <iostream>
using namespace std;
int main()
{
	
	string s;
	getline(cin,s);
	int d=0,f=0,g=0;
	for(int i=0;i<s.size();i++){
	if(isdigit(s[i])){
	d=1;
	}
	else if(s[i]=='.'){
	f=1;
	}
	else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
	g=1;
	}
	}
	if(f==1 && d==1)
	cout<<"This input is of type Float.";
  else
   if(d==1) 
	cout<<"This input is of type Integer.";
	else if(g==1)
	cout<<"This input is of type string.";
	

	return 0;

}

