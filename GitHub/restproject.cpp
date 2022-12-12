#include <iostream>
using namespace std;

/*
Design a system for a restaurant in which users can order multiple food items from the following menu:
1. Press something to buy cheese pakoda
2. Press something to buy crispy potato
3. Press something to buy kadhai paneer
4. Press something to buy rice
5. Press something to buy naan/butter naan
6. Press something to buy pav bhaji
7. Press something to buy chole bhature
8. Press something to buy Gulab jamun
9. Press something to buy ice cream
User enters their balance in his/her credit card.
User can buy multiple products if she has desired balance.
If user is a member of the restaurant then system should give 10% discount.
At the end add 16% GST on total bills and deduct money from credit card.
*/
int main()
{
const float GST=0.16,discount=0.10;
int CheesePakoda= 250,crispypotato= 235,KadhaiPaneer= 300,Rice= 350,Naan=45,PavBhaji=180,cholebhature=500,GulabJamun=75,Icecream=90;
 float accountBalance=0,totalBill=0,finalBill=0,currentBill=0;
 char menu,membership,answer;
 cout<<endl<<endl<<"************** ASTRO RESTAURANT ***************"<<endl<<endl;
 cout<<"Enter Account Balance: ";
 cin>>accountBalance;
 cout<<endl<<"Do you have membership in our restaurant (y/n): ";
 cin>>membership;
 do
 {
  bool hasBalance=false;
  cout<<endl<<"=============Menu============="<<endl
   <<"1. Press '1' to Buy Cheese Pakoda"<<endl
   <<"2. Press '2' to Buy Crispy potato"<<endl
   <<"3. Press '3' to Buy Paneer"<<endl
   <<"4. Press '4' to Buy Rice"<<endl
   <<"5. Press '5' to Buy Naan/butter naan"<<endl
   <<"6. Press '6' to Buy Pav Bhaji"<<endl
   <<"7. Press '7' to Buy Chole bhature"<<endl
   <<"8. Press '8' to Buy Gulab Jamun"<<endl
   <<"9. Press '9' to Buy Ice cream" << endl
   <<endl<<"Please select Items from the menu: ";
  cin>>menu;
  switch(menu)
  {
  case '1':
   if (accountBalance>=(CheesePakoda+ CheesePakoda*GST))
   {
    totalBill=CheesePakoda;
    hasBalance=true;
   }         //if (accountBalance>=(Cheese pakoda+Cheese pakoda*GST)){ case '1'
   break;
  case '2':
   if (accountBalance>=( crispypotato+ crispypotato*GST))
   {
    totalBill=crispypotato;
    hasBalance=true;
   }         //if (accountBalance>=(Crispy potato+Crispy potato*GST)){ case '2'
   break;
  case '3':
   if (accountBalance>=( KadhaiPaneer+ KadhaiPaneer*GST))
   {
    totalBill=KadhaiPaneer;
    hasBalance=true;
   }         //if (accountBalance>=(kadhai paneer+kadhai paneer*GST)){ case '3'
   break;
  case '4':
   if (accountBalance>=(Rice+Rice*GST))
   {
    totalBill=Rice;
    hasBalance=true;
   }         //if (accountBalance>=(Rice+Rice*GST)){ case '4'
   break;
  case '5':
   if (accountBalance>=(Naan+ Naan*GST))
   {
    totalBill=Naan;
    hasBalance=true;
   }         //if (accountBalance>=(naan/butter naan+naan/butter naan*GST)){ case '5'
   break;
  case '6':
   if (accountBalance>=(PavBhaji+ PavBhaji*GST))
   {
    totalBill=PavBhaji;
    hasBalance=true;
   }         //if (accountBalance>=(Pav bhaji+pav bhaji*GST)){ case '6'
   break;
  case '7':
   if (accountBalance>=(cholebhature+ cholebhature*GST))
   {
    totalBill=cholebhature;
    hasBalance=true;
   }         //if (accountBalance>=(chole bhature+chole bhature*GST)){ case '7'
   break;
  case '8':
   if (accountBalance>=(GulabJamun+ GulabJamun*GST))
   {
    totalBill=GulabJamun;
    hasBalance=true;
   }         //if (accountBalance>=(Gulab jamun+Gulab jamun*GST)){ case '8'
   break;
  case '9':
   if (accountBalance>=(Icecream+ Icecream*GST))
   {
    totalBill=Icecream;
    hasBalance=true;
   }         //if (accountBalance>=(Ice cream+Ice Cream*GST)){ case '9'
   break;
  default:
   cout<<endl<<"You entered a wrong number"<<endl;
  }            //switch(menu)
  if(hasBalance==true)
  {
   if (tolower(membership)=='y')
   {
    finalBill+=totalBill+(totalBill*GST)-(totalBill*discount);
    currentBill=totalBill+(totalBill*GST)-(totalBill*discount);
   }
   else
   {
    finalBill+=totalBill+(totalBill*GST);
    currentBill=totalBill+(totalBill*GST);
   }            //if (tolower(membership)=='y')
   accountBalance-=currentBill;
   cout<<endl<<"Final Bill = "<<finalBill<<endl;
   cout<<endl<<"Remaining Balance = "<<accountBalance<<endl;
  }                //if(hasBalance==true)
  else
  {
   cout<<endl<<"You don't have Sufficient Money"<<endl;
   hasBalance=false;
  }//end else
  cout<<endl<<"Do you want to continue (y/n):";
  cin>>answer;
 }while (tolower(answer)=='y');
cout<<endl<<"Your Final Bill is = "<<finalBill<<endl;
cout<<endl<<"Remaining Balance = "<<accountBalance<<endl;
return 0;
}
