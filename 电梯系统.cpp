//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<set>
//using namespace std;
//
//void fix(vector<int>call,vector<int>go_on,vector<int>mark,bool m,bool iss,vector<int>answer,int start);
//bool if_on(int a,int b,bool m);
//
//int main()
//{
//	int start_floor;
//	cin>>start_floor;
//	string line;
//	cin>>line;
//	vector<int>call;
//	vector<int>go_on;
//	vector<int>answer;
//	int num=0;
//	for(int i=0;i<line.length();)
//	{
//		num++;
//		int tmp_n=0;
//		while(line[i]!='-'&&line[i]!=',')
//		{
//			tmp_n=tmp_n*10+line[i]-'0';
//			i++;
//		}
//		call.push_back(tmp_n);
//		tmp_n=0;
//		i++;		
//		while(line[i]!='-'&&line[i]!=',')
//		{
//			tmp_n=tmp_n*10+line[i]-'0';
//			i++;
//		}
//		go_on.push_back(tmp_n);
//		tmp_n=0;
//		i++;		
//		while(line[i]!='-'&&line[i]!=',')
//		{
//			tmp_n=tmp_n*10+line[i]-'0';
//			i++;
//			if(i==line.length())
//				break;
//		}
//		answer.push_back(tmp_n);
//		tmp_n=0;
//		i++;
//	}
//	vector<int>mark(num);
//	bool m;
//	if(start_floor<call[0])
//		m=true;
//	else
//		m=false;
//	fix(call,go_on,mark,m,true,answer,start_floor);
//	return 0;
//}
//void fix(vector<int>call,vector<int>go_on,vector<int>mark,bool m,bool iss,vector<int>answer,int start)
//{
//	   if(!iss)
//	   {
//		   int ii=0;
//		   while(mark[ii]!=0)
//			   ii++;
//		   m=call[ii]<go_on[ii]?true:false;
//		  int tmp_ob=answer[ii];
//		   for(vector<int>::iterator i=answer.begin();i!=answer.end();i++)
//		   {
//			   *i-=tmp_ob;
//			   if(*i<0)
//				   *i=0;
//		   }
//	   }
//
//		set<int>show;
//		bool ok=true;
//		vector<int>::iterator i=call.begin();
//		set<int>::iterator si=show.begin();
//		int j=0;
//
//		for(;i!=call.end();i++,j++)
//		{
//			if(mark[j]==0)
//			{  
//				if(call[j]-start>=answer[j])
//				if(if_on(call[j],go_on[j],m))
//				{
//					show.insert(call[j]);
//					show.insert(go_on[j]);
//					mark[j]=1;
//					ok=false;
//				}
//			}
//		}
//		if(show.size()>1)
//		{
//			if(m)
//			{
//				int ts_num=0;
//				int ts_end=show.size();
//			      for(int ts=1;ts<=8;ts++)
//					  if(show.count(ts))
//					  {
//						  ts_num++;
//						  if(ts_num==ts_end)
//						  cout<<ts;
//						  else
//						  cout<<ts<<'-';
//					  }
//			}
//			else
//			{
//				int ts_num=0;
//				int ts_end=show.size();
//				for(int ts=8;ts>=1;ts--)
//					if(show.count(ts))
//					{
//						ts_num++;
//						if(ts_num==ts_end)
//							cout<<ts;
//						else
//							cout<<ts<<'-';
//					}
//			}
//	
//		}
//
//		i=mark.begin();
//		for(;i!=mark.end();i++)
//			if(*i==0)
//			{
//				if(!ok)
//				cout<<'-';
//				fix(call,go_on,mark,!m,false,answer,start);
//				break;
//			}
//
//}
//
//bool if_on(int a,int b,bool m)
//{
//	if(a<b)
//		if(m)
//			return true;
//	if(a>b)
//		if(m)
//			return false;
//	if(a<b)
//		if(!m)
//			return false;
//	if(a>b)
//		if(!m)
//			return true;
//
//}
//
//
