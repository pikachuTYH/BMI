//Name: Tai Yan Han
//ID:1151104709
//Group:6A
//Date:08/10/2016
//Description:A program that calculate adults BMI
#include <iostream>
using namespace std;

main()
{
    float height, weight ,bmi_height ,bmi_weight,bmi;
    string height_cal, weight_cal ,gender,name ;
    char res;

do{
    cout << "BMI Calculater for Adults" << endl;
    cout <<endl;
    cout << "Enter Your Name:" <<endl ;
    getline(cin,name);
    cout << "Enter Your Gender(F/M):" <<endl;
    getline(cin,gender);
    while(gender !="f" && gender !="m" && gender !="F" && gender !="M")
    {
        cout << "Please enter F or M "<<endl;
        cout << "Enter Your Gender(F/M): " <<endl;
    getline(cin,gender);

    }

    cout << "Enter Desired Height Calculation(CM/FT): "<<endl  ;
    getline(cin, height_cal);
    while(height_cal !="CM" && height_cal !="cm" && height_cal !="ft"  && height_cal !="FT" )
    {   cout << "Please enter CM or FT "<<endl;
        cout << "Enter Desired Height Calculation(CM/FT): "<<endl  ;
    getline(cin, height_cal);
    }

    cout <<"Enter Your Height(cm142-196/ft4.8-6.5):" << endl;
    cin >> height;
    if(height_cal=="cm" || height_cal=="CM" )
    {
        while(height<142 || height >196)
        {cout << "Please enter height between 142-196." <<endl;
        cout <<"Enter Your Height(cm142-196/ft4.8-6.5):" << endl;
    cin >> height;}
    };
     if(height_cal=="FT" || height_cal=="ft" )
    {
        while(height<4.8 || height >6.5)
        {
            cout << "Please enter height between 142-196." <<endl;
        cout <<"Enter Your Height(cm142-196/ft4.8-6.5):" << endl;
    cin >> height;}
    }
    getwchar();

    cout << "Enter Desired Weight Calculation(KG/IBS): "  <<endl;
    getline(cin, weight_cal);
    while(weight_cal !="kg" && weight_cal !="KG" && weight_cal !="IBS" && weight_cal !="IBS" )
{   cout << "Please enter KG or IBS." <<endl;
    cout << "Enter Desired Weight Calculation(KG/IBS): "  <<endl;
    getline(cin, weight_cal);
}
    cout <<"Enter Your Weight:" <<endl;
    cin >>weight;

    if(height_cal =="CM" || height_cal =="cm")
    bmi_height = height / 100 ;
    if(height_cal =="FT" || height_cal =="ft")
    bmi_height = height * 0.3048;
    if(weight_cal =="KG" || weight_cal =="kg")
    bmi_weight = weight;
    if(weight_cal =="IBS" || weight_cal =="ibs")
    bmi_weight = weight * 0.453592;


    bmi = bmi_weight / (bmi_height * bmi_height);

    cout << "Your BMI Is "<<bmi<<endl;

   if(gender =="f" || gender =="F" && bmi >29 )
   {
       cout<<"Sorry Miss "<<name<<" , you are obese. Please consult with a doctor before its too late." <<endl;
   }
   if(gender =="f" || gender =="F" && bmi <=29 && bmi >25 )
   {
       cout<<"Sorry Miss "<<name<<" , you are a bit overweight.Try exercising and eat healthy food. " <<endl;
   }

   if(gender =="f" || gender =="F" && bmi <=25 && bmi >19  )
   {
       cout<<"Congratulations Miss "<<name<<" , you are healthy.Keep up the good work. " <<endl;
   }

   if(gender =="f" || gender =="F" && bmi <=18   )
   {
       cout<<"Sorry Miss "<<name<<" , you are underweight.Try having a balance diet. " <<endl;
   }
   if(gender =="m" || gender =="M" && bmi >29 )
   {
       cout<<"Sorry Sir "<<name<<" , you are obese. Please consult with a doctor before its too late." <<endl;
   }
   if(gender =="m" || gender =="M" && bmi <=29 && bmi >25 )
   {
       cout<<"Sorry Sir "<<name<<" , you are a bit overweight.Try exercising and eat healthy food. " <<endl;
   }

   if(gender =="m" || gender =="M" && bmi <=25 && bmi >19  )
   {
       cout<<"Congratulations Sir "<<name<<" you are healthy.Keep up the good work. " <<endl;
   }

   if(gender =="m" || gender =="M" && bmi <=18   )
   {
       cout<<"Sorry Sir "<<name<<" , you are underweight.Try having a balance diet. " <<endl;
   }
   cout <<"Thank you for using this program!";
   cout <<"Do you want to try it again?[Y/N]:";
   cin >>res;
   while(res !='n' && res !='N' && res !='y' && res !='Y')
   {   cout <<"Sorry Invalid Answer." << endl;
       cout <<"Do you want to try it again?[Y/N]:";
       cin >>res;
   };
   if(res =='N' || res =='n')
   {
       goto loop1;
   }
   cin.ignore();

}while (res =='Y' || res =='y');


loop1:;







}
