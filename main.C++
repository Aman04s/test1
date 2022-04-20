#include <iostream>
#include <string>
using namespace std;

int main() {


  //excersice 1//

  int months[12];
  string January = "January ";
  string February = "February ";
  string March ="March ";
  string April = "april ";
  string May = "May ";
  string June = "June ";
  string July = "July ";
  string August = "August ";
  string September = "September ";
  string October = "October ";
  string November = "November ";
  string December = "December ";

  cout << "enter values for each month in order: ";
      for(int i = 0; i < 12; i++){
        cin >> months[i];
      }
  cout << January << months[0] << "\n";
  cout << February << months[1] << "\n";
  cout << March << months[2] << "\n";
  cout << April << months[3] << "\n";
  cout << May << months[4] << "\n";
  cout << June << months[5] << "\n";
  cout << July << months[6] << "\n";
  cout << August << months[7] << "\n";
  cout << September << months[8] << "\n";
  cout << October << months[9] << "\n";
  cout << November << months[10] << "\n";
  cout << December << months[11] << "\n";

  cout << "---------------------------------------------\n";
  //excersice 2//
  int grades[30];
  int average = 0;
  cout << "enter your grades: ";
  for(int i=0; i < 30; i++){
    cin >> grades[i];
  }

  average = (grades[0]+grades[1]+grades[2]+grades[3]+grades[4]+grades[5]+grades[6]+grades[7]+grades[8]+grades[9]+grades[10]+grades[11]+grades[12]+grades[13]+grades[14]+grades[15]+grades[16]+grades[17]+grades[18]+grades[19]+grades[20]+grades[21]+grades[22]+grades[23]+grades[24]+grades[25]+grades[26]+grades[27]+grades[28]+grades[29])/30;
  
  cout << average <<endl;
  
  cout << "---------------------------------------------\n";
  //exercise 3//
  int element[10][10][10];
  for(int i = 0; i <10; i++){
    for( int d = 0; d < 10; d++){
      for( int k = 0; k < 10; k++){
        element[i][d][k] = rand() %100;
      cout<<element[i][d][k]<<endl;
      }
    } 
  }
  
cout << "---------------------------------------------\n";
  //exercise 4//
  int o = 1000;
  int one[o];
  int two[o];
  int three[o];
  cout << "one has " << o << " elements \n";
  cout << "two has " << o << " elements\n";
  cout << "three has " << o << " elements\n";
cout << "---------------------------------------------\n";
  //exercise 5//
  int E5 [10];
  for(int i = 0; i < 10; i++){
    E5[i] = 1;
    cout << E5[i]<<endl;
  }
cout << "---------------------------------------------\n";
  //exercise 6//
  int sixtySix[66];

  for(int i=0; i<66; i++){
    sixtySix[i]= 66;
    cout<< sixtySix[i] <<endl;
  }
cout << "---------------------------------------------\n";
  //exercise 7//
int life [11][22];

  for(int i = 0; i <11; i++){
    for(int d = 0; d<22; d++){
      life[i][d] = 0;
      cout<< life[i][d]<<endl;
    }
  }
cout << "---------------------------------------------\n";
  //exercise 8//
//int x, y; int array[10][3]; main() { for ( x = 0; x < 3; x++ ) for ( y = 0; y < 10; y++ ) array[x][y] = 0; return 0; }

//answer: int x, y; & int array[10][3]; are both out side of the int main{ } command there is also missing {} after the for loop as well as the x and y int indicators arent placed before x = 0 and y = 0 also switch x < 3 for x < 10 and y < 10 for y < 3 to provide right ammounts of print of elements.
int array1[10][3];  for ( int x = 0; x < 10; x++ ){
  for (int y = 0; y < 3; y++ ) {
    array1[x][y] = 0;
    cout << array1[x][y]<<endl; //using to check if correct
  }
} 
  
cout << "---------------------------------------------\n";
  //exercise 9///

  //int array[10]; int x = 1; main() { for ( x = 1; x <= 10; x++ ) array[x] = 99; return 0; }

  //answer: int array[10]; int x = 1; are both outside of int main{} command, there is no need for int x = 1, within the for loop statement x = 1 is missing int in the begining, the for loop is also missing a {} to hold array[x] = 99 within.
int array2[10];
  for ( int x = 1; x <= 10; x++ ) {
    array2[x] = 99;
    cout << array2[x]<<endl; //using to check if correct
    }
}