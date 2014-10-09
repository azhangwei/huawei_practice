//#include <iostream>
//#include <map>
//#include <string>
//#include <set>
//#include <vector>
//#include <queue>
//using namespace std;
//int Numof1(unsigned num)
//{
//	int count1=0;
//	while(num)
//	{
//		count1++;
//		num=num&(num-1);
//	}
//	return count1;
//}
//int main()
//{
//	string strCmd;
//	int SenderNum;
//	multimap<int,int> RelationshipMap;
//	bool EndFlag=false;
//	while(cin>>strCmd)
//	{
//		if(strCmd=="Sender")
//		{
//			cin>>SenderNum;
//		}
//		else if(strCmd=="Relationship")
//		{
//			string Cmd;
//			while(cin>>Cmd)
//			{
//				if(Cmd=="End")
//				{
//					EndFlag=true;
//					break;
//				}
//				else
//				{
//					int key;
//					int val;
//					string temp;
//					string::size_type pos=Cmd.find(',');
//					temp=Cmd.substr(0,pos);
//					key=atoi(temp.c_str());
//					Cmd.erase(0,pos+1);
//					val=atoi(Cmd.c_str());
//					RelationshipMap.insert(make_pair(key,val));
//				}
//			}
//			if(EndFlag==true)
//			{
//				break;
//			}
//		}
//	}//输入结束
//	//重建层次结构，bfs
//	queue<int> BfsQue;//即将处理的
//	BfsQue.push(SenderNum);
//	multimap<int,int> NewRelationshipMap;
//	while(!BfsQue.empty())
//	{
//		int ToBeHandled=BfsQue.front();//队头
//		BfsQue.pop();//删除
//		if(RelationshipMap.empty())
//		{
//			break;
//		}
//		multimap<int,int>::iterator iterRelation=RelationshipMap.begin();
//		while(iterRelation!=RelationshipMap.end())
//		{
//
//				if(iterRelation->second==ToBeHandled)
//				{
//					NewRelationshipMap.insert(make_pair(iterRelation->second,iterRelation->first));
//					BfsQue.push(iterRelation->first);
//					RelationshipMap.erase(iterRelation++);
//				}
//				else if(iterRelation->first==ToBeHandled)
//				{
//					NewRelationshipMap.insert(*iterRelation);
//					BfsQue.push(iterRelation->second);
//					RelationshipMap.erase(iterRelation++);
//				}
//				else
//				{
//					iterRelation++;
//				}
//			}	
//
//	}
//	RelationshipMap.clear();
//	RelationshipMap=NewRelationshipMap;
//
//
//	set<int> CurLayer;
//	int key=SenderNum;
//	int result=0;
//	multimap<int,int>::iterator iter=RelationshipMap.find(key);
//	int count=RelationshipMap.count(key);
//	for(int i=0;i<count;++i)
//	{
//		CurLayer.insert(iter->second);
//		iter++;
//	}//第二层结束
//	set<int> NextLayer;
//	while(!CurLayer.empty())
//	{
//		NextLayer.clear();
//		set<int>::iterator iterSet=CurLayer.begin();
//		vector<set<int>::iterator> iterVec;
//		while(iterSet!=CurLayer.end())
//		{
//			iter=RelationshipMap.find(*iterSet);
//			if(iter==RelationshipMap.end())
//			{
//				iterSet++;
//				continue;
//			}
//			count=RelationshipMap.count(*iterSet);
//			for(int i=0;i<count;++i)
//			{
//				if(CurLayer.find(iter->second)!=CurLayer.end())
//				{
//					iter++;
//					continue;
//				}
//				NextLayer.insert(iter->second);
//				iter++;
//			}
//			iterVec.push_back(iterSet);
//			iterSet++;
//		}
//		if(NextLayer.empty())//下一层没有了就跳出循环
//		{
//			break;
//		}
//		set<int> temp;
//		int len=CurLayer.size();
//		int maxNumBit=1<<len;
//		multimap<int,unsigned int> num1ofi;
//		for(unsigned int i=1;i<maxNumBit;i++)
//		{
//			num1ofi.insert(make_pair(Numof1(i),i));//从二进制中包含1的个数从小到大排
//		}
//		multimap<int,unsigned int>::iterator it=num1ofi.begin();
//		while(it!=num1ofi.end())
//		{
//			temp.clear();
//			unsigned int k=it->second;
//			int index=0;
//			while(k>0)
//			{
//				if(k&1)//开始处理第index位
//				{
//					iter=RelationshipMap.find(*iterVec[index]);
//					count=RelationshipMap.count(*iterVec[index]);
//					for(int j=0;j<count;++j)
//					{
//						if(CurLayer.find(iter->second)!=CurLayer.end())//在同一层
//						{
//							iter++;
//							continue;
//						}
//						temp.insert(iter->second);
//						iter++;
//					}
//				}
//				k>>=1;
//				index++;
//			}
//			if(temp.size()==NextLayer.size())
//			{
//				result=result+it->first;
//				break;
//			}
//			it++;
//		}
//		CurLayer.clear();
//		CurLayer=NextLayer;
//	}
//	cout<<result<<endl;
//	return 0;
//}