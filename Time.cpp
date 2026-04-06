#include <iostream>
using namespace std;

class Time{
    int h,m,s;
    public:
    Time(){
        
    }
    Time(int hh,int mm,int ss){
        h = hh;
        m = mm;
        s = ss;
    }
    friend bool operator <(Time &t1,Time &t2){
        if(t1.h < t2.h) return true;
        if(t1.h == t2.h && t1.m < t2.m) return true;
        if(t1.h == t2.h && t1.m == t2.m &&  t1.s < t2.s) return true;
        return false;
    }
    void show(){
        cout<<h<<":"<<m<<":"<<s<<endl;
    }

};
template <typename T>
class Tlist{
    T arr[100];
    int size;
    public:
    Tlist(){
        size = 0;
    }
    void insert(T t){
        arr[size] = t;
        size++;
    }
    void printBetween(T t1,T t2){
        for(int i=0;i<size;i++){
            if(t1 < arr[i] && arr[i] < t2){
                arr[i].show();
            }
        }
    }
};
int main(){
    Tlist<Time> list;
    list.insert(Time(2,34,54));
    list.insert(Time(5,45,34));
    list.insert(Time(3,54,23));
    list.insert(Time(1,23,17));
    list.insert(Time(4,23,45));
    Time t1(3,54,23),t2(6,23,43);
    if(t1 < t2) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    list.printBetween(t1,t2);
    return 0;
}