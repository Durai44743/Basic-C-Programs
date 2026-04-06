#include <iostream>
#include <iomanip>
using namespace std;
class List{
    int arr[100];
   
    public:
    int n=5;
    void Initial(int n);
    int Search(int n,int f);
    void addFirst(int &n,int a);
    void addLast(int &n,int b);
    void show(int n);
    friend ostream& operator<<(ostream &os,List l){
        for(int i=0;i<l.n;i++){
            os<<l.arr[i]<<endl;
            return os;
        }
    }
};
void List::Initial(int n){
    cout<<"Enter "<<n<<" Elements"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
}
int List::Search(int n,int f){
    int w=0;
    for(int i=0;i<n;i++){
        if(arr[i]==f) w=1;}
        return w;
    
}
void List::addFirst(int &n,int a){
    for(int i=n;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = a;
    n++;
}
void List::addLast(int &n,int b){
    arr[n] = b;
    n++;
}
void List::show(int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    List l1;
    int n,f,s,a,b;
    cout<<"Enter Size:"<<endl;
    cin>>n;
    l1.Initial(n);
    cout<<"Enter element"<<endl;
    cin>>f;
    s = l1.Search(n,f);
    if(s) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;
    cout<<"Enter First Element:"<<endl;
    cin>>a;
    cout<<"Enter Last Element:"<<endl;
    cin>>b;
    l1.addFirst(n,a);
    l1.addLast(n,b);
    l1.show(n);
    cout<<endl;
    cout<<l1<<endl;
    return 0;
}