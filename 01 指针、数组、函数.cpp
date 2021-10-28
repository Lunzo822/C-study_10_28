////封装一个函数，利用冒泡排序，将数组中的元素升序排列
//#include<iostream>
//
//using namespace std;
//
////创建冒泡排序函数
//void BubbleSort(int * arr,int len)
//{
//	for(int i = 0;i<len-1;i++)		//一共要循环比较几轮
//	{
//		for(int j = 0;j<len-i-1;j++)		//一轮中一共要循环比较的次数
//		{
//			//如果j>j+1的值则交换
//			if(arr[j]>arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//}
////创建打印数组函数
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
//	//创建数组
//	int arr[] = {4,3,6,9,1,2,10,8,7,5};
//	
//	//计算数组长度
//	int len = sizeof(arr)/sizeof(arr[0]);
//
//	cout<<"排序前的数组：arr[] = [ ";
//	PrintfArr(arr,len);
//	cout<<" ]"<<endl;
//
//	//调用冒泡排序函数
//	BubbleSort(arr,len);
//
//	//打印排序后的数组
//	cout<<"升序排列的数组为：arr[] = [ ";
//	PrintfArr(arr,len);
//	cout<<" ]"<<endl;
//
//	system("pause");
//	return 0;
//}