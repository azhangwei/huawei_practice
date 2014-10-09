//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int M,S,T;
//	cin>>M>>S>>T;
//	int time=M/10;
//	int time_yu=M%10;
//    int length=time*60;
//	int test;
//	test=S%60==0?0:1;
//	if((S/60+test)<=time)
//	{
//		cout<<"Yes"<<" "<<(S/60+test);
//		return 0;
//	}
//
//	int les=S-length;
//	if(les>60)
//	{
//		int yu_60=les/60;
//		 test=(10-time_yu)%4==0?0:1;
//		int second_time=(10-time_yu)/4+test+(yu_60-1)*3+1;
//		if(time+second_time>=T)
//		{
//			test=(10-time_yu)%4==0?0:1;
//			if((T-time)<((10-time_yu)/4+test+1))
//				length+=17*(T-time);
//			else
//				length+=60+((T-time)-((10-time_yu)/4+test+1))*17;
//			cout<<"No"<<" "<<length;
//			return 0;
//		}
//		else
//		{
//			length+=(les/60)*60;
//		}
//		time+=second_time;
//		les=les%60;
//		time_yu=0;
//	}
//	test=(10-time_yu)%4==0?0:1;
//	int time1=(10-time_yu)/4+test+1;
//	test=les%17==0?0:1;
//	int time2=les/17+test;
//	if(time1>=time2)
//	{
//		if(time+time2>T)
//			cout<<"No"<<" "<<length+(T-time)*17;
//		else
//			cout<<"Yes"<<" "<<time+time2;
//	}
//	else
//	{
//		if(time+time1>T)
//			cout<<"No"<<" "<<length+(T-time)*17;
//		else
//			cout<<"Yes"<<" "<<time+time1;
//	}
//
//
//	
//}