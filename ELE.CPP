#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void domestic();
void ndomes();
void nondomes();
void sis();
void sislight();
void agrisup();
void agrifix();
struct
{
long int pr;
long int cr;
int unit;
float rate,r;
long long int eb,phn,p;
char a[20],b[30],c[20],d[20];
}v;
void main()
{
clrscr();
int sect;
cout<<"\t\t bikaner electricity bill supply ltd.";
cout<<"\n enter your KNO.: ";
cin>>v.eb;
cout<<"enter your phone number : ";
cin>>v.phn;
cout<<"enter your name : ";
gets(v.a);
cout<<"enter your address :";
gets(v.b);
cout<<"enter your meter status : ";
gets(v.c);
cout<<"your bill reading date : ";
gets(v.d);
clrscr();
cout<<"\n section/class : ";
cout<<"\n 1.domestic ";
cout<<"\n 2. non domestic(above50 kw)";
cout<<"\n 3. non domestic (below 50 kw)";
cout<<"\n 4.street light";
cout<<"\n 5. agricultural supply(metered)";
cout<<"\n 6.agricultural supply (unmetered)";
cout<<"\n 7.small industry";
cout<<"\n enter your section : ";
cin>>sect;
clrscr();
if(sect==1)
  {
domestic();
  }
else if(sect==2)
  {
ndomes();
   }
else if(sect==3)
  {
nondomes() ;
  }
else if(sect==4)
   {
sislight();
   }
else if(sect==5)
   {
agrisup();
   }
else if(sect==6)
   {
agrifix();
   }
else
   {
sis();
   }

clrscr();
cout<<"\t\tbikaner electricity bill supply";
cout<<"\n kno : "<<v.eb;
cout<<"\n phnone no. : "<<v.phn;
cout<<"\n date : "<<v.d;
cout<<"\nname : "<<v.a;
cout<<"\n address:"<<v.b;
cout<<"\n meter status : "<<v.c;
cout<<"\n current reading : "<<v.cr;
cout<<"\n previous reading : "<<v.pr;
cout<<"\n amount of bill : "<<v.rate;
cout<<"\n amount after due date : "<<v.r;
getch();
}

// domestic function
void domestic()
{
cout<<"enter your current reading : ";
cin>>v.cr;
cout<<"enter your previous reading : ";
cin>>v.pr;
v.unit=v.cr-v.pr;
if(v.unit<=50)
{
v.rate=v.unit*3.85+v.unit*0.40+100;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}

else if(v.unit<=150)
{
v.rate=v.unit*6.10+v.unit*0.40+200;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else if(v.unit<=300)
{
v.rate=v.unit*6.40+v.unit*0.40+220;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else if(v.unit<=500)
{
v.rate=v.unit*6.70+v.unit*0.40+265;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else
{
v.rate=v.unit*7.15+v.unit*0.40+100;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
}

// function non domestic
void ndomes ()
{
cout<<"enter your current reading : ";
cin>>v.cr;
cout<<"enter your previous reading : ";
cin>>v.pr;
v.unit=v.cr-v.pr;
if(v.unit<=100)
{
v.rate=v.unit*7.55+v.unit*0.40+230;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else if(v.unit<=200)
{
v.rate=v.unit*8.00+v.unit*0.40+230;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else if(v.unit<=500)
{
v.rate=v.unit*8.35+v.unit*0.40+275;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else
{
v.rate=v.unit*8.80+v.unit*0.40+330;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
}
// non domestic function(above 5 kw)
void nondomes ()
{
cout<<"enter your current reading : ";
cin>>v.cr;
cout<<"enter your previous reading : ";
cin>>v.pr;
v.unit=v.cr-v.pr;
if(v.unit<=100)
{
v.rate=v.unit*7.55+v.unit*0.40+95;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else if(v.unit<=200)
{
v.rate=v.unit*8.00+v.unit*0.40+95;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else if(v.unit<=500)
{
v.rate=v.unit*8.35+v.unit*0.40+95;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else
{
v.rate=v.unit*8.80+v.unit*0.40+105;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
}
// small industry
void sis()
{
cout<<"enter your current reading : ";
cin>>v.cr;
cout<<"enter your previous reading : ";
cin>>v.pr;
v.unit=v.cr-v.pr;
if(v.unit==500)
{
v.rate=v.unit*6.00+v.unit*0.40+65;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else
{
v.rate=v.unit*6.45+v.unit*0.40+65;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
}
// street light
void sislight()
{
cout<<"people in your locality: ";
cin>>v.p;
if(v.p==100000)
{
cout<<"enter your current reading : ";
cin>>v.cr;
cout<<"enter your previous reading : ";
cin>>v.pr;
v.unit=v.cr-v.pr;
v.rate=v.unit*6.55+v.unit*0.40+85;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else
{
cout<<"enter your current reading :";
cin>>v.cr;
cout<<"enter your previous reading : ";
cin>>v.pr;
v.unit=v.cr-v.pr;
v.rate=v.unit*7.05+v.unit*0.40+105;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
 }
// functtion agriculture
void agrifix()
{
cout<<"enter your current reading : ";
cin>>v.cr;
cout<<"enter your previous reading : ";
cin>>v.pr;
v.unit=v.cr-v.pr;
if(v.unit<=500)
{
v.rate=v.unit*635+15;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else
{
v.rate=v.unit*765+30;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
}
// function agricultural
void agrisup()
{
cout<<"enter your current reading : ";
cin>>v.cr;
cout<<"enter your previous reading : ";
cin>>v.pr;
v.unit=v.cr-v.pr;
if(v.unit<=500)
{
v.rate=v.unit*4.75+v.unit*0.40+15;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
else
{
v.rate=v.unit*6.05+v.unit*0.40+30;
v.r=v.rate+(v.rate*2/100);
cout<<"rate before date : "<<v.rate<<endl;
cout<<"rate after date : "<<v.r;
}
}
