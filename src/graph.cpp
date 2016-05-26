#include "../inc/graph.h"
#include "../inc/stack.h"
void graph::enlarge()
{
  int i,j;
  short int **temp=new short int*[rozmiar+1];
  for(i=0;i<=rozmiar;i++)
      temp[i]=new short int[rozmiar+1];
  for(i=0;i<rozmiar;i++){
	for(j=0;j<rozmiar;j++)
            temp[i][j]=macierz[i][j];
        }
      for(i=0;i<=rozmiar;i++)
	{
	  temp[i][rozmiar]=0;
	  temp[rozmiar][i]=0;
	}
      for(i=0;i<rozmiar;i++)
	delete [] macierz[i];
      delete [] macierz;
      rozmiar++;
      macierz=temp;
}

void graph::add_vertex()
{
  if(rozmiar==0){
    macierz=new short int*[1];
    macierz[0]=new short int[1];
    rozmiar++;
    macierz[0][0]=0;
  }
  else
    enlarge();
}

void graph::add_edge(int x, int y, int w)
{
  if(x<=rozmiar && y<=rozmiar)
    {
        macierz[x][y]=w;
	macierz[y][x]=w;
    }
  else 
    throw "out of range target for new edge!";
}

void graph::add_edge(int x, int y)
{
  add_edge(x,y,1);
}

stack graph::get_neighbors(int x)
{
  stack s1;
  int i;
  if(x<rozmiar){
  for(i=0;i<rozmiar;i++)
    if(macierz[x][i]) s1.push(i);
  return s1;}
  else {throw "out of range target for get neighbors!"; }
}



bool graph::is_connected(int x, int y)
{
  if(x<=rozmiar && y<=rozmiar)
    {
      if(macierz[x][y]!=0)
      return 1;
      else
	return 0;
    }
  else 
    throw "out of range target for connection check";
  return 0;
}

void graph::insert(int x, short int **mac)
{
  int i;
  if(rozmiar<0){
  for(i=0;i<rozmiar;i++)
      delete [] macierz[i];
  delete [] macierz;
  }
  macierz = mac;
  rozmiar = x;
}

int graph::weight(int x, int y)
{
  return macierz[x][y];
}


