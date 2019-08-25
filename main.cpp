#include <algorithm>
int get_average(std::vector <int> marks)
{
  int n=marks.size();     //we are realising how many number are in array.
  int avarage=0;          //Our result will be stored here.
  for(int k=0;k<n;k++){   //We sum all numbers in aray.
    avarage+=marks.back();//Get number
    marks.pop_back();     //We are deleting aded number.
  }
  avarage/=n;             //we devide to get average number.
  return avarage;         //Return avarage
}//P.S.:https://github.com/d9nchik
