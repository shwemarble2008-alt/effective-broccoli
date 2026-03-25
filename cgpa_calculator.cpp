#include<iostream>
using namespace std;

int main()
{
    int numsubjects;
    double totalpoints, totalcredits;
    float cgpa;

    cout<<"Enter the number of subjects :"<<endl;
    cin>>numsubjects;

    if (numsubjects == 0)
    {
       cout<<"Error: The number of subjects must be greater than zero"<<endl;
       return 1;
    }

    for (int  i = 1; i <= numsubjects; i++)
    {
       float gradepoints, credithours;
       cout<<"Subject "<<i<<" :"<<endl;
       cout<<"Enter the grade points:"<<endl;
       cin>>gradepoints;
       if (gradepoints == 0 || gradepoints > 10)
       {
          cout<<"Error : Grade points should not be zero and  Grade points must between 0 and 10"<<endl;
          return 1;
       }
       

       cout<<"Enter the credit hours:"<<endl;
       cin>>credithours;
       if (credithours == 0)
       {
         cout<<"Error : Credit hours should not be zero, it is always greater than zero"<<endl;
         return 1;
       }
        totalpoints += gradepoints * credithours;
        totalcredits += credithours;
    }
    if (totalcredits == 0)
    {
        cout<<"Error : Total credit should not be zero and it is always greater than zero"<<endl;
    }

    cgpa = totalpoints / totalcredits;

    cout<<"Your CGPA is : "<<cgpa<<endl;

    if (cgpa>= 7)
    {
      cout<<"Your CGPA is very good!!. keep it up"<<endl;
    }
    else if (cgpa >= 5)
    {
        cout<<"Your CGPA is average. You can even aim higher!!"<<endl;
    }
    else if (cgpa > 0 ){
        cout<<"Your CGPA is below average. Try to improve it"<<endl;

    }

    return 0;
   
}