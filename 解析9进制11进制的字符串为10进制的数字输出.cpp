//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string num;
//	cin>>num;
//	if(num[0]!='0')	
//	{
//		cout<<-1;
//		return 0;
//	}
//	if(!(num[1]=='w'||num[1]=='W'||num[1]=='V'||num[1]=='v'))
//	{
//		cout<<-1;
//		return 0;
//	}
//	int tmp;
//	int result=0;
//	if(num[1]=='w'||num[1]=='W')
//	{
//		for(int j=2;j<num.size();j++)
//		{
//			if((num[j]>='0'&&num[j]<='9')||num[j]=='a'||num[j]=='A')
//			{
//				if(num[j]=='a'||num[j]=='A')
//					tmp=10;
//				else
//					tmp=num[j]-'0';
//			}
//			else
//			{
//				cout<<-1;
//				return 0;
//			}
//			result=result*11+tmp;
//			
//		}
//	}
//	if(num[1]=='v'||num[1]=='V')
//	{
//		for(int j=2;j<num.size();j++)
//		{
//			if((num[j]>='0'&&num[j]<='8'))
//			{
//					tmp=num[j]-'0';
//			}
//			else
//			{
//				cout<<-1;
//				return 0;
//			}
//			result=result*9+tmp;
//		}
//	}
//	cout<<result;
//	return 0;
//}