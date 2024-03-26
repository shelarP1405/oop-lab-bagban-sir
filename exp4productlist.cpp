#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Product
{
  private:
  
  vector<Product>products;  // (Product) is datatype and (products) is vector name

  public:
  int product_id;
  string product_name;
  int product_price;
  float gst;
  void insert();
  void display();
  void deleteproduct(int product_id);
};
void Product:: insert(){
    Product productlist;
    cout<<"Enter Product ID:";
    cin>>productlist.product_id;
    cout<<"Enter product name";
    cin>>productlist.product_name;
    cout<<"Enter product price";
    cin>>productlist.product_price;
    cout<<"Enter GST:";
    cin>>productlist.gst;

    products.push_back(productlist);
    cout<<" product added successfully"<<endl;
}

void  Product :: display()
{
    cout<<"product Id\tproduct name\tproduct price\tGST"<<endl;
    for(int i=0;i<products.size();i++)
    {
        Product& productlist=products[i];
        cout<<productlist.product_id<<"\t\t"<<productlist.product_name<<"\t\t"<<productlist.product_price<<"\t\t"<<productlist.gst<<endl;
    }
}


void Product :: deleteproduct(int product_id){
    for(int i=0;i<products.size();i++)
    {
        if(products[i].product_id==product_id)
        {
            products.erase(products.begin()+i);
            /* when we delete product from end we do -i.
               when we delete product from begin we do +i. */
            cout<<"product with Id"<<product_id<<"deleted successfully"<<endl;
        }
    }
}
int main()
{
    Product productlist;
    char choice;

    do{
        cout<<"\n1.Add new product\n2.display product list\n3.delete product\n4.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            case '1':
            productlist.insert();
            break;

            case '2':
            productlist.display();
            break;
            
            case '3':
            int product_id;
            cout<<"Enter the product Id to delete:";
            cin>>product_id;
            productlist.deleteproduct(product_id);
            break;

            case '4':
            cout<<"Exit program....";
            exit(0);

            default:
            cout<<"Invalid choice. please enter valid choice";
        }
    }while(choice!=4);
    return 0;
}