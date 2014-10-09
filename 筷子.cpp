//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int num;
//	cin>>num;
//	if(num==0)
//	{
//		cout<<-1;
//		return 0;
//	}
//	int total=0;
//	int tmp=0;
//	vector<int> kuai;
//	for(int i=0;i<num;i++)
//	{
//		cin>>total;
//		kuai.push_back(total);
//	}
//    sort(kuai.begin(),kuai.end());
//	int nu=1;
//	tmp=kuai[0];
//	if(num==1)
//	{
//		cout<<tmp;
//		return 0;
//	}
//	for(vector<int>::iterator i=kuai.begin()+1;i!=kuai.end();i++)
//	{
//		if(*i!=tmp)
//		{
//			if(nu%2!=0)
//			{
//				cout<<tmp;
//				return 0;
//			}
//			else
//			{
//				tmp=*i;
//				nu=1;
//			}
//		}
//		else
//		{
//			nu++;
//		}
//		
//	}
//	if(nu%2!=0)
//		cout<<tmp;
//	else
//	    cout<<-1;
//	return 0;
//}