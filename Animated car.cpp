#include<graphics.h>
#include<iostream>
//#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	int gdriver=DETECT,gmode=DETECT,i=0,j=0;
	initgraph(&gdriver,&gmode,NULL);
	float speed=0;
	for(i;i<420;++i)
	{
		int k,k2=120;
		int r=12;
		k=i%10+300;
		//k=100;
		outtextxy(150,220,"While Super Cars in India");
		outtextxy(150,20,"Super Cars in Other Countries");
		setcolor(RED);
		line(0+i,20+k,20+i,20+k);
		line(20+i,20+k,20+i,50+k);
		line(20+i,50+k,85+i,20+k);
		line(85+i,20+k,85+i,50+k);
		line(85+i,50+k,115+i,50+k);
		line(115+i,50+k,115+i,35+k);
		line(115+i,35+k,200+i,60+k);
		line(200+i,60+k,160+i,60+k);
		line(130+i,60+k,70+i,60+k);
		line(0+i,60+k,40+i,60+k);
		line(0+i,60+k,0+i,20+k);

		//axes of wheel
		line(r*sin(i*i/180.0000)+55+i,-r*cos(-i*i/180.0000)+60+k,r*sin(-i*i/180.0000)+55+i,r*cos(-i*i/180.0000)+60+k);
		line(r*sin(i*i/180.0000)+145+i,-r*cos(-i*i/180.0000)+60+k,r*sin(-i*i/180.0000)+145+i,r*cos(-i*i/180.0000)+60+k);
		

		setcolor(WHITE);
		circle(55+i,60+k,12);
		//floodfill(55+i,60+k,WHITE);
		circle(145+i,60+k,12);
		circle(95+i,40+k,8);
		floodfill(95+i,40+k,WHITE);
		//kbhit();
		
		


		setcolor(GREEN);
		line(0+i,20+k2,20+i,20+k2);
		line(20+i,20+k2,20+i,50+k2);
		line(20+i,50+k2,85+i,20+k2);
		line(85+i,20+k2,85+i,50+k2);
		line(85+i,50+k2,115+i,50+k2);
		line(115+i,50+k2,115+i,35+k2);
		line(115+i,35+k2,200+i,60+k2);
		line(200+i,60+k2,160+i,60+k2);
		line(130+i,60+k2,70+i,60+k2);
		line(0+i,60+k2,40+i,60+k2);
		line(0+i,60+k2,0+i,20+k2);

		//axes of wheel
		line(r*sin(i*i/180.0000)+55+i,-r*cos(-i*i/180.0000)+60+k2,r*sin(-i*i/180.0000)+55+i,r*cos(-i*i/180.0000)+60+k2);
		line(r*sin(i*i/180.0000)+145+i,-r*cos(-i*i/180.0000)+60+k2,r*sin(-i*i/180.0000)+145+i,r*cos(-i*i/180.0000)+60+k2);
		

		setcolor(WHITE);
		circle(55+i,60+k2,12);
		circle(145+i,60+k2,12);
		circle(95+i,40+k2,8);
		floodfill(95+i,40+k2,WHITE);


				//from :mohit
		setcolor(YELLOW);
		line(0,60+12+k2,1000,60+12+k2	);
		line(0,60+12+310,1000,60+12+310);

		arc(50,60+12+310,180,0,5);
		arc(70,60+12+310,180,0,5);
		arc(90,60+12+310,180,0,5);
		arc(110,60+12+310,180,0,5);
		arc(130,60+12+310,180,0,5);
		arc(150,60+12+310,180,0,5);
		arc(170,60+12+310,180,0,5);
		arc(190,60+12+310,180,0,5);
		arc(210,60+12+310,180,0,5);
		//arc(230,60+12+310,180,0,5);
		//arc(250,60+12+310,180,0,5);
		

		arc(300,60+12+310,180,0,5);
		arc(320,60+12+310,180,0,5);
		arc(340,60+12+310,180,0,5);
		arc(360,60+12+310,180,0,5);
		arc(380,60+12+310,180,0,5);
		arc(400,60+12+310,180,0,5);
		arc(420,60+12+310,180,0,5);
		arc(440,60+12+310,180,0,5);
		arc(460,60+12+310,180,0,5);
		//arc(23,60+12+310,180,0,5);
		//arc(250,60+12+310,180,0,5);
		//line(0,40+k,1000,40+k);
		//scenery
		circle(120,70,25);
		floodfill(120,50,RED);

		circle(120,280,25);
		floodfill(120,280,RED);

		//circle(250,180,25);
		//floodfill(250,50,RED);
		//audience
	
		delay(10-speed);
		speed=speed+2;
		if(i==419)
		{
			i=1;
		}

		cleardevice();
		
	}
	closegraph();
	return 0;
}
