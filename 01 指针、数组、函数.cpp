////��װһ������������ð�����򣬽������е�Ԫ����������
//#include<iostream>
//
//using namespace std;
//
////����ð��������
//void BubbleSort(int * arr,int len)
//{
//	for(int i = 0;i<len-1;i++)		//һ��Ҫѭ���Ƚϼ���
//	{
//		for(int j = 0;j<len-i-1;j++)		//һ����һ��Ҫѭ���ȽϵĴ���
//		{
//			//���j>j+1��ֵ�򽻻�
//			if(arr[j]>arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//}
////������ӡ���麯��
//void PrintfArr(int * arr,int len)
//{
//	for(int i = 0;i<len;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//}
//
//int main()
//{
//	//��������
//	int arr[] = {4,3,6,9,1,2,10,8,7,5};
//	
//	//�������鳤��
//	int len = sizeof(arr)/sizeof(arr[0]);
//
//	cout<<"����ǰ�����飺arr[] = [ ";
//	PrintfArr(arr,len);
//	cout<<" ]"<<endl;
//
//	//����ð��������
//	BubbleSort(arr,len);
//
//	//��ӡ����������
//	cout<<"�������е�����Ϊ��arr[] = [ ";
//	PrintfArr(arr,len);
//	cout<<" ]"<<endl;
//
//	system("pause");
//	return 0;
//}