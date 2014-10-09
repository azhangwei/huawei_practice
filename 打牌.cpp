//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string me;
//	string oup;
//	while(cin>>me>>oup)
//	{
//		char sing=oup[0]+1;
//		int length=oup.size();
//		int locat;
//		bool mark=false;
//		if(length<=4)
//		{while(sing<=(9+'0'))
//		 {
//				locat=me.find(sing);
//				int i;
//				for(i=0;i<length;i++)
//				{   
//					if(i+locat<me.size())
//					{
//						if(me[i+locat]==sing)
//						   continue;
//					    else
//						    break;
//					}
//					else
//						break;
//				}
//				if(i==length)
//				{
//					mark=true;
//					break;
//				}
//				else
//					sing+=1;
//		    }
//		}
//		else
//		{
//			int i=1;
//			while((oup[4]+i)<=(9+'0'))
//			{
//				for(int j=0;j<5;j++)
//					oup[j]+=1;
//				int num_t=0;
//				for(int k=0;k<5;k++)
//				{
//					if(me.find(oup[k])!=-1)
//					{
//						num_t++;
//					}
//				}
//				if(num_t==5)
//					mark=true;
//		
//			}
//		}
//		if(mark)
//			cout<<"YES"<<endl;
//		else
//			cout<<"NO"<<endl;
//	
//	
//	}
//	return 0;
//}