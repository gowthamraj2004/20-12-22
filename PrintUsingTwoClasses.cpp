#include<iostream>
using namespace std;
class Movie{
    public:
    string name;
    float rating;
    int year;
        void printout(){
            cout<<"Movie Name :"<<"\t"<<name<<"\n"<<"Movie Rating :"<<"\t"<<rating<<" \n"<<"Release Year :"<<"\t"<<year<<"\n";
        }
};

class Anime{
    public:
    string name;
    float rating;
    int year;
        void printout(){
            cout<<"Anime Name :"<<"\t"<<name<<"\n"<<"Anime Rating :"<<"\t"<<rating<<"\n"<<"Release Year :"<<"\t"<<year<<"\n";
        }
};

int main(){
    Movie m;
    Anime a;
    cout<<"Enter Movie Name :";
    cin>>m.name;
    cout<<"Enter Rating :";
    cin>>m.rating;
    cout<<"Enter Release Year :";
    cin>>m.year;
    cout<<"Enter Anime Name :";
    cin>>a.name;
    cout<<"Enter Rating :";
    cin>>a.rating;
    cout<<"Enter Release Year :";
    cin>>a.year;
    m.printout();
    a.printout();
}