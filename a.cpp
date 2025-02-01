#include <iostream>
#include<vector>    
#include<string>
#include<list>
#include<algorithm>
#include<cstdlib>
#include<iomanip>
#include <unistd.h>

using namespace std;

enum lessons {f=3,c1=3,p1=3,p=3,a=2,h=2,c=3,m=4,l=1,k=1,e=3};


struct lessonsCE
{
    float farsi;
    float calculous1;
    float history;
    float physics1;
    float mabani;
    float english;
    float kargah;

     void read()
    {
    cout<<"Farsi("<<f<<"):";cin>>farsi;
    while (farsi>20 || farsi<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>farsi;}
    cout<<"Calculous1("<<c1<<"):";cin>>calculous1;
    while (calculous1>20 || calculous1<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>calculous1;}
    cout<<"History("<<h<<"):";cin>>history;
    while (history>20 || history<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>history;}
    cout<<"Physics1("<<p1<<"):";cin>>physics1;
    while (physics1>20 || physics1<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>physics1;}
    cout<<"Mabani("<<m<<"):";cin>>mabani;
    while (mabani>20 || mabani<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>mabani;}
    cout<<"English("<<e<<"):";cin>>english;
    while (english>20 || english<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>english;}
    cout<<"Kargah("<<k<<"):";cin>>kargah;
    while (kargah>20 || kargah<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>kargah;}
    }

    void write() const
    {
        cout<<left<<setw(15)<<"Lessons"<<"|"<<setw(5)<<"Unit"<<"|"<<setw(10)<<"Score"<<"\n";
        cout<<"--------------------------------"<<"\n";
        cout<<left<<setw(15)<<"Farsi"<<"|"<<setw(5)<<f<<"|"<<setw(10)<<farsi<<"\n";
        cout<<left<<setw(15)<<"History"<<"|"<<setw(5)<<h<<"|"<<setw(10)<<history<<"\n";
        cout<<left<<setw(15)<<"Calculous1"<<"|"<<setw(5)<<c1<<"|"<<setw(10)<<calculous1<<"\n";
        cout<<left<<setw(15)<<"Physics1"<<"|"<<setw(5)<<p1<<"|"<<setw(10)<<physics1<<"\n";
        cout<<left<<setw(15)<<"Kargah"<<"|"<<setw(5)<<k<<"|"<<setw(10)<<kargah<<"\n";
        cout<<left<<setw(15)<<"Mabani"<<"|"<<setw(5)<<m<<"|"<<setw(10)<<mabani<<"\n";
        cout<<left<<setw(15)<<"English"<<"|"<<setw(5)<<e<<"|"<<setw(10)<<english<<"\n";
    }

    float averagece()
{
   float avg = (farsi * f +history * h +calculous1 * c1 +physics1 * p1 +kargah +mabani * m +english * e)/19;
    return avg;
}};

struct studentce
{
    string name;
    string major;
    int number;
    float avg;
    lessonsCE lessonsce;

void write() const
{
    lessonsce.write();
}

void read()
{
    cout<<"Name:";
    cin>>name;
    cout<<"Number:";
    cin>>number;
    cout<<"Major:";
    cin>>major;
    lessonsce.read();
    avg=lessonsce.averagece();
}};

bool compareByAverageCE(const studentce& s1, const studentce& s2)
{return s1.avg > s2.avg;}


struct lessonsIE
{
    float farsi;
    float calculous1;
    float history;
    float physics1;
    float payton;
    float akhlagh;
    float lab;
    float cartography;

    void read()
    {
    cout<<"Farsi("<<f<<"):";cin>>farsi;
    while (farsi>20 || farsi<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>farsi;}
    cout<<"Calculous1("<<c1<<"):";cin>>calculous1;
    while (calculous1>20 || calculous1<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>calculous1;}
    cout<<"History("<<h<<"):";cin>>history;
    while (history>20 || history<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>history;}
    cout<<"Physics1("<<p1<<"):";cin>>physics1;
    while (physics1>20 || physics1<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>physics1;}
    cout<<"Python("<<p<<"):";cin>>payton;
    while (payton>20 || payton<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>payton;}
    cout<<"Akhlagh("<<a<<"):";cin>>akhlagh;
    while (akhlagh>20 || akhlagh<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>akhlagh;}
    cout<<"Lab("<<l<<"):";cin>>lab;
    while (lab>20 || lab<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>lab;}
    cout<<"Cartography("<<c<<"):";cin>>cartography;
    while (cartography>20 || cartography<0)
    {cout<<"This score is not acceptable!Enter again"<<"\n";
    cin>>cartography;}
    }

