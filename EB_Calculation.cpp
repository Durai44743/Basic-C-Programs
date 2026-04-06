/*
create a class  EB and  declare the prefered variables.Overload the operator << to show the customer details 
and create a virtual function Calcbill.design 2 classes customer1 and customer2 override the calcbill
 function to provide instructions
 */
#include <iostream>
#include <string>
using namespace std;

class EB{
    protected:
    int no;
    string name;
    int units;
    int bill;
    public:
    EB(int n,string name1){
        no = n;
        name = name1;
    }
    EB(EB& eb){
        no = eb.no;
        name = eb.name;
    }
    friend ostream& operator<<(ostream& os,EB &eb){
        os<<"Name:"<<eb.name<<endl;
        os<<"No:"<<eb.no<<endl;
        os<<"Units Consumed:"<<eb.units<<endl;
        os<<"Bill:"<<eb.bill<<endl;
        return os;
    }
    virtual void calcBill(int unit) = 0;
};
class Consumer1 : public EB{
    public:
    Consumer1(int n1,string na) : EB(n1,na){
        no = n1;
        name = na;
    } 
   
    void calcBill(int unit) override{
        units = unit;
        bill = units * 5;
    } 
};
class Consumer2 : public EB{
    public:
    Consumer2(int n1,string na) : EB(n1,na){
        no = n1;
        name = na;
    } 
    
    void calcBill(int unit) override{
        units = unit;
        if(units<=100)
        bill = units * 5;
        else bill = units * 10;
    } 
};
int main(){
    EB *eb[5];
    eb[0] = new Consumer1(100,"Durai");
    eb[1] = new Consumer2(101,"Dhanush");
    eb[0]->calcBill(104);
    eb[1]->calcBill(104);
    cout<<*eb[0]<<endl;
    cout<<*eb[1]<<endl;
    return 0;
}