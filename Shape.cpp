#include<iostream>
#include<math.h>
#include<algorithm>
#include "lib/Library.h"

//Define the constants
using namespace std;

//Generate an array of values



float* linspace(float Start, float Stop, int Number){
  //create a linspace function like numpy
  float StepSize;
  float ReturnArray[Number];

  StepSize = (Stop-Start)/Number;
  cout<<"The stepsize is given in ::"<<StepSize;
  for(int i=0;i<Number;i++)
  {
    ReturnArray[i] = i*StepSize;
  }

  for(int i=0;i<Number;i++)
  {
    cout<<"The value of the return array is::"<<ReturnArray[i]<<endl;
  }
  return ReturnArray;
}




int main(){
  //define constants for using
  float PI =  3.1415926535;
  float Mass;
  float Radius;

  //Mass = 1.0;     //Mass of the Star
  //Radius = 1.0;   //Radius of the Star

  //Define the resolution at which to perform the simulation
  int Resolution;
  Resolution = 101;

  //float* Rad;
  //float* Phi;
  //float* Theta;
  float* Rad;
  Rad = linspace(0,1,Resolution);
  cout<<"Printing the value of Rad is given by::";
  cout<<Rad;
  for(int i=0;i<10;i++){
    cout<<"We agree "<< i<<endl;
  }

  cout<<"Is this working....";
  for(int i=0;i<10;i++){
    cout<<"We agree "<< endl;
  }

  cout<<"Wait here for the input...";
  cin>>Radius;
  //Phi = linspace(0, PI, Resolution )
  //Theta = linspace(0, 2*PI, Resolution)

  //every different combination of the points

  //Use hydrostatic equation, and mass conservation equation

  //Use the polytropic equation

  //std::cout<<"\n This is working..."<<endl;

  //for(int i=0;i<Resolution;i++){
  //  std::cout<<"The radius is given by::"<<Rad[i];
  //}

  return 0;
}
