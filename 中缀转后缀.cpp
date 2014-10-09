#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main()
{
	string inp;
	cin>>inp;
	bool mark=false;
	int start=0;
	vector<int>num;
	vector<string>biao;
	vector<string> hou;
	string h;
	map<string,int> mp;
	if(inp[0]=='-')
	{
		start=1;
		biao.push_back("&");
	}
	mp.insert(make_pair("&",0));
	mp.insert(make_pair("*",1));
	mp.insert(make_pair("/",1));
	mp.insert(make_pair("+",2));
	mp.insert(make_pair("-",2));
	mp.insert(make_pair("(",3));
	string tmp;
	for(int i=start;i<inp.size();i++)
	{
		if(inp[i]>='0'&&inp[i]<='9')
		{
			h.clear();
			while(inp[i]>='0'&&inp[i]<='9')
			{
				h=h+inp[i];
				i++;
			}
			hou.push_back(h);
			i--;
		}
		else
		{
			if(inp[i]=='(')
			{
				if(inp[i+1]=='-')
					inp[i+1]='&';
				biao.push_back("(");
				continue;
			}
		    if(inp[i]==')')
			{
				while(biao.back()!="(")
				{
					hou.push_back(biao.back());
					biao.pop_back();
				}
				biao.pop_back();
				continue;
			}
		    if(biao.size()>0)
			{
				tmp=inp[i];
				while(mp.find(tmp)->second>=mp.find(biao.back())->second)
				{
					hou.push_back(biao.back());
					biao.pop_back();
					if(biao.size()==0)
						break;
				}
				biao.push_back(tmp);
			}
			else
			{
				tmp=inp[i];
				biao.push_back(tmp);
			}
		}
	}
	while(biao.size()>0)
	{
		hou.push_back(biao.back());
		biao.pop_back();
	}
	/////////////////////////////////////////////////////////////////////
	string s;
	vector<int>numn;
	int sum=0;
	int a,b;
	string add="+";
	string minus="-";
	string mix="*";
	string chu="/";
	string fu="&";
	for(int i=0;i<hou.size();i++)
	{
		sum=0;
		s=hou[i];
		if(s==add)
		{
			if(num.size()<2)
			{
				cout<<"error"<<endl;
				return 0;
			}
			a=num.back();
			num.pop_back();
			b=num.back();
			num.pop_back();
			sum=a+b;
			num.push_back(sum);
			continue;
		}
		if(s==minus)
		{
			if(num.size()<2)
			{
				cout<<"error"<<endl;
				return 0;
			}
			a=num.back();
			num.pop_back();
			b=num.back();
			num.pop_back();
			sum=b-a;
			num.push_back(sum);
			continue;
		}
		if(s==mix)
		{
			if(num.size()<2)
			{
				cout<<"error"<<endl;
				return 0;
			}
			a=num.back();
			num.pop_back();
			b=num.back();
			num.pop_back();
			sum=b*a;
			num.push_back(sum);
			continue;
		}
		if(s==chu)
		{
			if(num.size()<2)
			{
				cout<<"error"<<endl;
				return 0;
			}
			a=num.back();
			num.pop_back();
			b=num.back();
			num.pop_back();
			sum=b/a;
			num.push_back(sum);
			continue;
		}
		if(s==fu)
		{
			if(num.size()<1)
			{
				cout<<"error"<<endl;
				return 0;
			}
			a=num.back();
			num.pop_back();
			sum=a*-1;
			num.push_back(sum);
			continue;
		}
		int rel=0;
	    for(int i=0;i<s.size();i++)
		{
			rel=rel*10+s[i]-'0';
		}
		num.push_back(rel);
	}
	cout<<num[0]<<endl;
	return 0;
}