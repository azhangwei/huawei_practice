//#include <iostream>
//#include <vector>
//using namespace std;
//
//void qing(vector<int>mm);
//
//void main()
//{
//	int num=15;
//	vector<int>num_fif(15);
//	char numm[32];
//	gets(numm);
//	for(int i=0;i<num;i++)
//		num_fif[i]=numm[2*i]-'0';
//
//	int jishu=0;
//	qing(num_fif);
//	return;
//}
//
//void qing(vector<int>mm)
//{
//	int jishu=1;
//	vector<int>tmp_nn;
//	bool mark=true;
//	if(mm.size()==0)
//	{
//		cout<<"none";
//		return;
//	}
//	int tmp=mm[0];
//	int ii=1;
//	for(vector<int>::iterator i=mm.begin()+1;i!=mm.end();i++)
//	{
//		ii++;
//		if(*i==tmp)
//		{
//			jishu++;
//			continue;
//		}
//		else
//		{
//			if(jishu>=3)
//			{
//				jishu=1;
//				tmp=*i;
//				mark=false;
//				if(tmp_nn.size()>0)
//					tmp_nn.pop_back();
//				tmp_nn.push_back(*i);
//				continue;
//
//
//			}
//			else
//			{
//				if(tmp_nn.size()==0)
//					tmp_nn.push_back(mm[0]);
//				for(int j=jishu;j>0;j--)
//				{
//					tmp_nn.push_back(mm[ii-j]);
//				}
//				tmp=*i;
//				jishu=1;
//			}
//		}
//	}
//	if(mark)
//	{
//		for(vector<int>::iterator jj=tmp_nn.begin();jj!=tmp_nn.end();jj++)
//			cout<<*jj<<" ";
//
//	}
//	else
//		qing(tmp_nn);
//	return;
//}