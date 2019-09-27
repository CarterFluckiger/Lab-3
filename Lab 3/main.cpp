/*
 Carter Fluckiger
 C++ Fall 2019
 Due: September 26, 2019
 Lab 3 User and File I/0
 Description: In this lab I found the mean and standard deviation of inputs by the user and also the mean and standard deviation of inputs from a file.
 
 */

#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;


// The floats for the inputs from the user and the mean of those values
   int userin1;
   int userin2;
   int userin3;
   int userin4;
float mean;
// The floats for the values of the userinputs that get subtracted by the mean
float pow1;
float pow2;
float pow3;
float pow4;

// The floats and ints for the values that get squared
float mean1;
float mean2;
float mean3;
float mean4;
float meanf;

int input1f;
int input2f;
int input3f;
int input4f;

//floats for the float functions
float average(int one, int two, int three,int four);
float calculation(int one, int two, int three,int four);

float fileinput();
float user();
float out();
float realmean;
float realmeanf;

int main()
{
  //Functions being called
    user();
    average(userin1, userin2, userin3, userin4);
    calculation(userin1, userin2, userin3, userin4);
    
    realmean = ((pow(userin1-mean, 2))+ (pow(userin2-mean, 2)) + (pow(userin3-mean,2))+ (pow(userin4-mean, 2)))/4;
    
     
    
    
    fileinput();
    average(input1f,input2f, input3f, input4f);
    fileinput();
    calculation(input1f, input2f, input3f, input4f);
     realmeanf = ((pow(input1f-mean, 2))+ (pow(input2f-mean, 2)) + (pow(input3f-mean,2))+ (pow(input4f-mean, 2)))/4;
    out();
   

    
    return 0;
}
// Function that opens the file and takes the numbers off of it
float fileinput()
{
    string fileinput ="/Users/tag1/Desktop/Lab 3/Lab 3/inMeanStd.dat";
    ifstream inFile;
    inFile.open(fileinput);
    inFile>>input1f>> input2f>>input3f>>input4f;
    
    inFile.close();
    return 0;
    }

float average(int one, int two, int three, int four)
{
       // Gives mean and statement in program
    cout<<"Your mean is: "<< float(one + two + three + four) / 4 << endl<< endl;
    return 0;
}

float calculation(int one, int two, int three, int four)
{
    // Statement calculates the mean
    mean = float(one + two + three + four) / 4;

    // Calculations for inputs minus the mean
    pow1 = (one - mean);
    pow2 = (two - mean);
    pow3 = (three - mean);
    pow4 = (four - mean);

    // Squaring the pow statements from above
    mean1 = pow(pow1,2);
    mean2 = pow(pow2,2);
    mean3 = pow(pow3,2);
    mean4 = pow(pow4,2);

    
    // Finding the final mean for standard deviation and outputing it
    meanf = (mean1 + mean2 + mean3 + mean4)/ 4;
    cout<<"This is the standard deviation: ";
    cout<<  sqrt(meanf)<<endl<<endl;
    return 0;
}

float user()
{
// Statement for the user to know they have to put in four numbers of their choice
cout<<"Please enter 4 integers: ";
// The inputs from the user to find the mean and the standard deviation
cin>>userin1;
cin>>userin2;
cin>>userin3;
cin>>userin4;
    return 0;

}

// The outfile statements that put the information onto the output file
float out()
{
string fileoutput ="/Users/tag1/Desktop/Lab 3/Lab 3/outMeanStd.dat";
      ofstream outFile;
      outFile.open(fileoutput);
   outFile<<"Your mean for your user input is: "<< float(userin1 + userin2 + userin3 + userin4) / 4 << endl<< endl;;
    outFile<<"This is the standard deviation of the user inputs: ";
    outFile<< sqrt(realmean)<<endl<<endl;
    
    outFile<<"Your mean from the file is: "<< float(input1f + input2f + input3f + input4f)/4 << endl<< endl;
    outFile<<"This is the standard deviation for the inputs from the file: ";
    outFile<< sqrt(realmeanf)<< endl<< endl;
   // All of the outputs that go onto the file
    outFile.close();
    return 0;
}
