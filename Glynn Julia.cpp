    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    main()
{
      initwindow(1335,680,"IMAGE 1",0,0);
      float cx,cy,z1x=0,z1y=0,zdum1,zdum2,znxt=0,zprex,zprey,th;
      int k;
      for(int i=1;i<1350;i++)
      {
      for(int j=1;j<680;j++)
      {
           //whole
           cy=j*.0020-0.6812;
           cx=i*-0.0019+1.502;
           //single
           //cy=i*.00028-0.1872;
           //cx=j*-0.00043-0.392;
           z1x=cx;z1y=cy;
           zdum1=cx;zdum2=cy;
           //znxt=sqrt(pow(z1x,2)+pow(z1y,2));
           for(k=1;(k<100&&(zdum1+zdum2)<16);k++)
            {
                zdum1=z1x*z1x;
                zdum2=z1y*z1y;
                th=atan2(z1y,z1x);
               
                z1x=pow(sqrt(zdum1+zdum2),1.5)*cos(1.5*th)-0.2;
                z1y=pow(sqrt(zdum1+zdum2),1.5)*sin(1.5*th)-0.0;
                
                //znxt=sqrt(pow(z1x,2)+pow(z1y,2));
                //cout<<znxt;
                
            }
           
           
          /* if(k<5) 
           {putpixel(i,j,COLOR(180-k*10,20,10));}             
           else if(k<15) 
           {putpixel(i,j,COLOR(10,180-k*20,20));}
           else *///if(k<85)
          // {putpixel(i,j,COLOR(k,k/2,k/2.3));}
          // else
           putpixel(i,j,COLOR(abs(z1y-340)/abs(z1x-775),k*2.5,60));
           
      }
      }
      writeimagefile("Black&White.jpeg",0,0,1335,680);

     getch();
      
}
