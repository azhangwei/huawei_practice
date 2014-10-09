//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//struct loc{
//	int x;
//	int y;
//};
//
//int main()
//{
//	int R,C;
//	cin>>R>>C;
//	string mr;
//	vector< vector<int> > map(R,vector<int>(C));
//	vector<loc> find;
//	loc star;
//	loc tmp;
//	loc tmp2;
//	for(int i=0;i<R;i++)
//	{
//		cin>>mr;
//		for(int j=0;j<C;j++)
//		{
//			if(mr[j]=='B')
//			{
//				map[i][j]=2;
//				star.x=j;
//				star.y=i;
//			}
//			if(mr[j]=='-')
//				map[i][j]=1;
//			if(mr[j]=='#')
//				map[i][j]=-1;
//			if(mr[j]=='H')
//				map[i][j]=4;
//	
//		}
//	}
//
//	find.push_back(star);
//	while(find.size()>0)
//	{
//		tmp=find.back();
//		find.pop_back();
//		if(map[tmp.y][tmp.x]==4)
//		{
//			cout<<"Y";
//			return 0;
//		}
//		map[tmp.y][tmp.x]=-1;
//		if(tmp.x-1>=0)
//			if(map[tmp.y][tmp.x-1]==1||map[tmp.y][tmp.x-1]==4)
//			{
//				tmp2.x=tmp.x-1;
//				tmp2.y=tmp.y;
//				find.push_back(tmp2);
//			}
//		if(tmp.y-1>=0)
//			if(map[tmp.y-1][tmp.x]==1||map[tmp.y-1][tmp.x]==4)
//			{
//				tmp2.x=tmp.x;
//				tmp2.y=tmp.y-1;
//				find.push_back(tmp2);
//			}
//		if(tmp.x+1<C)
//			if(map[tmp.y][tmp.x+1]==1||map[tmp.y][tmp.x+1]==4)
//			{
//				tmp2.x=tmp.x+1;
//				tmp2.y=tmp.y;
//				find.push_back(tmp2);
//			}
//		if(tmp.y+1<R)
//			if(map[tmp.y+1][tmp.x]==1||map[tmp.y+1][tmp.x]==4)
//			{
//				tmp2.x=tmp.x;
//				tmp2.y=tmp.y+1;
//				find.push_back(tmp2);
//			}
//	}
//	cout<<"N";
//	return 0;
//}