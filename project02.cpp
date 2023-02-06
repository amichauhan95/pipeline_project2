#include "project02.h"
using namespace std;
#include <string>


int i=0;
double r=0,e=0;
int rs[16];
string reg,opcode;
string HextoString(int hexIn) {
  char hexString[4*sizeof(int)+1];
  sprintf(hexString,"%i", hexIn); 
  return string(hexString);
}
void decodeExecute(char* buffer, size_t length)
{
  for(i= 0;i<length;i++)
  {
  if(((i+1)%4==0))
  {
    	
       
       reg=HextoString((unsigned int)(unsigned char)buffer[i-1]);
       opcode = HextoString((unsigned int)(unsigned char)buffer[i]);
       if(opcode=="16")
      	{	
      		if(reg=="0")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[0]=rs[u] + rs[p] ;
      		}
      		else if(reg=="1")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[1]=rs[u] + rs[p] ;
      		}
      		else if(reg=="2")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[2]=rs[u] + rs[p] ;
      		}
      		else if(reg=="3")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[3]=rs[u] + rs[p] ;
      		}
      		else if(reg=="4")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[4]=rs[u] + rs[p] ;
      		}
      		else if(reg=="5")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[5]=rs[u] + rs[p] ;
      		}
      		else if(reg=="6")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[6]=rs[u] + rs[p] ;
      		}
      		else if(reg=="7")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[7]=rs[u] + rs[p] ;
      		}
      		else if(reg=="8")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[8]=rs[u] + rs[p] ;
      		}
      		else if(reg=="9")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[9]=rs[u] + rs[p] ;
      		}
      		else if(reg=="10")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[10]=rs[u] + rs[p] ;
      		}
      		else if(reg=="11")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[11]=rs[u] + rs[p] ;
      		}
      		else if(reg=="12")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[12]=rs[u] + rs[p] ;
      		}
      		else if(reg=="13")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[13]=rs[u] + rs[p] ;
      		}
      		else if(reg=="14")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[14]=rs[u] + rs[p] ;
      		}
      		else if(reg=="15")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[15]=rs[u] + rs[p] ;
      		}
      		e++;
      		r++;
      	}
      	else if(opcode=="17")
      	{
      		if(reg=="0")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[0]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="1")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[1]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="2")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[2]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="3")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[3]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="4")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[4]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="5")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[5]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="6")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[6]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="7")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[7]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="8")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[8]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="9")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[9]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="10")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[10]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="11")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[11]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="12")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[12]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="13")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[13]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="14")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[14]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="15")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[15]=rs[u] + stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		e++;
      		r++;
      	}
      	else if(opcode=="0")
      	{
      		if(reg=="0")
      		{
      			rs[0]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="1")
      		{
      			rs[1]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="2")
      		{
      			rs[2]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="3")
      		{
      			rs[3]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="4")
      		{
      			rs[4]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="5"){
      		
      			rs[5]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="6")
      		{
      			rs[6]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="7")
      		{
      			rs[7]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="8")
      		{
      			rs[8]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="9")
      		{
      			rs[9]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="10")
      		{
      			rs[10]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="11")
      		{
      			rs[11]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="12")
      		{
      			rs[12]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="13")
      		{
      			rs[13]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="14")
      		{
      			rs[14]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		else if(reg=="15")
      		{
      			rs[15]=stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      		}
      		
      		e++;
      		r++;
      	}
      	else if(opcode=="32")
      	{
      		if(reg=="0")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[0]=rs[u] - rs[p] ;
      		}
      		else if(reg=="1")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[1]=rs[u] - rs[p] ;
      		}
      		else if(reg=="2")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[2]=rs[u] - rs[p] ;
      		}
      		else if(reg=="3")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[3]=rs[u] - rs[p] ;
      		}
      		else if(reg=="4")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[4]=rs[u] - rs[p] ;
      		}
      		else if(reg=="5")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[5]=rs[u] - rs[p] ;
      		}
      		else if(reg=="6")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[6]=rs[u] - rs[p] ;
      		}
      		else if(reg=="7")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[7]=rs[u] - rs[p] ;
      		}
      		else if(reg=="8")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[8]=rs[u] - rs[p] ;
      		}
      		else if(reg=="9")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[9]=rs[u] - rs[p] ;
      		}
      		else if(reg=="10")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[10]=rs[u] - rs[p] ;
      		}
      		else if(reg=="11")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[11]=rs[u] - rs[p] ;
      		}
      		else if(reg=="12")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[12]=rs[u] - rs[p] ;
      		}
      		else if(reg=="13")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[13]=rs[u] - rs[p] ;
      		}
      		else if(reg=="14")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[14]=rs[u] - rs[p] ;
      		}
      		else if(reg=="15")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[15]=rs[u] - rs[p] ;
      		}
      		e++;
      		r++;
      	}
      	else if(opcode=="33")
      	{
      		if(reg=="0")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[0]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="1")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[1]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="2")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[2]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="3")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[3]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="4")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[4]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="5")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[5]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="6")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[6]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="7")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[7]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="8")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[8]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="9")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[9]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="10")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[10]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="11")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[11]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="12")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[12]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="13")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[13]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="14")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[14]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="15")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[15]=rs[u] - stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      	
      		e++;
      		r++;
      	}
      	else if(opcode=="48")
      	{
      	
      		if(reg=="0")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[0]=rs[u] * rs[p] ;
      		}
      		else if(reg=="1")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[1]=rs[u] * rs[p] ;
      		}
      		else if(reg=="2")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[2]=rs[u] * rs[p] ;
      		}
      		else if(reg=="3")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[3]=rs[u] * rs[p] ;
      		}
      		else if(reg=="4")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[4]=rs[u] * rs[p] ;
      		}
      		else if(reg=="5")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[5]=rs[u] * rs[p] ;
      		}
      		else if(reg=="6")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[6]=rs[u] * rs[p] ;
      		}
      		else if(reg=="7")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[7]=rs[u] * rs[p] ;
      		}
      		else if(reg=="8")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[8]=rs[u] * rs[p] ;
      		}
      		else if(reg=="9")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[9]=rs[u] * rs[p] ;
      		}
      		else if(reg=="10")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[10]=rs[u] * rs[p] ;
      		}
      		else if(reg=="11")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[11]=rs[u] * rs[p] ;
      		}
      		else if(reg=="12")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[12]=rs[u] + rs[p] ;
      		}
      		else if(reg=="13")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[13]=rs[u] * rs[p] ;
      		}
      		else if(reg=="14")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[14]=rs[u] * rs[p] ;
      		}
      		else if(reg=="15")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[15]=rs[u] * rs[p] ;
      		}
      		e=e+2;
      		r++;
      	}
      	else if(opcode=="49")
      	{
      		if(reg=="0")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[0]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="1")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[1]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="2")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[2]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="3")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[3]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="4")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[4]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="5")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[5]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="6")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[6]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="7")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[7]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="8")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[8]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="9")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[9]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="10")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[10]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="11")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[11]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="12")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[12]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="13")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[13]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="14")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[14]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="15")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[15]=rs[u] * stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      	
      		e=e+2;
      		r++;
      	}
      	else if(opcode=="64")
      	{
      		if(reg=="0")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[0]=rs[u] / rs[p] ;
      		}
      		else if(reg=="1")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[1]=rs[u] /rs[p] ;
      		}
      		else if(reg=="2")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[2]=rs[u] / rs[p] ;
      		}
      		else if(reg=="3")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[3]=rs[u] / rs[p] ;
      		}
      		else if(reg=="4")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[4]=rs[u] / rs[p] ;
      		}
      		else if(reg=="5")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[5]=rs[u] / rs[p] ;
      		}
      		else if(reg=="6")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[6]=rs[u] / rs[p] ;
      		}
      		else if(reg=="7")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[7]=rs[u] / rs[p] ;
      		}
      		else if(reg=="8")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[8]=rs[u] / rs[p] ;
      		}
      		else if(reg=="9")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[9]=rs[u] / rs[p] ;
      		}
      		else if(reg=="10")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[10]=rs[u] / rs[p] ;
      		}
      		else if(reg=="11")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[11]=rs[u] / rs[p] ;
      		}
      		else if(reg=="12")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[12]=rs[u] / rs[p] ;
      		}
      		else if(reg=="13")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[13]=rs[u] / rs[p] ;
      		}
      		else if(reg=="14")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[14]=rs[u] / rs[p] ;
      		}
      		else if(reg=="15")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			int p= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));
      			
      			rs[15]=rs[u] / rs[p] ;
      		}
      		e=e+4;
      		r++;
      	}
      	else if(opcode=="65")
      	{
      		if(reg=="0")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[0]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="1")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[1]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="2")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[2]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="3")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[3]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="4")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[4]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="5")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[5]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="6")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[6]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="7")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[7]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="8")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[8]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="9")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[9]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="10")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[10]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="11")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[11]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="12")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[12]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="13")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[13]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="14")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[14]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		else if(reg=="15")
      		{
      			int u= stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-2]));
      			rs[15]=rs[u] / stoi(HextoString((unsigned int)(unsigned 					char)buffer[i-3]));;
      		}
      		e=e+4;
      		r++;
      	} 
   }
  }
  e++;
  
}