    void write() const
    {
        cout<<left<<setw(15)<<"Lessons"<<"|"<<setw(5)<<"Unit"<<"|"<<setw(10)<<"Score"<<"\n";
        cout<<"--------------------------------"<<"\n";
        cout<<left<<setw(15)<<"Farsi"<<"|"<<setw(5)<<f<<"|"<<setw(10)<<farsi<<"\n";
        cout<<left<<setw(15)<<"History"<<"|"<<setw(5)<<h<<"|"<<setw(10)<<history<<"\n";
        cout<<left<<setw(15)<<"Calculous1"<<"|"<<setw(5)<<c1<<"|"<<setw(10)<<calculous1<<"\n";
        cout<<left<<setw(15)<<"Physics1"<<"|"<<setw(5)<<p1<<"|"<<setw(10)<<physics1<<"\n";
        cout<<left<<setw(15)<<"Python"<<"|"<<setw(5)<<p<<"|"<<setw(10)<<payton<<"\n";
        cout<<left<<setw(15)<<"Akhlagh"<<"|"<<setw(5)<<a<<"|"<<setw(10)<<akhlagh<<"\n";
        cout<<left<<setw(15)<<"Lab"<<"|"<<setw(5)<<l<<"|"<<setw(10)<<lab<<"\n";
        cout<<left<<setw(15)<<"Cartography"<<"|"<<setw(5)<<c<<"|"<<setw(10)<<cartography<<"\n";
    }

float averageie()
{
   float avg = (farsi * f + calculous1 * c1 + history * h + physics1 * p1 + payton * p + akhlagh * a + lab * l + cartography * c) / 20.0f;
   return avg;
}};

struct studentie
{
    string name;
    string major;
    int number;
    float avg;
    lessonsIE lessonsie;

void write() const
{
    lessonsie.write();
}

void read()
{
    cout<<"Name:";
    cin>>name;
    cout<<"Number:";
    cin>>number;
    cout<<"Major:";
    cin>>major;
    lessonsie.read();
    avg=lessonsie.averageie();
}};


struct allstudents
{
    studentie Student1;
    studentce Student2;

    void read()
{
    Student1.read();
    Student2.read();
}};

bool compareByAverageIE(const studentie& s1, const studentie& s2)
{return s1.avg > s2.avg;}

int reportce( const studentce& x)
{
    cout << left << setw(20) << "Name" << setw(20) << "Major" << setw(10) << "Number"<<endl;
    cout << "----------------------------------------------------" << "\n";
    cout << left << setw(20) <<x.name<< setw(20) <<x.major<< setw(10) <<x.number<<endl;
    cout << "====================================================" << "\n";
    x.write();
    cout<<"--------------------------------"<<"\n";
    cout<<setw(16)<<"Average"<<setw(6)<<"19"<<setw(10)<<x.avg<<endl;
    return 1;
}

int reportie( const studentie& x)
{
   cout << left << setw(20) << "Name" << setw(20) << "Major" << setw(10) << "Number"<<endl;
    cout << "----------------------------------------------------" << "\n";
    cout << left << setw(20) <<x.name<< setw(20) <<x.major<< setw(10) <<x.number<<endl;
    cout << "====================================================" << "\n";
    x.write();
    cout<<"--------------------------------"<<"\n";
    cout<<setw(16)<<"Average"<<setw(6)<<"20"<<setw(10)<<x.avg<<endl;
    return 1;
}

void movingText() 
{
    string text = "Hi. Hope you enjoy using the program. >_<";
    int width = 40;
    for (int i = 0; i < width; ++i) 
    {
        cout << "\r" << string(i, ' ') << text;
        cout.flush();
        usleep(100000);
    }
}

