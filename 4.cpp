//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int x1,y1,x2,y2;
//	cin>>x1>>y1>>x2>>y2;
//	int x=x2-x1;
//	int y=y2-y1;
//	if(x==0&&y==0)
//	{
//		cout<<"CLICK";
//		return 0;
//	}
//	if(x>=0&&y>=0)
//	{
//		if(abs(y)>abs(x))
//			cout<<"DOWN"<<endl;
//		else
//			cout<<"RIGHT"<<endl;
//		return 0;
//	}
//	if(x>=0&&y<=0)
//	{
//		if(abs(y)>abs(x))
//			cout<<"UP"<<endl;
//		else
//			cout<<"RIGHT"<<endl;
//		return 0;
//	}
//	if(x<=0&&y>=0)
//	{
//		if(abs(y)>abs(x))
//			cout<<"DOWN"<<endl;
//		else
//			cout<<"LEFT"<<endl;
//		return 0;
//	}
//	if(x<=0&&y<=0)
//	{
//		if(abs(y)>abs(x))
//			cout<<"UP"<<endl;
//		else
//			cout<<"LEFT"<<endl;
//		return 0;
//	}
//
//
//
//	return 0;
//}