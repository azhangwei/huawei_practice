//#include<iostream>
//#include<list>
//#include<string>
//#include<vector>
//#include<set>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int M,N,P,Q;
//	cin>>M>>N>>P>>Q;
//	set<string>MM;
//	set<string>NN;
//	vector<string> NN_sort;
//	string computer;
//	string worker;
//	string W_c;
//	for(int i=0;i<M;i++)
//	{
//		cin>>computer;
//	    if(!MM.count(computer))
//			MM.insert(computer);
//		else
//			cout<<"add computer error:"<<computer<<endl;
//	}
//	for(int i=0;i<N;i++)
//	{
//		cin>>computer;
//		if(!MM.count(computer))
//			cout<<"remove computer error:"<<computer<<endl;
//		else
//			MM.erase(computer);
//	}
//
//	for(int i=0;i<P;i++)
//	{
//		cin>>computer>>worker;
//		if(MM.count(computer))
//		{
//			MM.erase(computer);
//			NN.insert(worker+'_'+computer);
//		}
//		else
//			cout<<"assign new computer error:"<<computer<<" "<<worker<<endl;
//	}
//	for(int i=0;i<Q;i++)
//	{
//		cin>>computer>>worker;
//		W_c=worker+'_'+computer;
//		if(NN.count(W_c))
//			{
//				NN.erase(W_c);
//				MM.insert(computer);
//		    }
//		else
//			cout<<"send back computer error:"<<computer<<" "<<worker<<endl;
//	}
//
//	cout<<NN.size()<<endl;
//	for(set<string>::iterator i=NN.begin();i!=NN.end();i++)
//	{
//		NN_sort.push_back(*i);
//	}
//	sort(NN_sort.begin(),NN_sort.end());
//	for(vector<string>::iterator i=NN_sort.begin();i!=NN_sort.end();i++)
//	{
//		cout<<*i<<endl;
//	}
//	return 0;
//}