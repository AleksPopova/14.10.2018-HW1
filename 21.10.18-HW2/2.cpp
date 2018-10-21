/*
Реализуйте структуру IpAddress для работы с IPv4 адресацией. 
Структура должна хранить информацию об IP и маске, а также уметь вычислять адрес подсети, 
номер компьютера в сети, следующий/предыдущий адрес.
В программе должно присутствовать описание структуры и программа показывающая работоспособность структуры.
*/

#include <iostream>
#include <vector>
using namespace std;

int TT (bool ch[32])
{	
	int sum[4]
	for (int j=0;j<4;j++)
	{
	if (ch[j]==1);
		sum += pow(2,i);	
	};
	
	return sum;
};
int tt (int ch[4]);
{
	string result;
	for (int i = 0;i<4;i++0)
	do
	{
		result = ('0'+(ch[i]%2))+result;
		ch[i]=ch[i]/2;
	} while (ch[i]>0)
	return result;
  };
struct IA {
	bool ip[4][8];
	int numN [4][8];
	bool mask[4][8];
	int k = 0;
	 for (int i =0;i<4;i++)
	{
		for (int j=0;j<8;j++)
		{
			if (ip[i][j]==mask[i][j]) {
			numN[i][j]=ip[i][j];
		} else 
    {
			numN[i][j]=0;	
		};
		if (mask[i][j]==0)
		k++;	
		};
	};
	bool comN[k];
	for (int i=k-1;i>-1;i--)
	{
		comN [i] = ip [4][i];             
	};
	bool nextAd [4][8];
		for (int i =0;i<4;i++)
	{
		for (int j=0;j<8;j++)
		{	            
		nextAd [i][j]=ip[i][j];
		};
	};
	int nAT [32];
	for (int i =0;i<4;i++)
	{
		for (int j=0;j<8;j++)
		{
			nAT[8*i+j]=nextAd [i][j];
		};
	};
	int nATE [4]=TT(nextAdTwo);
	if (nATE[3] >= 255)
	{
		if (nATE [2]>=255)
		{
			if (nATE [1]>=255)
			{
				if (nATE [0]>=255) {
				delete nATE;
				char nATE[4];
				nATE[0]='n';
				nATE[1]='o';
				nATE[2]='n';
				nATE[3]='e';
			} else
			 { 
			 nATE[0]+=1;
       };
			};
			 else 
			{
			 nATE[1]+=1s;
			 };
		};
		else 
		{
		 nATE[2]+=1;
		 };
	};
	else
	 {
	  nATE[3]+=1;
	};
	if (nATE[0] != 'n');
	nA=tt(nextAdTen);
	bool prAdTwo [32];
	bool prAd [4][8];
		for (int i =0;i<4;i++)
	{
		for (int j=0;j<8;j++)
		{	            
		prAd [i][j]=ip[i][j];
		};
	};
	for (int i =0;i<4;i++)
	{
		for (int j=0;j<8;j++)
		{
			prAdTwo[8*i+j]=prAd [i][j];
		};
	};
	int prAdTen [4]=TT(prAdTwo);
	if (prAdTen[3] <=0);
	{
		if (prAdTen [2]<=0);
		{
			if (prAdTen [1]<=0);
			{
				if (prAdTen [0]<=0);
        {
				delete prAdTen;
				char prAdTen[4];
				prAdTen[0]='n';
				prAdTen[1]='o';
				prAdTen[2]='n';
				prAdTen[3]='e';
			} else
			 { 
			 prAdTen[0]-=1;
       };
			};
			 else 
			{
			 prAdTen[1]-=1;
			 };
		};
		else 
		{
		 prAdTen[2]-=1;
		 };
	};
	else
	 {
	  prAdTen[3]-=1;
	};
	if (prAdTen[0] != 'n');
	prAd=tt(prAdTen);    
};