void fetch(char * path)
{
  std::ifstream ifs(path, std::ifstream::in );
  if( ifs.fail() ) throw "error";
  const std::size_t BUFF_SIZE = 1024;
  char buff[BUFF_SIZE];
  while( ifs.read (buff, sizeof(buff)) )
  {
    decodeExecute( buff, ifs.gcount() );
  }
  if(!ifs.eof() ) throw "error";
  decodeExecute(buff,ifs.gcount() );
  e++;
  ifs.close();
}
int main(int argc, char *argv[])
{
    Simple_Pipe simple_pipe;  
    if( 0 == argc ) 
    throw "missing argument";
    fetch(argv[1]);
    simple_pipe.print_regs();
    cout << "Total execution cycles:" << e <<endl;
    cout << "\nIPC: " << (r/e) <<endl <<endl;

    return 0;
}

void Simple_Pipe::print_regs(){
    printf("\nRegisters: \n");
    cout << "----------------------------------------" << endl;
    for(int i = 0; i < REG_COUNT; i+=2)
    {
        string regl("R");
        regl.append(to_string(i));
        regl.append(": ");
	
        string regr("R");
        regr.append(to_string(i+1));
        regr.append(": ");
        if(i < 15){
            cout << "  " <<setiosflags(ios::left) 
            << setw(5) << regl  <<setw(10) << rs[i] << " |   " 
            << setw(5) << regr <<setw(10) << rs[i+1] <<endl;
            cout << "----------------------------------------" <<endl;
        }else{
            cout << "  " <<setiosflags(ios::left) 
            <<setw(5) << regl <<setw(10) << rs[i] << " |   " <<endl;
            cout << "----------------------------------------" <<endl;
        }
    }  
    printf("\n");
}


