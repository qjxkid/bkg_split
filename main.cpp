#include <iostream>
#include <fstream>
#include <opencv2/contrib/contrib.hpp>
#include "BackGround.h"
using namespace std;

int main(int argc,char *argv[])
{
	if (argc != 3)
	{
		cout<<"Usage : ./"<<argv[0]<< " <imglist> <output_dir>"<<endl;
		exit(2);
	}
	BackGround background;
	background.GetBackground_One_pass(argv[1], argv[2], 192, 48, cv::Size(64,16));
	return 0;
}
