#include<iostream>
using namespace std;
int main(){
  int bill,cust,sum;
  cout<<"Please enter your bill"<<endl;
  cin>>bill;
  cout<<"Please enter the amount customer give to you: ";
  cin>>cust;
  sum=cust-bill;
  int sum1,sum2,sum5,sum10,sum20,sum50,sum100;
  if(cust > bill){
              sum100 = sum/100;
              sum50  =(sum-(sum100*100))/50;
              sum20  =((sum-(sum100*100))%50)/20;
              sum10  =(((sum-(sum100*100))%50)%20)/10;
              sum5   =((((sum-(sum100*100))%50)%20)%10)/5;
              sum2   =(((((sum-(sum100*100))%50)%20)%10)%5)/2;
              sum1   =(((((sum-(sum100*100))%50)%20)%10)%5)%2;

  cout<<"You have to give 1TK=   "<<sum1 <<endl;
  cout<<"You have to give 2TK=   "<<sum2<<endl;
  cout<<"You have to give 5TK=   "<<sum5<<endl;
  cout<<"You have to give 10TK=  "<<sum10<<endl;
  cout<<"You have to give 20TK=  "<<sum20<<endl;
  cout<<"You have to give 50TK=  "<<sum50<<endl;
  cout<<"You have to give 100TK= "<<sum100<<endl;
  }
  else{
    cout<<"***You have to pay more***"<<endl;
  }

}
