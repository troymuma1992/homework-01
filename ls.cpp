#include<iostream>
#include<fstream>

using namespace std;

int Max(int num[], int number)
{
    int i;
    int nSum; //��ǰ���к�
    int maxSum; //������к�

    nSum=0;
    maxSum = num[0];

    for (i = 0; i < number; i++)
    {
        nSum = nSum + num[i];
        if (nSum > maxSum)
        {
            maxSum = nSum;
        }

        /* ��̬�滮���֣�������ǰ��Ϊ���������� */
        if (nSum < 0)
        {
            nSum = 0;
        }
    }
    return maxSum;
}


int main()
{
	int num[10000],number,sum;
	cout<<"please enter the number of the num"<<endl;
	cin>>number;//�������������ĸ���
	cout<<"please enter the num"<<endl;
	for(int i=0;i<number;i++)
	{
		cin>>num[i];
	}

	sum=Max(num,number);
	cout<<sum<<endl;
	cin>>number;

	return 0;
}