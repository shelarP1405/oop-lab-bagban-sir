#include<iostream>
using namespace std;

class Matrix
{
	private:
	int rows;
	int column;
	int **data;
	public:
	 Matrix(int a,int b)
	 {
	 	rows=a;
	 	column=b;
	 	
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[column];
        }
    }
	 
	  friend ostream & operator << (ostream & out,Matrix &n);
	friend istream & operator >> (istream & in,Matrix &n);
	 
};

   istream & operator >> (istream & in,Matrix &n){
   	for(int i=0;i<n.rows;i++){
   		for(int j=0;j<n.column;j++){
   			in>>n.data[i][j];
		   }
	   }
   }
   
    ostream & operator << (ostream & out,Matrix &n){
   	for(int i=0;i<n.rows;i++){
   		for(int j=0;j<n.column;j++){
   			out<<n.data[i][j];
		   }
		   cout<<endl;
	   }
   }
int main()
{
	Matrix m(2,3);
	cin>>m;
	cout<<m;
	return 0;
}
