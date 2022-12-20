#include<iostream>
using namespace std;
class Max{
    public:
    int x;
        void functioncall(){
        cout << x ;
        }
};

class Min{
    public:
    int y;
        void call(){
            cout<<y;
    }
};

int main(){
    Max data;
    data.x=7;
    data.functioncall();
    Min date;
    date.y=10;
    date.call();
}