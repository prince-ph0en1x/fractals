#include<graphics.h>
float c[3][2]={{0,0.5},{-0.25,0},{0.25,0}},sndt[3][2]={{-0.5,1},{-0.5,0},{0.5,0}},a[3][2][2]={{{0.5,0},{0,0.5}},{{0.5,0},{0,0.5}},{{0.5,0},{0,0.5}}};
int i,j,k;
void ifs(int);
    main(){
      initwindow(1350,680,"IMAGE 1",0,0);
      ifs(2);
      getch();}      
    void ifs(int n){      
      float t[3][2],tpre[3][2],rcvt[3][2];
      for(i=0;i<3;i++)for(j=0;j<2;j++)rcvt[i][j]=sndt[i][j];
      if(++n==12) return;
      for(int tn=0;tn<3;tn++){
              for(i=0;i<3;i++)for(j=0;j<2;j++){tpre[i][j]=rcvt[i][j];t[i][j]=0;}
              for(i=0;i<3;i++){for(j=0;j<2;j++){for(k=0;k<2;k++)t[i][j]+=tpre[i][j]*a[tn][j][k];t[i][j]+=c[tn][j];}if(i!=0)putpixel((t[i][0]+0.75)*770,(t[i][1]-1.10)*-600,COLOR(0,0,180));}
              for(i=0;i<3;i++)for(j=0;j<2;j++)sndt[i][j]=t[i][j];
              ifs(n);}}
