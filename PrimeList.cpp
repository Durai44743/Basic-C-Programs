#include <iostream>
#include <iomanip>
using namespace std;

class List{
    int arr[100];
    int n;
    public:
    List(int nn){
        n = nn;
    }
    friend void findPrime(List &l1,List &l2){
        int s = 0;
        for(int i=0;i<l1.n;i++){
            int count = 0;
            for(int j=1;j<l1.arr[i];j++){
                if(l1.arr[i] % j == 0){
                    count++;
                }
            }
            if(count == 2){
                l2.arr[s] = l1.arr[i];
                s++;
            }
        }
        l2.n = s;
    }
    friend void addList(List &l,int in){
       for(int i=in;i<l.n;i++){
        l.arr[i-1] = l.arr[i];
       }
       //l.arr[in] = el;
       l.n--;
    }
    friend istream& operator>>(istream& is,List &l){
        cout<<"Enter "<<l.n<<" Elements"<<endl;
        for(int i=0;i<l.n;i++){
            is>>l.arr[i];
        }
        return is;
    }
    friend ostream& operator<<(ostream &os,List &l){
        for(int i=0;i<l.n;i++){
            os<<l.arr[i]<<"  ";
        }
        return os;
    }
};
int main(){
    List l1(5),l2(0);
    cin>>l1;
    cout<<l1;
    findPrime(l1,l2);
    cout<<endl<<l2;
    addList(l1,3);
    cout<<endl<<l1;
    return 0;
}