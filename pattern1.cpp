#include<iostream>
using namespace std;

int main(){

  for(int i=1;i<=5;i++) {
    for(int j=5-i;j>=1;j--){
      cout<<"  ";
    }
    for(int k=1;k<=i*2;k++){
      cout<<"* ";
    }
    cout<<""<<endl;
  }

  //cout<<""<<endl;
  cout<<" ****** LP-2 ******"<<endl;

    for(int i=5;i>=1;i--) {
    for(int j=5-i;j>=1;j--){
      cout<<"  ";
    }
    for(int k=1;k<=i*2;k++){
      cout<<"* ";
    }
    cout<<""<<endl;
  }
  
  return 0;
}
