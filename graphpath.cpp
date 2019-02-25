#include<iostream>
#include<map>
#include<list>
#include<iterator>
#include<string.h>
using namespace std;
list<char > edge[100];
int no_of_node,no_of_edges;
void input(){
	int n;
	char data[100][2];
	cout<<"enter the no of nodes and edges"<<endl;
	cin>>no_of_node>>no_of_edges;
	cout<<"enter the edges"<<endl;
	for(int i=0;i<no_of_edges;i++){
		cin>>data[i];
		edge[(int)data[i][0]-65].push_back(data[i][1]);
		edge[(int)data[i][1]-65].push_back(data[i][0]);
	}
}

void display(){
	char ch;
	list<char >::iterator itr;
	for(int i=0;i<no_of_node;i++){
		ch=65+i;
		cout<<ch;
	for(itr=edge[i].begin();itr!=edge[i].end();++itr){
		cout<<"-->"<<*itr;
	}
	cout<<endl;
	}
}
int main(){
input();	
display();
return 0;	
}
