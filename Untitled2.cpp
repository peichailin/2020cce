
int []a={1,2,3,4,5,6,7,8,9,10}; //java�g�k//c ���}�C�g�k int a[]={1,2,3,4,5,6,7,8,9,10};
int i1,i2;
void setup()
{
    size(400,100);
    textSize(30);//�r���j�p
}
void draw()
{
    background(#C47AF2);
    for(int i=0;i<10;i++)
    {
        text(a[i],i*40,50);//i*40,50:i����m
    }
    rect(i1*40,50,30,30);//���
    rect(i2*40,50,30,30);//���
}
void mousePressed()
{
   for(int i=0;i<100;i++)//���Ҧh��X��,���y�h��100��
   {
     i1=(int) random(10);//�b�}�C�����Ʀr
     i2=(int) random(10);//�b�}�C�����Ʀr
     int temp=a[i1]; a[i1]=a[i2];a[i2]=temp;//���洫
   }
}
