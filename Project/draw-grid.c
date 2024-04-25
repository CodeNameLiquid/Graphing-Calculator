#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
int check(float,float);
int main()
{
    HDC dng=GetDC(NULL);
    float r=250,col,row,x,y;
    for(row=0;row<r;row++)
    {
         y=((r-(1+row))-(1+r/2))/55.38;
        for(col=0;col<r*5;col++)
        {
            x=(col-(1+r/2))/55.38;
            if(check(x,y)==1)
            {
                SetPixel(dng,col,row,RGB(0,0,255));
            }
            else if((x*y)==0)
            {
                SetPixel(dng,col,row,RGB(0,0,255));
            }
            else
            {
                SetPixel(dng,col,row,RGB(255,0,0));
            }
        }
        printf("\n");

    }
ReleaseDC(NULL,dng);
    return 0;
}
int check(float x,float y)
{
    float r,s1,s2;
    r=pow(y,-1);
    s1 =fabs(r-x);
    s2=fabs(pow(x,-1)-y);
    if(s1*s2<0.01)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}