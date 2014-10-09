//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int find_s(vector<int>g,int value);
//
//int main()
//{
//	int m;
//	cin>>m;
//	string country_name;
//	vector<string>country(m);
//	vector<int> G(m);
//	vector<int> S(m);
//	vector<int> B(m);
//	vector<int>mark(m);
//	vector<string>show;
//	for(int i=0;i<m;i++)
//	{
//		cin>>country[i]>>G[i]>>S[i]>>B[i];
//	}
//	vector<int>tmp_G=G;
//	vector<int>tmp_S=S;
//	vector<int>tmp_B=B;
//	vector<string>tmp_C=country;
//	int G_num;
//	int S_num;
//	int B_num;
//
//		sort(tmp_G.begin(),tmp_G.end());
//		for(int k=m-1;k>=0;)
//		{
//			G_num=find_s(G,tmp_G[k]);
//			if(G_num==1)
//			{
//				int tmp;
//				for(int j=0;j<m;j++)
//					if(G[j]==tmp_G[k])
//						tmp=j;
//				show.push_back(country[tmp]);
//			}
//			else
//			{
//				tmp_S=S;
//				for( int j=0;j<m;j++)
//					if(G[j]!=tmp_G[k])
//						tmp_S[j]=0;
//				sort(tmp_S.begin(),tmp_S.end());
//				for(int kk=m-1;kk>=m-G_num;)
//				{
//					S_num=find_s(S,tmp_S[kk]);
//					if(S_num==1)
//					{
//						int tmpp;
//						for(int jj=0;jj<m;jj++)
//							if(S[jj]==tmp_S[kk])
//								tmpp=jj;
//						show.push_back(country[tmpp]);
//					}
//					else
//					{
//						tmp_B=B;
//						for( int jj=0;jj<m;jj++)
//							if(S[jj]!=tmp_S[kk])
//								tmp_B[jj]=0;
//						sort(tmp_B.begin(),tmp_B.end());
//						for(int kkk=m-1;kkk>=m-S_num;)
//						{
//							B_num=find_s(B,tmp_B[kkk]);
//							if(B_num==1)
//							{
//								int tmppP;
//								for(int jjJ=0;jjJ<m;jjJ++)
//									if(B[jjJ]==tmp_B[kkk])
//										tmppP=jjJ;
//								show.push_back(country[tmppP]);
//							}
//							else
//							{
//								tmp_C=country;
//								for( int CC=0;CC<m;CC++)
//									if(B[CC]!=tmp_B[kkk])
//										tmp_C[CC]="ZZZZZZZZZZ";
//								sort(tmp_C.begin(),tmp_C.end());
//								for(int cs_num=0;cs_num<B_num;cs_num++)
//								{
//									show.push_back(tmp_C[cs_num]);
//								}
//
//							}
//							kkk-=B_num;
//						}
//					
//					}
//					kk-=S_num;
//			    }
//			
//		   }
//			k-=G_num;
//
//		}
//
//	for(vector<string>::iterator ks=show.begin();ks!=show.end();ks++)
//		cout<<*ks<<endl;
//
//	return 0;
//}
//
//int find_s(vector<int>g,int value)
//{
//	int num=0;
//	for(vector<int>::iterator i=g.begin();i!=g.end();i++)
//		if(*i==value)
//			num++;
//	return num;
//}