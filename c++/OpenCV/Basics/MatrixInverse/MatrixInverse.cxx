#include "cv.h"

#include <iostream>

int main()
{
  cv::Mat A(3,3,CV_32FC1);

  for(unsigned int i = 0; i < 3; i++)
    {
    for(unsigned int j = 0; j < 3; j++)
      {
      A.at<float>(i,j) = 2;
      }
    }

  cv::Mat inverted(3,3,CV_32FC1);
  inverted = A;
  inverted.inv();

  std::cout << "A: " << A << std::endl;

  std::cout << "inverted: " << inverted << std::endl;

  return 0;
}

