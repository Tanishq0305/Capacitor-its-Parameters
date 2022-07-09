#include<iostream>
#include<iomanip>
#include<windows.h>
#include <math.h>
#define e 2.7182
#define pi 3.142
using namespace std;

//CAPACITANCE CODE
//float capacitance(float){
//return 0;
//}
void series(){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    float i,f,g, sum1=0;
    SetConsoleTextAttribute(h,14);
    cout<<"\nEnter the number of Capacitances: ";
    cin>>f;
    SetConsoleTextAttribute(h,14);
    cout<<"\nEnter the values of Capacitances(farad): ";
    for(i=0;i<f;i++){
        cin>>g;
        sum1= sum1 +(1/g);
    }
    SetConsoleTextAttribute(h,15);
    cout<<"The Equivalent of the Capacitances in Series is: "<<1/sum1;
    return ;
}
void parallel(){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    float i,x,y, cap=0;
    SetConsoleTextAttribute(h,14);
    cout<<"\nEnter the number of Capacitances: ";
    cin>>x;
    SetConsoleTextAttribute(h,14);
    cout<<"\nEnter the values of Capacitances(farad): ";
    for(i=0;i<x;i++){
        cin>>y;
        cap = cap + y;
    }
    SetConsoleTextAttribute(h,15);
    cout<<"The Equivalent of the Capacitances in Series is: "<<cap;
    return ;
}

// RESISTANCE CODE

float resistance(float){
return 0;
}
void series_connection(){
     HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    int i,a,b, sum=0;
    SetConsoleTextAttribute(h,14);
    cout<<"\nEnter the number of resistances: ";
    cin>>a;
    SetConsoleTextAttribute(h,14);
    cout<<"\nEnter the values of Resistances(ohm): ";
    for(i=0;i<a;i++){
        cin>>b;
        sum= sum + (b);
    }
    SetConsoleTextAttribute(h,15);
    cout<<"The Equivalent of the Resistances in Series is: "<<sum;
    return ;
}
void parallel_connection(){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    float i,c,d, par=0;
    SetConsoleTextAttribute(h,14);
    cout<<"\nEnter the number of resistances: ";
    cin>>c;
    SetConsoleTextAttribute(h,14);
    cout<<"\nEnter the values of Resistances(ohm): ";
    for(i=0;i<c;i++){
        cin>>d;
        par= par +(1/d);
    }
    SetConsoleTextAttribute(h,15);
    cout<<"The Equivalent of the Resistances in Parallel is: "<<1/par;
    return ;
}

//MAIN Function
/*
int main(){
 int ch,ch1;   
cout<<"Which operation do you want to peroform ?"<<endl;
    cout<<"1) Resistors"<<endl;
    cout<<"2) Capacitors"<<endl;
    cout<<"3) R-L-C Circuits"<<endl;
    cout<<"Enter the index of operation you want to perform: ";
    cin>>ch;

    cout<<"You have selected "<<ch<< "number of operation.";
    if(ch==1)
series();
parallel();
series_connection();
parallel_connection();
return 0;
}
*/

//RLC Circuit

//1) Indcutive
void RLC_inductive_circuit()
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,15);
    cout << "As Xl is grater than Xc therefore RLC circuit behave's like an inductive circuit" << endl;
    float Xl, Xc, Vmax, Imax, R, f, L, pf, Z, C, Vrms, Irms, Womega, Power;
    // Xl = inductive resistance
    // Xc = capacitive resistance
    // Vrms = root mean square voltage
    // Irms = root mean square current
    // R = resistance  ,   L= inductance,  C= capacitor
    // omega = angular frequency
    // Z = impendence (resistance offered by the combination of resistor, inductor, capacitor)
    // f = frequency
    // pf = power factor
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of Vrms: ";
    cin >> Vrms;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of Irms: ";
    cin >> Irms;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of resistance in ohms: ";
    cin >> R;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of capacitance in farad: ";
    cin >> C;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of inductance: ";
    cin >> L;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of frequency: ";
    cin >> f;

    // Calculating all Possible Results
    Vmax = Vrms * pow(2, 0.5);
    Imax = Irms * pow(2, 0.5);
    Womega = 2 * 3.14 * f;
    Xl = Womega * L;
    Xc = (1 / (Womega * C));
    Z = pow((pow(R, 2) + pow((Xl - Xc), 2)), 0.5);
    pf = R / Z;
    Power = Vrms * Irms * pf;

     cout<<"_______________________________________________________________________________________________________________________________________________________"<<endl;

    // Printing all Possible Results
    SetConsoleTextAttribute(h,15);
    cout<<"Inductive Circuit "<<endl;
    cout<<endl;
    cout << "The value of Vmax is " << Vmax << " volt " << endl;
    cout << "The value of Imax is " << Imax << " ampere" << endl;
    cout << "The value of angular frequency Omega is " << Womega << " rad/sec" << endl;
    cout << "The value of inductive reactance is " << Xl << " ohm" << endl;
    cout << "The value of capacitive rectance  in micro farad is " << Xc << " ohm" << endl;
    cout << "The value of impendence is " << Z << " ohm" << endl;
    cout << "The value of power factor is " << pf << endl;
    cout << "The value of power  is " << Power << " watt" << endl;
}

