#include<graphics.h>
 int main()
    {
 	initwindow(500,500);
    settextstyle(3,HORIZ_DIR,2);
    int renk=15;
    int arkaRenk;
    
    while(1)
   
    {
    rectangle(0,0,100,100);
    outtextxy(10,10,"sil");
    rectangle(110,0,210,100);
    outtextxy(120,10,"renk");
    rectangle(220,0,370,100);
    outtextxy(230,10,"arka renk");
    	
    delay(100);
    	
    int x=mousex();
 	int y=mousey();
 	int q,w;
 	getmouseclick(WM_LBUTTONDBLCLK,q,w);
 	
 	if(q<100&&w<100)
 	{
 		if(q>0&&w>0)
 		{
 			cleardevice();
		 }
	 }
 	
 	if(q<210&&w<100)
        {
 		if(q>110&&w>0)
 		{
 		
 			outtextxy(200,200,"renk kodu:");
 			scanf("%d",&renk);
 			cleardevice();
		 }
	    }
 		if(q<370&&w<100)
     	{
 		if(q>220&&w>0)
 		 {
 		
 			outtextxy(200,200,"arka renk kodu:");
 			scanf("%d",&arkaRenk);
 			setbkcolor(arkaRenk);
 			cleardevice();
 			
		 }
	    }
 	putpixel(x,y,renk);	
	}
 	getch();
 	closegraph();
    }
 
