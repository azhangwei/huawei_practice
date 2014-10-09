//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//using namespace std;
//struct dui
//{
//	int a;
//	int b;
//	dui(int x,int y):a(x),b(y){};
//};
//int main()
//{
//	string input;
//	cin>>input;
//	int start;
//	cin>>start;
//	cin>>input;
//	int num1=0;
//	int num2=0;
//	int lab=0;
//	vector<dui> rol;
//	int max=0;
//	set<int>result;
//	while(1)
//	{
//		cin>>input;
//		if(input=="End")
//			break;
//		num1=0;
//		num2=0;
//		lab=0;
//		while(lab<input.size())
//		{
//			if(input[lab]==',')
//			{
//				num1=num2;
//				num2=0;
//			}
//			else
//			{
//				num2=num2*10+int(input[lab]-'0');
//			}
//			lab++;
//		}
//		if(num1>max)
//			max=num1;
//		if(num2>max)
//			max=num2;
//		rol.push_back(dui(num1,num2));
//	}
//
//	vector< vector<int> >mp(max+1,vector<int>(max+1));
//	for(int i=0;i<rol.size();i++)
//	{
//		mp[rol[i].a][rol[i].b]=1;
//		mp[rol[i].b][rol[i].a]=1;
//	}
//	vector<int>dictance(max+1,-1);
//	dictance[start]=0;
//	vector<bool>mark(max+1,false);
//	vector<int>pre(max+1);
//	mark[start]=true;
//	int min;
//	for(int i=1;i<=max;i++)
//	{
//		if(i==(start))
//			continue;
//		if(mp[start][i]==1)
//		{
//			dictance[i]=mp[start][i];
//			pre[i]=start;
//		}
//		else
//			dictance[i]=65536;
//	}
//	int u=start;
//	for(int i=1;i<max;i++)
//	{
//		min=65536;
//		for(int j=1;j<=max;j++)
//		{
//			if(mark[j]==false&&dictance[j]<min)
//			{
//				min=dictance[j];
//				u=j;
//			}
//		}
//		mark[u]=true;
//		result.insert(pre[u]);
//		for(int k=1;k<=max;k++)
//		{
//			if(mark[k]==false&&(mp[k][u]==1))
//			{
//				if(dictance[k]>(dictance[u]+1))
//				{
//					dictance[k]=dictance[u]+1;
//					pre[k]=u;
//				}
//			}
//		}
//	}
//	cout<<result.size()-1;
//	return 0;
//}
