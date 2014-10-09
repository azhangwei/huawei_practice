//#include <iostream>
//#include <deque>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string input;
//	deque<int> pu;
//	deque<int> vip;
//	int start=1;
//	while(getline(cin,input))
//	{
//		if(input=="get")
//		{
//			pu.push_back(start);
//			cout<<start<<endl;
//			start++;
//			continue;
//		}
//		if(input=="get vip")
//		{
//			vip.push_back(start);
//			cout<<"vip "<<start<<endl;
//			start++;
//			continue;
//		}
//		if(input[0]=='d')
//		{
//			int mark=0;
//			int num=0;
//			for(int i=7;i<input.size();i++)
//			{
//				num=num*10+int(input[i]-'0');
//			}
//			for(deque<int>::iterator i=vip.begin();i!=vip.end();i++)
//			{
//				if(*i==num)
//				{
//					vip.erase(i);
//					cout<<"vip "<<num<<endl;
//					mark=1;
//					break;
//				}
//			}
//			if(mark==0)
//			{
//				for(deque<int>::iterator i=pu.begin();i!=pu.end();i++)
//				{
//					if(*i==num)
//					{
//						pu.erase(i);
//						cout<<num<<endl;
//						mark=1;
//						break;
//					}
//				}
//			}
//			if(mark==0)
//				cout<<"error"<<endl;
//			continue;	
//		}
//		if(input=="count")
//		{
//			cout<<vip.size()+pu.size()<<endl;
//			continue;
//		}
//		if(input=="call")
//		{
//			if(vip.size()!=0)
//			{
//				cout<<"vip "<<vip.front()<<endl;
//				vip.pop_front();
//			}
//			else if(pu.size()!=0)
//			{
//				cout<<pu.front()<<endl;
//				pu.pop_front();
//			}
//			else
//			{
//				cout<<"error"<<endl;
//			}
//			continue;
//		}
//		if(input[0]=='c'&&input[5]=='N')
//		{
//			int num=0;
//			int total=0;
//			for(int i=7;i<input.size();i++)
//			{
//				num=num*10+input[i]-'0';
//			}
//			for(int i=0;i<vip.size();i++)
//			{
//				if(vip[i]!=num)
//				{
//					total++;
//				}
//				else
//				{
//			       cout<<total<<endl;
//				   break;
//				}
//			}
//			if(total==vip.size())
//			{
//				for(int i=0;i<pu.size();i++)
//				{
//					if(pu[i]!=num)
//					{
//						total++;
//					}
//					else
//					{
//						cout<<total<<endl;
//						break;
//					}
//				}
//			}
//
//		}
//		if(input=="reset")
//		{
//			pu.clear();
//			vip.clear();
//			start=1;
//			continue;
//		}
//		if(input=="quit")
//			break;
//	}
//	return 0;
//}