#include<iostream>
using namespace std;

int main(){

int n,i;
cin>>n;
cout<<"Enter a number: ";

for(i=1;i<=n;i++){
	if (i%2==0)  {
		continue;

	}
	cout<<i<<endl;
}
return 0;
}
