
int []a={1,2,3,4,5,6,7,8,9,10}; //java寫法//c 的陣列寫法 int a[]={1,2,3,4,5,6,7,8,9,10};
int i1,i2;
void setup()
{
    size(400,100);
    textSize(30);//字的大小
}
void draw()
{
    background(#C47AF2);
    for(int i=0;i<10;i++)
    {
        text(a[i],i*40,50);//i*40,50:i的位置
    }
    rect(i1*40,50,30,30);//方框
    rect(i2*40,50,30,30);//方框
}
void mousePressed()
{
   for(int i=0;i<100;i++)//抽籤多抽幾次,此句多抽100次
   {
     i1=(int) random(10);//在陣列中的數字
     i2=(int) random(10);//在陣列中的數字
     int temp=a[i1]; a[i1]=a[i2];a[i2]=temp;//做交換
   }
}
