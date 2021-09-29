#include <iostream>
using namespace std;

int main(){

	int quantity,price;
	cin>>quantity;
	cout<<"enter quantity"<<endl;
	price = quantity*100;
	if(price>1000){
		cout<<"Total cost is"<<price-(price*.1)<<endl;
	}
	else
	{
		cout<<"total cost is"<<price<<endl;
	}
	return 0;
}