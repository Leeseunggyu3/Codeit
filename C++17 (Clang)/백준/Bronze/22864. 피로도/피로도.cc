#include<iostream>
using namespace std;

int main()
{
	int Fetigue=0;
	int Work=0;
	/*
	A = 1시간 일했을때 쌓이는 피로
	B = 1시간 동안 처리한 일
	C = 1시간 쉬면 줄어드는 피로
	M = 넘기면 번아웃 오는 피로의 양
	*/
	int A, B, C, M;
	
	cin >> A >> B >> C >> M;

	for (int H = 0; H < 24; H++) 
	{
		
		/*
		* 만약
		*  Fetigue + A가 M보다 크면? -> C만큼 Fetigue 줄이면서 쉬기
		*  Fetigue + A가 M보다 작거나 같으면? -> Work+B 하고 Fetigue + A
		*/
		if (A <= M)
		{
			if (Fetigue + A > M)
			{
				Fetigue -= C;
				if (Fetigue < 0) Fetigue = 0;
			}
			else if (Fetigue + A <= M)
			{
				Work += B;
				Fetigue += A;
			}
		}
	}
	cout << Work;
}