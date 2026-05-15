#include<iostream>
#include<vector>
using namespace std;

int main(){


vector<int>v;
int element,size;
cin>>size;
for(int i=0;i<size;i++){
	cout<<"enter elements in vector ";
	cin>>element;
	v.push_back(element);
}

//cout<<v;

for (int f = 0 ; f<v.size() ; f++){
cout<<v[f]<<endl;
}


return 0;
}
