#include<iostream>
#include<stdio.h>
using namespace std;
  class publication
  {
    private:
    string title;
    float price;
    public:
    void add()
    {
      cout<<"enter the publication information";
      cout<<"\n enter the title of the publication:";
      cin.ignore();
      getline(cin,title);
      cout<<"enter price of publication:";
      cin>>price;
    }
    void display()
    {
      cout<<"\n the title of publication is:"<<title;
      cout<<"\n the price of publication:"<<price;
    }
};
class book:public publication
{
    private:
    int page_count();
    public:
    void add_book()
    {
     try
    {
     add();
     cout<<"enter page count of book:";
     cin>>page_count;
     if(page_count<=0)
    {
     throw page_count;
    }
    }
     catch(...)
    {
     cout<<"\n invalid page count";page_count=0;
    }
    }
    void display_tape()
    {
       display();
       cout<<"\n the play time is"<<page_count;
    }
};
class tape:public publication
{
    private:
    float(play_time);
    public:
    void add_tape()
    {
     try
    {
     add();
     cout<<"enter the play duration of the tape:";
     cin>>play_time;
     if(play_time<=0)
    {
     throw play_time;
    }
    }
     catch(...)
    {
     cout<<"\n invalid play time";play_time=0;
    }
    }
     void display_tape()
    {
     display();
     cout<<"\n the play time is"<<play_time<<"min";
    }
};
    int main()
    {
     book b1[10];
     tape t1[20];
     int i,ch,b_count=0,t_count=0;
     do
    {
     cout<<"\n publication database\n";
     cout<<"menu";
     cout<<"\n1.add information of book";
     cout<<"\n2.add information of tape";
     cout<<"\n3.display information of book";
     cout<<"\n4.display information of tape";
     cin>>ch;
    switch(ch)
    {
     case 1:b1[b_count].add_book();
            b_count++;
            break;
     case 2:t1[t_count].add_tape();
            t_count++;
            break;
     case 3:for(int i=0;i<b_count;i++)
            {  
             b1[i].display_book();
            }
             break;
     case 4:for(int i=0;i<t_count;i++)
            {
             t1[i].display_tape();
            }
             break;
     case 5:cout<<"enter of program";
            }
            }
             while(ch!=5);
             return 0;
 }
     
