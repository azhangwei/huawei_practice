//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int a,b;
//	char num[1000];
//	gets(num);
//	vector<int>road(50001);
//	vector<int>keng;
//	int tmp_num=0;
//	int ii=0;
//	while(num[ii]!='\0')
//	{
//		if(num[ii]==' ')
//		{
//			keng.push_back(tmp_num);
//			tmp_num=0;
//			ii++;
//			continue;
//		
//		}
//		tmp_num=tmp_num*10+num[ii]-'0';
//		ii++;
//	}
//	keng.push_back(tmp_num);
//	for(vector<int>::iterator i=keng.begin();i!=keng.end();)
//	{
//		int loc=(*i)*100+1;
//		i++;
//		for(int j=0;j<*i-1;j++)
//			road[loc+j]=1;
//		i++;
//	}
//
//	for(int i=0;(i+65)<=50000;)
//	{
//		i=i+65;
//		if(road[i]==1)
//		{
//			cout<<"NO"<<endl;
//			return 0;
//		}
//
//	}
//	cout<<"YES"<<endl;
//
//	return 0;
//}