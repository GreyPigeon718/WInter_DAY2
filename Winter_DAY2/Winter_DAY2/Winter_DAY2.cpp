//有这样一道智力题：“某商店规定：三个空汽水瓶可以换一瓶汽水。小张手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？”答案是5瓶，方法如下：先用9个空瓶子换3瓶汽水，喝掉3瓶满的，喝完以后4个空瓶子，用3个再换一瓶，喝掉这瓶满的，这时候剩2个空瓶子。然后你让老板先借给你一瓶汽水，喝掉这瓶满的，喝完以后用3个空瓶子换一瓶满的还给老板。如果小张手上有n个空汽水瓶，最多可以换多少瓶汽水喝？
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x;
//	
//	while (cin >> x)
//	{
//		int sum = 0;
//		if (x == 0)
//			return 0;
//		else if (x == 1)
//			sum = 0;
//		while (x >= 3)
//		{
//			sum += x / 3;
//			x = x / 3 + x % 3;
//			
//		}
//		if (x == 2)
//		{
//			sum++;
//		}
//		cout << sum << endl;;
//	}
//	return 0;
//}


#include <iostream>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1;
	cin >> str2;
}