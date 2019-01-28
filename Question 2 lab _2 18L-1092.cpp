#include<iostream>
#include"gitHubFolders.h"                                            
#include<string>
#include <fstream>
using namespace std;
ifstream fin;
	ofstream fout;
void readDataFromFile( gitHubUser * users, string filepath) 
{
	int size;
	fin>>size;
	users=new  gitHubUser[size];
fin.open("file.txt");
	for(int i=0;i<size;i++)
		{fin>>users[i].email;
	fin>>users[i].firstname;
	fin>>users[i].username;
}
}
int main()
{
	string filepath;
	gitHubUser *classroom;
	
	cout<<"Enter the location where your file is situated";
	filepath="file.txt";
	readDataFromFile(classroom,filepath);

}
