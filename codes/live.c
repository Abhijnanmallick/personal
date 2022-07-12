#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
int main()
{
//gcc is must to run this program
//time as per my device
time_t now;
time(&now);
struct tm *local=localtime(&now);
//got the hours in 24 hours pattern
int hours; 
//declaring the characters to hold the address of the images
hours=local->tm_hour;

//printf("%d",hours);	

//if else

if(hours==1)
{
	const wchar_t *file1=L"d:\\golu\\wallpaper1\\1.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file1,SPIF_UPDATEINIFILE);
}

if(hours==2)
{
	const wchar_t *file2=L"d:\\golu\\wallpaper1\\2.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file2,SPIF_UPDATEINIFILE);
}

if(hours==3)
{
	const wchar_t *file3=L"d:\\golu\\wallpaper1\\3.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file3,SPIF_UPDATEINIFILE);
}

if(hours==4)
{
	const wchar_t *file4=L"d:\\golu\\wallpaper1\\4.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file4,SPIF_UPDATEINIFILE);
}

if(hours==5)
{
	const wchar_t *file5=L"d:\\golu\\wallpaper1\\5.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file5,SPIF_UPDATEINIFILE);
}

if(hours==6)
{
	const wchar_t *file6=L"d:\\golu\\wallpaper1\\6.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file6,SPIF_UPDATEINIFILE);
}

if(hours==7)
{
	const wchar_t *file7=L"d:\\golu\\wallpaper1\\7.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file7,SPIF_UPDATEINIFILE);
}

if(hours==8)
{
	const wchar_t *file8=L"d:\\golu\\wallpaper1\\8.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file8,SPIF_UPDATEINIFILE);
}

if(hours==9)
{
	const wchar_t *file9=L"d:\\golu\\wallpaper1\\9.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file9,SPIF_UPDATEINIFILE);
}

if(hours==10)
{
	const wchar_t *file10=L"d:\\golu\\wallpaper1\\10.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file10,SPIF_UPDATEINIFILE);
}

if(hours==11)
{
	const wchar_t *file11=L"d:\\golu\\wallpaper1\\11.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file11,SPIF_UPDATEINIFILE);
}

if(hours==12)
{
	const wchar_t *file12=L"d:\\golu\\wallpaper1\\12.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file12,SPIF_UPDATEINIFILE);
}

if(hours==13)
{
	const wchar_t *file13=L"d:\\golu\\wallpaper1\\13.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file13,SPIF_UPDATEINIFILE);
}

if(hours==14)
{
	const wchar_t *file14=L"d:\\golu\\wallpaper1\\14.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file14,SPIF_UPDATEINIFILE);
}

if(hours==15)
{
	const wchar_t *file15=L"d:\\golu\\wallpaper1\\15.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file15,SPIF_UPDATEINIFILE);
}

if(hours==16)
{
	const wchar_t *file16=L"d:\\golu\\wallpaper1\\16.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file16,SPIF_UPDATEINIFILE);
}

if(hours==17)
{
	const wchar_t *file17=L"d:\\golu\\wallpaper1\\17.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file17,SPIF_UPDATEINIFILE);
}

if(hours==18)
{
	const wchar_t *file18=L"d:\\golu\\wallpaper1\\18.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file18,SPIF_UPDATEINIFILE);
}

if(hours==19)
{
	const wchar_t *file19=L"d:\\golu\\wallpaper1\\19.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file19,SPIF_UPDATEINIFILE);
}

if(hours==20)
{
	const wchar_t *file20=L"d:\\golu\\wallpaper1\\20.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file20,SPIF_UPDATEINIFILE);
}

if(hours==21)
{
	const wchar_t *file21=L"d:\\golu\\wallpaper1\\21.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file21,SPIF_UPDATEINIFILE);
}

if(hours==22)
{
	const wchar_t *file22=L"d:\\golu\\wallpaper1\\22.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file22,SPIF_UPDATEINIFILE);
}

if(hours==23)
{
	const wchar_t *file23=L"d:\\golu\\wallpaper1\\23.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file23,SPIF_UPDATEINIFILE);
}

if(hours==0)
{
	const wchar_t *file24=L"d:\\golu\\wallpaper1\\24.jpg";
	SystemParametersInfoW(SPI_SETDESKWALLPAPER,0,(void *)file24,SPIF_UPDATEINIFILE);
}	
system("exit");
}