int main()
{
system("color 50");
movingText();
int ie , ce , choice;
cout<<"\n\nNumber ie students:";
cin>>ie;
cout<<"Number ce students:";
cin>>ce;

vector<studentie>studentsie; 
vector<lessonsIE>lessonIE;
cout<<"Enter the informations of IE students"<<endl;  

for(int i=1;i<=ie;i++)
{
    studentie temp;
    temp.read();
    temp.avg = temp.lessonsie.averageie();
    studentsie.emplace_back(temp);
}

vector<studentce>studentsce; 
vector<lessonsCE>lessonCE;

 cout<<"Enter the informstions of CE students"<<endl;  

for(int i=1;i<=ce;i++)
{
    studentce temp;
    temp.read();
    temp.avg = temp.lessonsce.averagece();
    studentsce.emplace_back(temp);
}
vector<allstudents>students;

while(true)
{cout<<"\n"<<"1)Industrial Engineering\n2)Computer Engineering\n3)All studeents\n4)Exit\n";
cin>>choice;
switch(choice)
{
    case 1:
    cout << "\nIE students:\n";
    sort(studentsie.begin(), studentsie.end(), compareByAverageIE);

    cout << left << setw(20) << "Name" << setw(20) << "Major" << setw(10) << "Number" << setw(10) << "Average" << endl;
    cout << "--------------------------------------------------------------" << "\n";
    for (const auto& student : studentsie) 
    {
        cout << left << setw(20) << student.name 
             << setw(20) << student.major
             << setw(10) << student.number
             << setw(10) << student.avg << endl;
    }
    int choice1;
    while(true)
    {
    cout<<"\n1)Search the student.\n2)Exit from the list.\n";
    cin>>choice1;
    if (choice1==1)
    {
        int i=-1;
        string name;
        cout<<"Enter the name:";
        cin>>name;
        for (const auto& student : studentsie)
            if(student.name==name)
                i=reportie(student);
        if (i==-1)
        cout<<"Not found!";
    }
    else if(choice1==2)
         break;}
    break;

case 2:
    cout << "\nCE students:\n";
    sort(studentsce.begin(), studentsce.end(), compareByAverageCE);

    cout << left << setw(20) << "Name" << setw(20) << "Major" << setw(10) << "Number" << setw(10) << "Average" << endl;
    cout << "--------------------------------------------------------------" << "\n";
    for (const auto& student : studentsce) 
    {
        cout << left << setw(20) << student.name 
             << setw(20) << student.major
             << setw(10) << student.number
             << setw(10) << student.avg << endl;
    }
    int choice2;
    while(true)
    {
    cout<<"\n1)Search the student.\n2)Exit from the list.\n";
    cin>>choice2;
    if (choice2==1)
    {
        int i=-1;
        string name;
        cout<<"Enter the name:";
        cin>>name;
        for (const auto& student : studentsce)
            if(student.name==name)
                i=reportce(student);
        if (i==-1)
        cout<<"Not found!";
    }
    else if(choice2==2)
         break;}
    break;

case 3:
    cout << "\nAll students:\n";

    struct CombinedStudent 
    {
        string name;
        string major;
        int number;
        float avg;
    };
    vector<CombinedStudent> allStudents;
    for (const auto& student : studentsie) 
    {
        allStudents.push_back({student.name, student.major, student.number, student.avg});
    }
    for (const auto& student : studentsce) 
    {
        allStudents.push_back({student.name, student.major, student.number, student.avg});
    }
    sort(allStudents.begin(), allStudents.end(), [](const CombinedStudent& a, const CombinedStudent& b) {
        return a.avg > b.avg;
    });

    cout << left << setw(20) << "Name" << setw(20) << "Major" << setw(10) << "Number" << setw(10) << "Average" << endl;
    cout << "--------------------------------------------------------------" << "\n";
    for (const auto& student : allStudents) 
    {
        cout << left << setw(20) << student.name 
             << setw(20) << student.major
             << setw(10) << student.number
             << setw(10) << student.avg << endl;
    }
    break;}
    
     if (choice==4)
break;}
    return 0;
}