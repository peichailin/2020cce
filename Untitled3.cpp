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
void draw()
{
    background(#C47AF2);
    for(int i=0;i<5;i++)
    {
        text(a[i],i*80,100);
    }
}//直接跑出結果
