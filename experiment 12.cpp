/* Name-Sanya Jaitly
PRN-22070123100
Exp-12(Part-A)
Default constructor*/
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student()
    {
        cout<<"enter the rollno:";
        cin>>rollno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the fee:";
        cin>>fee;
    }

void display()
{
    cout<<endl<<rollno<<"\n"<<name<<"\n"<<fee;
}
};
int main()
{
    student s;
    s.display();
    
}
/*
Output
enter the rollno:12308
enter the name:Seema
enter the fee:20000

12308
Seema
20000
*/

/* 
Exp-12(Part-B)
Defining the constructor inside the class*/
#include<iostream>
using namespace std;
class date
{
    int d;
    int m;
    int y;

    public:
    date()
     {
        cout<<"enter the date:";
        cin>>d;
        cout<<"enter the month:";
        cin>>m;
        cout<<"enter the year:";
        cin>>y;
    }
void display()
{
    cout<<endl<<d<<"\t"<<m<<"\t"<<y;
}
};
int main()
{
    date d2;
    d2.display();
    
}
/*Output
enter the date:24
enter the month:8
enter the year:20

24/8/20
*/

/* 
Exp-12(Part-C)
Defining the constructor outside the class*/
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student();
    void display();
};
student::student()
{
     cout<<"enter the rollno:";
        cin>>rollno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the fee:";
        cin>>fee;
}
void student::display()
{
    cout<<endl<<rollno<<"\n"<<name<<"\n"<<fee;
}
int main()
{
    student s;
    s.display();
    
}
/*Output
enter the rollno:12308
enter the name:Seema
enter the fee:30000

12308
Seema
30000

*/
/*
Exp-12(Part-D)
Write the parametrised constructor*/
#include<iostream>
using namespace std;
class construct{
    int a,b;
    public:
    construct(int m,int n)
    {
        a = m;
        b = n;
    }
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};
int main()
{
    construct p(10,20);
    p.display();
}
/*Output
a=10
b=20
*/

/*
Exp-12(Part-E)
 Copy of constructor */
#include<iostream>
using namespace std;
class Wall 
{
    private:
    double length;
    double height;

    public:
    Wall(double len,double hgt)
     {
length = len;
height = hgt;
    }
    Wall(Wall&obj)
    {
length = obj.length;
height = obj.height;
    }
    double calculateArea()
    {
        return length*height;
    }
};
int main(){
    Wall wall1(10.5,8.6);
    Wall wall2 = wall1;
    cout<<"Area of Wall 1:"<<wall1.calculateArea()<<endl;
    cout<<"Area of Wall 2:"<<wall2.calculateArea();
    return 0;
}
/*Output
Area of Wall 1:90.3
Area of Wall 2:90.3
*/

/*
Exp-12(Part-F)
*/
#include<iostream>
using namespace std;
int count = 0;
class destruct
{
public:
destruct()
{
    count++;
    cout<<"The count is:"<<count<<endl;
}
~destruct()
{
    count--;
    cout<<"The count is:"<<count<<endl;
}
};
int main()
{
    destruct aa,bb,cc;
    {
        destruct dd;
    }
    return 0;
}
/*Output
The count is:1
The count is:2
The count is:3
The count is:4
The count is:3
The count is:2
The count is:1
The count is:0
*/