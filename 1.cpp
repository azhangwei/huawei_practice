//#include<iostream>
//
//using namespace std;
//
//void main()
//{
//	int pay_in;
//	int pay_out;
//
//    cin>>pay_in>>pay_out;
//
//	if(pay_out-pay_in>100)
//	{
//		cout<<"null";
//		return;
//	}
//	if(pay_out<pay_in)
//	{
//		cout<<"null";
//		return;
//	}
//	int num[5]={0};
//
//    int pay=pay_out-pay_in;
//
//	num[0]=pay/50;
//	pay=pay%50;
//	num[1]=pay/20;
//	pay=pay%20;
//	num[2]=pay/10;
//	pay=pay%10;
//	num[3]=pay/5;
//	pay=pay%5;
//    num[4]=pay;
//
//	for(int i=0;i<5;i++)
//		cout<<num[i];
//	cout<<endl;
//
//	return;
//}