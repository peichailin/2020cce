int []a=new int [47];//java 陣列
void setup()
{
    size(500,200);
    textSize(30);
    for(int i=0;i<47;i++) a[i]=i;//在格子放上對應的數字,要確定沒有缺牌
    for(int i=0;i<1000;i++)
    {
        int i1=(int) random(47);
        int i2=(int) random(47);
        int temp=a[i1]; a[i1]=a[i2];a[i2]=temp;//做交換
    }//先洗好牌,先知道得獎號碼,等一下再依序掉下來
}
int N=0,rolling=0;
void draw()
{
    textAlign(CENTER,CENTER);//文字對齊中間
    background(#C47AF2);
    for(int i=0;i<N;i++)//連動著mouse的N決定掉下幾次
    {
        int x=i*80+40;
        if(i==N-1 && rolling>0)
        {
          x+=rolling;
          rolling-=3; //每顆球位置-3
        }
        fill(255); ellipse(x,100,55,55);//ellipse橢圓 55,55橢圓大小 ,fill色彩 255白色
        fill(0); text(a[i],x+2,100+2);
        fill(0); text(a[i],x,100);//i*80,100 座標 ,第一個數字+40 往右靠40,fill色彩 0黑色

    }
}//直接跑出結果
void mousePressed ()
{
    rolling=500;
    N++;//按一次N++,利用MOUSE決定要掉幾顆球
}
