#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
class  SCREEN
{
	private:
		int i;
	public :
		void BUS();
		void WEL();
};
void SCREEN::BUS()
{
		for(i= 0;i<=250;i++)
		{
			cleardevice();
			setbkcolor(11);
			//road
			setcolor(15);
			line(0,390,640,390);
			//Lower Part of bus
			setcolor(12);
			line(50+i,360,105+i,360);
			arc(135+i,360,0,180,30);
			line(165+i,360,280+i,360);
			arc(310+i,360,0,180,30);
			line(340+i,360,385+i,360);
			//Upper body part of bus
			setcolor(8);
			line(100+i,195,260+i,195);
			line(50+i,285,385+i,285);
			rectangle(100+i,193,260+i,210);
			line(50+i,360,50+i,210);
			line(385+i,360,385+i,210);
			line(50+i,210,385+i,210);
			line(50+i,280,385+i,280);
			line(130+i,210,130+i,280);
			line(210+i,210,210+i,280);
			line(290+i,210,290+i,280);
			//windows
			setfillstyle(8,8);
			setcolor(15);
			bar(60+i,270,121+i,220);
			setcolor(3);
			rectangle(60+i,270,121+i,220);
			setcolor(15);
			bar(140+i,270,200+i,220);
			setcolor(3);
			rectangle(140+i,270,200+i,220);
			setcolor(15);
			bar(220+i,270,280+i,220);
			setcolor(3);
			rectangle(220+i,270,280+i,220);
			rectangle(300+i,270,375+i,220);
			//Wheels
			circle(135+i,360,25);
			circle(310+i,360,25);
			circle(135+i,360,25);
			circle(310+i,360,25);
			//Stearing wheel
			setcolor(14);
			line(375+i,270,360+i,255);
			arc(358+i,253,0,360,3);
			circle(358+i,253,6);
			//Driver
			setcolor(15);
			circle(325+i,240,9);
			line(322+i,249,324+i,270);
			line(322+i,249,358+i,255);
			//Name
			setcolor(4);
			settextstyle(1,0,2);
			outtextxy(90+i,300,"GHUMMAKAR BUS SERVICES...");
			delay(15);
	}
	cleardevice();
	WEL();
}
void SCREEN::WEL()
{
	cleardevice();
	setbkcolor(11);
	setfillstyle(11,15);
	bar(-1,42,641,460);
	setcolor(14);
	setlinestyle(3,4,4);
	rectangle(0,0,639,478);
	setcolor(9);
	rectangle(-1,0,640,40);
	setfillstyle(1,14);
	floodfill(2,12,9);
	setcolor(9);
	setcolor(13);
	settextstyle(1,0,4);
	outtextxy(120,1,"GHUMMAKAR BUS SERVICES...");
	outtextxy(121,1,"GHUMMAKAR BUS SERVICES...");
	settextstyle(2,0,5);
	setcolor(7);
	line(1,460,638,460);
	setcolor(4);
	outtextxy(247,460,"BUS RESURVATION SYSTEM (v-2.92)");
	outtextxy(248,460,"BUS RESURVATION SYSTEM (v-2.92)");
}
class MENU
{
	 private:
	 public:
		void newticket();
		void editticket();
		void resurve();
		void timetable();
		void exit();

};
void MENU::newticket()
{       setcolor(15);
	rectangle(0,41,95,65);
	setfillstyle(1,3);
	bar(1,42,94,64);
	setcolor(15);
	settextstyle(11,0,1);
	outtextxy(10,49,"NEW TICKET");
}
void MENU::editticket()
{
	setcolor(15);
	rectangle(95,41,200,65);
	setfillstyle(1,3);
	bar(96,42,199,64);
	setcolor(15);
	settextstyle(11,0,1);
	outtextxy(105,49,"EDIT TICKET");
}
void MENU::resurve()
{
       setcolor(15);
       rectangle(200,41,282,65);
       setfillstyle(1,3);
       bar(201,42,281,64);
       setcolor(15);
       settextstyle(11,0,1);
       outtextxy(212,49,"RESURVE");
}
void MENU::timetable()
{
	setcolor(15);
	rectangle(282,41,390,65);
	setfillstyle(1,3);
	bar(283,42,389,64);
	setcolor(15);
	settextstyle(11,0,1);
	outtextxy(294,49,"TIME TABLE");
}
void MENU::exit()
{
	setcolor(15);
	rectangle(390,41,450,65);
	setfillstyle(1,3);
	bar(391,42,449,64);
	setcolor(15);
	settextstyle(11,0,1);
	outtextxy(404,49,"EXIT");
	rectangle(449,41,639,65);
	bar(450,42,638,64);
	setcolor(3);
	line(0,67,638,67);
}
class MOUSE
{
	private:
		union REGS i,o,in,out;
		int x,n,y;
	public:
		int initialize_mouse()
		{
			i.x.ax=0;
			int86(0x33,&i,&o);
			return 0;
		}
		int show_mouse()
		{
			i.x.ax=1;
			int86(0x33,&i,&o);
			return 0;
		}
		int get_mouse()
		{
			i.x.ax=3;
			int86(0x33,&i,&o);
			return 0;
		}
		void M_ALL();
		void EXIT();
};
void MOUSE::EXIT()
{
	cleardevice();
	setlinestyle(0,0,2);
	rectangle(109,94,531,306);
	setfillstyle(1,5);
	bar(110,95,530,305);
	rectangle(115,100,525,299);

	setfillstyle(1,4);
	bar(116,102,524,298);
	settextstyle(1,0,3);
	setcolor(14);
	outtextxy(224,100,"Thanks For Using...");
	outtextxy(225,100,"Thanks For Using...");
	setcolor(15);
	line(115,137,525,137);
	setcolor(2);
	setlinestyle(0,1,2);
	setcolor(15);
	settextstyle(1,0,1);
	outtextxy(120,142,"Design & Developed By :-");
	setfillstyle(1,10);
	bar(116,170,524,203);
	settextstyle(1,0,4);
	setcolor(1);
	outtextxy(185,165," DEEPAK SINGH ");
	setcolor(1);
	outtextxy(185,166," DEEPAK SINGH ");
	outtextxy(185,167," DEEPAK SINGH ");
	setcolor(1);
	outtextxy(185,168," DEEPAK SINGH ");

	setcolor(15);
	settextstyle(7,0,3);
	outtextxy(120,202,"Contact for more...");
	line(117,230,335,230);

	setcolor(10);
	settextstyle(1,0,2);
	outtextxy(118,237,"Phone :- 9525357044");
	settextstyle(1,0,2);
	outtextxy(118,260,"Email :- deepsinghkumar01@gmail.com");
	setcolor(8);
	line(170,330,460,330);
	setcolor(15);
	settextstyle(1,0,2);
	outtextxy(210,330,"Exiting please wait !...");
	setcolor(8);
	line(170,360,460,360);
	setcolor(15);
	settextstyle(1,0,2);
	outtextxy(265,370,"-d..$!ng#");
	delay(5000);
	sound(9999);
	cleardevice();
	delay(30);
	nosound();
	cleardevice();
	exit(0);
}
void MOUSE::M_ALL()
{
	show_mouse();
	get_mouse();
	 //	while(1)//!kbhit())
       while(!kbhit())
       {
		 o.x.bx=0;
		show_mouse();
	       get_mouse();
	       //NEW TICKET
	       if(o.x.bx==1&&o.x.cx<95&&o.x.cx>1&&o.x.dx<65&&o.x.dx>41)
	       {
			sound(1200);
			delay(300);
			nosound();
	       }
	       //EDIT TICKET
	       if(o.x.bx==1&&o.x.cx<200&&o.x.cx>95&&o.x.dx<65&&o.x.dx>41)
	       {
			sound(1200);
			delay(300);
			nosound();
	       }
	       //RESURVE
	       if(o.x.bx==1&&o.x.cx<282&&o.x.cx>200&&o.x.dx<65&&o.x.dx>41)
	       {
			sound(1200);
			delay(300);
			nosound();
	       }
	       //TIME TABLE
	       if(o.x.bx==1&&o.x.cx<390&&o.x.cx>282&&o.x.dx<65&&o.x.dx>41)
	       {
			sound(1200);
			delay(300);
			nosound();
	       }
	       //EXIT
	       if(o.x.bx==1&&o.x.cx<450&&o.x.cx>390&&o.x.dx<65&&o.x.dx>41)
	       {
			sound(1200);
			delay(300);
			nosound();
			EXIT();
	       }
	}
}
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	SCREEN S;
	S.BUS();
	S.WEL();
	MENU M;
	M.newticket();
	M.editticket();
	M.resurve();
	M.timetable();
	M.exit();
	MOUSE MO;
	MO.M_ALL();
	getch();
	cleardevice();
	return 0;
}