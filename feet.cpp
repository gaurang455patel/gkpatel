#include<iostream>
using namespace std;
class dist
{
int feet;
    float inches;
public:
    void getdata()
    {
cout<<"enter distance in feet and inches :";
cin>>feet>>inches;
    }
    void putdata()
    {
cout<<"feet="<<feet<<"'"<<endl<<"inches"<<inches<<"\""<<endl;
cout<<feet<<"'"<<inches<<"\""<<endl;
    }
dist add(dist d2)
    {
dist d;
int i;
        feet=feet+d2.feet;
        inches=inches+d2.inches;
        for(i=1;inches>=12;i++)
        {
            feet=feet+1;
            inches=inches-12;
        }
        return d;
    }
    void add(dist d1,dist d2)
    {
int i;
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        for(i=1;inches>=12;i++)
        {
            feet=feet+1;
            inches=inches-12;
        }

    }
};
int main()
{
dist d1,d2,d3;
    d1.getdata();
    d2.getdata();
cout<<"distance of d1 :"<<endl;
    d1.putdata();
cout<<"distance of d2 :"<<endl;
    d2.putdata();
    //d3.add(d1,d2);
//cout<<"addition is :"<<endl;
  //  d3.putdata();
    d3=d1.add(d2);
cout<<"total distance :";
    d3.putdata();
    return 0;
}
