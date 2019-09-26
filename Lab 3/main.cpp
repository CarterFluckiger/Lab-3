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

// The floats for the values that get squared
float mean1;
float mean2;
float mean3;
float mean4;
float meanf;

int input1f;
int input2f;
int input3f;
int input4f;

void average(int one, int two, int three,int four);
void calculation(int one, int two, int three,int four);
void fileinput();
void user();

int main()
{
    user();
    average(userin1, userin2, userin3, userin4);
    calculation(userin1, userin2, userin3, userin4);
    fileinput();
    average(input1f,input2f, input3f, input4f);
    fileinput();
    calculation(input1f, input2f, input3f, input4f);
    
    string fileoutput ="/Users/tag1/Desktop/Lab 3/Lab 3/outMeanStd.dat";
       ofstream outFile;
       outFile.open(fileoutput);
    outFile<< average(userin1, userin2, userin3, userin4);
    
    outFile.close();
    
    return 0;
}
void fileinput()
{
    
    
    string fileinput ="/Users/tag1/Desktop/Lab 3/Lab 3/index.dat";
    ifstream inFile;
    inFile.open(fileinput);
    inFile>>input1f>> input2f>>input3f>>input4f;
    
}

void average(int one, int two, int three, int four)
{
       
    cout<<"Your mean is: "<< float(one + two + three + four) / 4 << endl<< endl;
}

void calculation(int one, int two, int three, int four)
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

}
void user()
{
// Statement for the user to know they have to put in four numbers of their choice
cout<<"Please enter 4 integers: ";
// The inputs from the user to find the mean and the standard deviation
cin>>userin1;
cin>>userin2;
cin>>userin3;
cin>>userin4;
}
