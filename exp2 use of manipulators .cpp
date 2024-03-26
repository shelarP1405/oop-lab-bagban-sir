#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
       string moviename;
        int atprice,ctprice,noof_atsold,noof_ctsold;
        int donation_rate,grossamount,amount_donated,netsale;
       cout<<fixed<<setprecision(2);

       cout<<"Enter the movie name";
       cin>>moviename;
       
       cout<<"enter the price of adult ticket";
       cin>>atprice;
       
       cout<<"enter the price of child ticket";
       cin>>ctprice;
       
       cout<<"Enter the no adult ticket sold";
       cin>>noof_atsold;
       
        cout<<"Enter the no child ticket sold";
       cin>>noof_ctsold;
       
       cout<<"Enter the donation rate";
       cin>>donation_rate;
       
       grossamount=(atprice*noof_atsold + ctprice*noof_ctsold);
       
       amount_donated=(grossamount*donation_rate)/100;
       
       netsale=grossamount-amount_donated;
       
       cout<<setfill('-')<<left<<setw(30)<<"moviename"<<right<<moviename<<endl;
       cout<<setfill('-')<<left<<setw(30)<<"no of  adult ticket sold"<<right<<atprice<<endl;
       cout<<setfill('-')<<left<<setw(30)<<"no of child ticket sold"<<right<<ctprice<<endl;
       cout<<setfill('-')<<left<<setw(30)<<"gross amount"<<right<<grossamount<<endl;
       cout<<setfill('-')<<left<<setw(30)<<"donation rate"<<right<<donation_rate<<endl;
       cout<<setfill('-')<<left<<setw(30)<<"amount donated"<<right<<amount_donated<<endl;
       cout<<setfill('-')<<left<<setw(30)<<"net sale is"<<right<<netsale<<endl;
       return 0;
}
