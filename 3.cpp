//#include <iostream>
//#include <string>
//#include<vector>
//using namespace std;
//
//int  main()
//{
//	//Ling  Yi、Er、San、Si、Wu、Liu、Qi、Ba、Jiu、Shi、Bai、Qian、Wan
//	string test;
//	cin>>test;
//	string aa;
//    vector<int> num(5);
//	int tmp=0;
//	int length=test.length();
//	for(int i=0;i<length;i++)
//	{
//		aa+=test[i];
//		if(aa=="Ling")
//		{
//			
//			aa="";
//			continue;
//		}
//		if(aa=="Yi")
//		{
//			tmp=1;
//			aa="";
//			continue;
//		}
//		if(aa=="Er")
//		{
//		    tmp=2;
//			aa="";
//			continue;
//		};
//		if(aa=="San")
//		{
//			tmp=3;
//			aa="";
//			continue;
//		}
//		if(aa=="Si")
//		{
//			tmp=4;
//			aa="";
//			continue;
//		}
//		if(aa=="Wu")
//		{
//			tmp=5;
//			aa="";
//			continue;
//		}
//		if(aa=="Liu")
//		{
//			tmp=6;
//			aa="";
//			continue;
//		}
//		if(aa=="Qi"&&test[i+1]!='a')
//		{
//			tmp=7;
//			aa="";
//			continue;
//		}
//		if(aa=="Ba"&&test[i+1]!='i')
//		{
//			tmp=8;
//			aa="";
//			continue;
//		}
//		if(aa=="Jiu")
//		{
//			tmp=9;
//			aa="";
//			continue;
//		}
//		if(aa=="Shi"||aa=="Bai"||aa=="Qian"||aa=="Wan")
//		{
//			if(aa=="Shi")
//				num[1]=tmp;
//			if(aa=="Bai")
//				num[2]=tmp;
//			if(aa=="Qian")
//				num[3]=tmp;
//			if(aa=="Wan")
//				num[4]=tmp;
//			aa="";
//		}
//	
//	}
//	num[0]=tmp;
//	bool mark=false;
//	for(int i=0;i<5;i++)
//		if(num[4-i]!=0||mark)
//		{
//			cout<<num[4-i];
//			mark=true;
//		}
//		return 0;
//}