//2) Capacitive
void RLC_capacitive_circuit()
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,15);
    cout << "As Xc is grater than Xl therefore RLC circuit behave's like  capacitive circuit" << endl;

    float Xl, Xc, Vmax, Imax, R, f, L, pf, Z, C, Vrms, Irms, Womega, Power;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of Vrms: ";
    cin >> Vrms;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of Irms: ";
    cin >> Irms;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of resistance in ohms: ";
    cin >> R;
    SetConsoleTextAttribute(h,14);
    cout << "enter the value of capacitance in farad: ";
    cin >> C;
    SetConsoleTextAttribute(h,14);
    cout << "enter the value of inductance: ";
    cin >> L;
    SetConsoleTextAttribute(h,14);
    cout << "enter the value of frequency: ";
    cin >> f;

    // Calculating all Possible Results
    Vmax = Vrms * pow(2, 0.5);
    Imax = Irms * pow(2, 0.5);
    Womega = 2 * 3.14 * f;
    Xl = Womega * L;
    Xc = (1 / (Womega * C)) ;
    Z = pow((pow(R, 2) + pow((Xc - Xl), 2)), 0.5);
    pf = R / Z;
    Power = Vrms * Irms * pf;

    cout<<"_______________________________________________________________________________________________________________________________________________________"<<endl;
    // Printing all Possible Results
    SetConsoleTextAttribute(h,15);
    cout<<"Capacitive Circuit"<<endl;
    cout << "The value of Vmax is " << Vmax << " volt " << endl;
    cout << "The value of Imax is " << Imax << " ampere" << endl;
    cout << "The value of angular frequency Womega is " << Womega << " rad/sec" << endl;
    cout << "The value of inductive reactance is " << Xl << " ohm" << endl;
    cout << "The value of capacitive rectance  in micro farad is " << Xc << " ohm" << endl;
    cout << "The value of impendence is " << Z << " ohm" << endl;
    cout << "The value of power factor is " << pf << endl;
    cout << "The value of power  is " << Power << " watt" << endl;
}

//3) Purely Resistive

void RLC_purely_resistive_circuit()
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,15);
    cout << "As Xl = Xc  therefore RLC circuit behave's like Resonant Circuit" << endl;
   

    float Xl, Xc, Vmax, Imax, R, f, L, pf, Z, C, Vrms, Irms, Womega, Power,fr,ab,bc;
    Xl = Xc;
    ab =L*C;
    bc=pow(ab,0.5);
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of Vrms: ";
    cin >> Vrms;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of Irms: ";
    cin >> Irms;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of resistance in ohms: ";
    cin >> R;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of capacitance in micro farad: ";
    cin >> C;
    SetConsoleTextAttribute(h,14);
    cout << "Enter the value of inductance: ";
    cin >> L;
    // cout << "enter the value of frequency: ";
    // cin >> f;

    // Calculating all Possible Results

    Vmax = Vrms * pow(2, 0.5);
    Imax = Irms * pow(2, 0.5);
    Womega = ((1 / pow(L * C, 0.5)));
    Z = pow((pow(R, 2) + pow((Xl - Xc), 2)), 0.5);
    pf = R / Z;
    Power = Vrms * Irms * pf;
    ab =L*C;
    bc=pow(ab,0.5);
    fr = 1/(2*pi*bc);

    cout<<"_______________________________________________________________________________________________________________________________________________________"<<endl;
    // Printing all Possible Results
    SetConsoleTextAttribute(h,15);
    cout << "The value of Vmax is " << Vmax <<" volt"<< endl;
    cout << "The value of Imax is " << Imax <<" ampere"<< endl;
    cout << "The value of angular frequency Omega is " << Womega <<" rad/sec"<< endl;
    // cout << "the value of inductive reactance is " << Xl<<endl;
    // cout << "the value of capacitive rectance is " << Xc<<endl;
    cout << "The value of impendence is " << Z <<" ohm"<< endl;
    cout << "The value of power factor is " << pf << endl;
    cout << "The value of power is " << Power <<" watt"<< endl;
    cout<<"Resonant Frequency is equal to: "<<fr<<" Hz"<<endl;
}

//Charging
void charging()
{
   HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
   float Q, Q1 , R, C, t, a, b, I  ;
   // Q = Charge after the capacitor has been charged
   //Q1 = Inital charge in the circuit 
   // R = resistance 
   //C = Capacitance 
   //t = time period over which capacitor discharges 
    SetConsoleTextAttribute(h,14);
    cout<<"Enter initial charge on the capacitor in Coulombs : ";
    cin>>Q1;
    SetConsoleTextAttribute(h,14);
    cout<<"Enter the resistance in ohms : ";
    cin>>R;
    SetConsoleTextAttribute(h,14);
    cout<<"Enter capacitor values in farad (F): ";
    cin>>C;
    SetConsoleTextAttribute(h,14);
    cout<<"Enter the time period in seconds: ";
    cin>>t;
    
    a = R*C;
    b= t/a;
     Q = Q1*(1-1/pow(e,b));
    SetConsoleTextAttribute(h,15);
     cout<<"The charge after capacitor has been charged by time "<<t<<" sec is : "<<Q<<" Coulombs"<<endl;
    
    // for current 
    I = Q/a*(1/pow(e,b));
    SetConsoleTextAttribute(h,14);
    cout<<"And the current when the capacitor is charged for "<<t<< "sec is: "<<I<<" Amperes"<<endl;
}

