//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string inli;
//	cin>>inli;
//	vector<int>first;
//	vector<int>second;
//	int num=0;
//	for(int i=0;i<inli.size();i++)
//	{
//		if(inli[i]==',')
//		{
//			first.push_back(num);
//			num=0;
//		}
//		else
//			num=num*10+inli[i]-'0';
//	}
//	first.push_back(num);
//	int tmp;
//	for(vector<int>::iterator i=first.begin();i!=first.end();i++)
//	{
//		tmp=*i;
//		if(tmp==2)
//			tmp=20;
//		if(tmp==1)
//			tmp=18;
//		second.push_back(tmp);
//	}
//	sort(second.begin(),second.end());
//	vector<int>::iterator i=second.end()-1;
//	for(;i!=second.begin();i--)
//	{
//		if(*i==20)
//		{
//			cout<<2<<",";
//			continue;
//		}
//		if(*i==18)
//		{
//			cout<<1<<",";
//			continue;
//		}
//		cout<<*i<<",";
//	}
//	cout<<*i;
//}