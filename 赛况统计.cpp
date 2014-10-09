//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//struct f_team{
//	int teamID;
//	int win;
//	int ping;
//	int loose;
//	int score;
//};
//
//void add(vector<f_team>&total,f_team a);
//void show(vector<f_team>&total,int a);
//
//int main()
//{
//	char line[100]={0};
//	string od;
//	string order;
//	vector<f_team> total;
//	while(cin>>od)
//	{
//		if(od=="AddGameResult")
//		{
//		  int num[4]={0};
//	      int up=0;
//          f_team a,b;
//		  cin>>num[0]>>num[1]>>num[2]>>num[3];
//	      a.teamID=num[0];
//		  b.teamID=num[2];
//		  a.loose=0;
//		  a.ping=0;
//		  a.score=0;
//		  a.win=0;
//		  b.loose=0;
//		  b.ping=0;
//		  b.score=0;
//		  b.win=0;
//		  if(num[1]>num[3])
//		  {
//			  a.win=1;
//			  a.score=3;
//			  b.loose=1;
//		  }
//		  if(num[1]<num[3])
//		  {
//			  b.win=1;
//			  b.score=3;
//			  a.loose=1;
//		  }
//		  if(num[1]==num[3])
//		  {
//			  a.ping=1;
//			  b.score=1;
//			  b.ping=1;
//			  a.score=1;
//		  }
//		  add(total,a);
//		  add(total,b);
//		}
//		if(od=="GetTeamResult")
//		{
//			int num;
//			cin>>num;
//			show(total,num);
//		}
//		if(od=="Clear")
//			total.clear();
//	}
//	return 0;
//}
//
//void add(vector<f_team>&total,f_team a)
//{
//	for(vector<f_team>::iterator i=total.begin();i!=total.end();i++)
//	{
//		if(i->teamID==a.teamID)
//		{
//			i->ping+=a.ping;
//			i->loose+=a.loose;
//			i->score+=a.score;
//			i->win+=a.win;
//			return;
//		}
//	}
//	total.push_back(a);
//	return;
//}
//
//void show(vector<f_team>&total,int a)
//{
//	if(total.size()==0)
//	{
//		cout<<-1;
//		return;
//	}
//	vector<int>sc;
//	for(vector<f_team>::iterator i=total.begin();i!=total.end();i++)
//	{
//		sc.push_back(i->score);
//	}
//	sort(sc.begin(),sc.end());
//	int num=0;
//	int scc=0;
//	for(vector<f_team>::iterator i=total.begin();i!=total.end();i++)
//	{
//	     if(i->teamID==a)
//		 {
//			 cout<<a<<' '<<i->win<<" "<<i->ping<<" "<<i->loose<<" "<<i->score<<" ";
//			 scc=i->score;
//			 for(vector<int>::iterator j=sc.end()-1;j!=sc.begin();j--)
//			 {
//				 num++;
//				 if(*j==scc)
//				 {
//					 cout<<num<<endl;
//					 return;
//				 }
//			 }
//			 num++;
//			 cout<<num;
//			 return;
//		 }
//	}
//
//}