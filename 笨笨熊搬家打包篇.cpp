//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int val;
//	cin>>val;
//	int num;
//	cin>>num;
//	int total=0;
//	vector<int> sing(num);
//	for(int i=0;i<num;i++)
//	{
//		cin>>sing[i];
//	}
//	int begin=0;
//	int end=num-1;
//	sort(sing.begin(),sing.end());
//	while(begin<=end)
//	{
//		if(begin==end)
//		{
//			total++;
//			break;
//		}
//		if(sing[end]+sing[begin]<=val)
//		{
//			end--;
//			begin++;
//		}
//		else
//		{
//			end--;
//		}
//		total++;
//	}
//	cout<<total;
//	return 0;
//}