//Discharging
void discharging()
{
   HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
   float Q, Q1 , R, C, t, a, b, I  ;
   // Q = Charge after the capacitor has been discharged
   //Q1 = charge on the capacitor when charged 
   // R = resistance 
   //C = Capacitance 
   //t = time period over which capacitor discharges 
    SetConsoleTextAttribute(h,14);
    cout<<"Enter  charge on the capacitor after charging in Coulombs : ";
    cin>>Q1;
    SetConsoleTextAttribute(h,14);
    cout<<"Enter the resistance in ohms : ";
    cin>>R;
    SetConsoleTextAttribute(h,14);
    cout<<"Enter capacitor values in farad (F): ";
    cin>>C;
    SetConsoleTextAttribute(h,14);
    cout<<"Enter the time period in seconds: ";
    cin>>t;
    
    a = R*C;
    b= t/a;
     Q = Q1*(1-1/pow(e,b));
     SetConsoleTextAttribute(h,15);
     cout<<"The charge after capacitor has been discharged by time "<<t<<" sec is : "<<Q<<" Coulombs"<<endl;
    
    // for current 
    I = -Q/a*(1/pow(e,b));
    SetConsoleTextAttribute(h,15);
    cout<<"And the current when the capacitor is discharged for "<<t<< "sec is: "<<I<<" Amperes"<<endl;
}

//Main Function
int main(){
     HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(h,6);
    cout<<"_______________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    SetConsoleTextAttribute(h,4);
    cout<<"                                              Hello !!! Welcome to the Capacitor-Resistor Calculator"<<endl;
    cout<<endl;
    SetConsoleTextAttribute(h,4);
    cout<<"                      Created By: 1425: Tanishq Santosh Todkari   1432: Atharva Divekar  1445: Anup Ghunawat  1448: Prajwal Rahate "<<endl;
    SetConsoleTextAttribute(h,6);
    cout<<"_______________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<endl;
    int ch,ch1,ch2;
    cout<<endl;
    SetConsoleTextAttribute(h,14);
    cout<<"Which of the following operation do you want to peroform ?"<<endl;
    SetConsoleTextAttribute(h,2);
    cout<<"1) Resistors"<<endl;
    cout<<"2) Capacitors"<<endl;
    cout<<"3) Charging & Discharging of Capacitor"<<endl;
    cout<<"4) R-L-C Circuits"<<endl;
    cout<<endl;
    SetConsoleTextAttribute(h,14);
    cout<<"Enter the index of operation you want to perform: ";
    cin>>ch;
    SetConsoleTextAttribute(h,9);
    cout<<"You have chosen operation: "<<ch<<endl;
    cout<<endl;
   
   //LOOPs
   //LOOP for the Resistances
    if(ch==1){
        SetConsoleTextAttribute(h,2);
        cout<<"1)Equivalent of Resistances in the Series \n2)Equivalent of the Resistances in the Parallel"<<endl;
        cout<<endl;
        SetConsoleTextAttribute(h,14);
        cout<<"Enter index of Operation you would like to perform : ";
        cin>>ch1;
        if(ch1==1){
            series_connection();
        }
        else{
            parallel_connection();
        } 
    }
    
    //LOOP for the Capacitance
   else if(ch==2){
    SetConsoleTextAttribute(h,2);
    cout<<"1)Equivalent of Capacitances in the Series \n2)Equivalent of the Capacitances in the Parallel"<<endl;
    cout<<endl;
    SetConsoleTextAttribute(h,14);
    cout<<"Enter index of Operation you would like to perform : ";
    cin>>ch2;
        if(ch2==1){
            series();
        }
        else{
            parallel();
   }

}
else if(ch==3){
    int ch4;
     SetConsoleTextAttribute(h,2);
     cout<<"1)Charging of Capacitor 2)Discharging of Capacitor"<<endl;
     cout<<endl;
     SetConsoleTextAttribute(h,14);
     cout<<"Enter index of Operation you would like to perform : ";
     cin>>ch4;
        if(ch4==1){
            charging();
        }
        else{
            discharging();
        }
}
  else
  {
    int value;
    SetConsoleTextAttribute(h,14);
    cout << "enter 1 for the case Xl > Xc " << endl;
    cout << "enter 2 for the case Xc > Xl " << endl;
    cout << "enter 3 for the case Xl = Xc " << endl;
    cin >> value;

    switch (value)
    {
    case 1:

        RLC_inductive_circuit();
        break;

    case 2:

        RLC_capacitive_circuit();
        break;

    case 3:
        RLC_purely_resistive_circuit();
        break;
    }
  }
}