#include<iostream>
#include<string>
#include"gitHubUser.h"
using namespace std;
void inputFromUser(gitHubUser* arr, int size)//Takes input from the user
{
	bool flag=0;
	for(int i=0;i<size;i++)
	{
		cout<<endl;
	cout<<"Enter the first name of "<<i+1<<" user : ";
	cin>>arr[i].firstname;
	cout<<"Enter the email : ";
	cin>>arr[i].email;
	cout<<"Enter the user name : ";
		cin>>arr[i].username;
	
		for(int j=0;j<i && flag!=1;j++)//Checks weather the username previously exist or not
	{if(arr[i].username==arr[j].username)
			{cout<<"This userName already exists, enter another userName"<<endl;
		cout<<"Enter the first name of "<<i+1<<" user : ";
		cin>>arr[i].username;}
		}	
	cout<<"Enter the password : ";
	cin>>arr[i].password;

}
}
bool Comparison(gitHubUser arr, gitHubUser  arr1)//compares user 1 with user 2
{
	if(arr.username == arr1.username && arr.email==arr1.email && arr.firstname==arr1.firstname && arr.password==arr1.password)
		return true;
	else
return false;
}
gitHubUser* searchUser ( gitHubUser* users, int size, string userName) //serach for thee user 
{
	gitHubUser *p=nullptr;
	for(int i=0;i<size;i++)
	{
		if(userName==users[i].username)
		      return & users[i];
		
}
return nullptr;
}
int main()
{
	int size=4;
	int check=0;
	string username;
	gitHubUser * user=new gitHubUser[size];  //declare a dynamic array of four  students
	inputFromUser(user,size);//takes input from user
	check=Comparison(user[0],user[1]);//call function compare
	if(check==1)
		cout<<"User 1 and 2  are same "<<endl;
	else
		cout<<"User 1 and 2 are not same"<<endl;
	cout<<"Enter the name that you want to search";
	cin>>username;
	cout<<searchUser(user,size,username);
	
	delete [] user;



}